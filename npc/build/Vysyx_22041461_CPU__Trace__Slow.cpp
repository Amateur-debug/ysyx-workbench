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
        tracep->declBus(c+357,"clk", false,-1, 0,0);
        tracep->declBus(c+358,"rst", false,-1, 0,0);
        tracep->declQuad(c+359,"pc", false,-1, 63,0);
        tracep->declBus(c+361,"inst", false,-1, 31,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU rst", false,-1, 0,0);
        tracep->declQuad(c+359,"ysyx_22041461_CPU pc", false,-1, 63,0);
        tracep->declBus(c+361,"ysyx_22041461_CPU inst", false,-1, 31,0);
        tracep->declBus(c+362,"ysyx_22041461_CPU CD_IFreg_enable", false,-1, 0,0);
        tracep->declBus(c+282,"ysyx_22041461_CPU CD_IF_valid", false,-1, 0,0);
        tracep->declBus(c+283,"ysyx_22041461_CPU CD_IDreg_valid", false,-1, 0,0);
        tracep->declBus(c+363,"ysyx_22041461_CPU CD_IDreg_enable", false,-1, 0,0);
        tracep->declBus(c+364,"ysyx_22041461_CPU CD_EXEreg_valid", false,-1, 0,0);
        tracep->declBus(c+365,"ysyx_22041461_CPU CD_EXEreg_enable", false,-1, 0,0);
        tracep->declBus(c+366,"ysyx_22041461_CPU CD_MEMreg_valid", false,-1, 0,0);
        tracep->declBus(c+323,"ysyx_22041461_CPU CD_MEM_valid", false,-1, 0,0);
        tracep->declBus(c+332,"ysyx_22041461_CPU CD_MEMreg_enable", false,-1, 0,0);
        tracep->declBus(c+324,"ysyx_22041461_CPU CD_WBreg_valid", false,-1, 0,0);
        tracep->declQuad(c+326,"ysyx_22041461_CPU IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+389,"ysyx_22041461_CPU IFreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+367,"ysyx_22041461_CPU IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+368,"ysyx_22041461_CPU IF_inst", false,-1, 31,0);
        tracep->declBus(c+125,"ysyx_22041461_CPU IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+126,"ysyx_22041461_CPU IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+127,"ysyx_22041461_CPU IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+129,"ysyx_22041461_CPU ID_rd", false,-1, 4,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU ID_rs1", false,-1, 4,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU ID_rs2", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22041461_CPU ID_csr", false,-1, 11,0);
        tracep->declQuad(c+284,"ysyx_22041461_CPU ID_imm", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22041461_CPU ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22041461_CPU ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+288,"ysyx_22041461_CPU ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+289,"ysyx_22041461_CPU ID_PC_ctrl", false,-1, 0,0);
        tracep->declBus(c+290,"ysyx_22041461_CPU ID_CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+291,"ysyx_22041461_CPU ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+294,"ysyx_22041461_CPU ID_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+104,"ysyx_22041461_CPU EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+105,"ysyx_22041461_CPU EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22041461_CPU EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22041461_CPU EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+111,"ysyx_22041461_CPU EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22041461_CPU EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+113,"ysyx_22041461_CPU EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+114,"ysyx_22041461_CPU EXEreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declQuad(c+260,"ysyx_22041461_CPU EXE_out", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU EXE_valid_out", false,-1, 0,0);
        tracep->declBus(c+156,"ysyx_22041461_CPU MEMreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+157,"ysyx_22041461_CPU MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+159,"ysyx_22041461_CPU MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+160,"ysyx_22041461_CPU MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+369,"ysyx_22041461_CPU MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+161,"ysyx_22041461_CPU MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+162,"ysyx_22041461_CPU MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22041461_CPU MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22041461_CPU MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22041461_CPU MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU MEMreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+370,"ysyx_22041461_CPU MEM_valid_out", false,-1, 0,0);
        tracep->declBus(c+333,"ysyx_22041461_CPU MEM_ok", false,-1, 0,0);
        tracep->declQuad(c+371,"ysyx_22041461_CPU MEM_out", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU WBreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+2,"ysyx_22041461_CPU WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22041461_CPU WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22041461_CPU WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22041461_CPU WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22041461_CPU WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+9,"ysyx_22041461_CPU WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22041461_CPU WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22041461_CPU WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+15,"ysyx_22041461_CPU WBreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declQuad(c+295,"ysyx_22041461_CPU WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22041461_CPU WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22041461_CPU WB_ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22041461_CPU WB_ID_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+262,"ysyx_22041461_CPU WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+373,"ysyx_22041461_CPU WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+264,"ysyx_22041461_CPU WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+254,"ysyx_22041461_CPU WB_MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU IF_reg clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU IF_reg flush", false,-1, 0,0);
        tracep->declBus(c+362,"ysyx_22041461_CPU IF_reg IFreg_enable", false,-1, 0,0);
        tracep->declBus(c+289,"ysyx_22041461_CPU IF_reg IFreg_ctrl", false,-1, 0,0);
        tracep->declQuad(c+286,"ysyx_22041461_CPU IF_reg IFreg_next_pc", false,-1, 63,0);
        tracep->declQuad(c+326,"ysyx_22041461_CPU IF_reg IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+140,"ysyx_22041461_CPU IF_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+141,"ysyx_22041461_CPU IF_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+141,"ysyx_22041461_CPU IF_reg rst", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU IF clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU IF rst", false,-1, 0,0);
        tracep->declQuad(c+326,"ysyx_22041461_CPU IF IF_pc", false,-1, 63,0);
        tracep->declBus(c+282,"ysyx_22041461_CPU IF IF_valid", false,-1, 0,0);
        tracep->declBus(c+367,"ysyx_22041461_CPU IF IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+368,"ysyx_22041461_CPU IF IF_inst", false,-1, 31,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU IF ICACHE clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU IF ICACHE flush", false,-1, 0,0);
        tracep->declBus(c+282,"ysyx_22041461_CPU IF ICACHE ICACHE_valid", false,-1, 0,0);
        tracep->declQuad(c+326,"ysyx_22041461_CPU IF ICACHE ICACHE_pc", false,-1, 63,0);
        tracep->declBus(c+367,"ysyx_22041461_CPU IF ICACHE ICACHE_valid_out", false,-1, 0,0);
        tracep->declBus(c+368,"ysyx_22041461_CPU IF ICACHE ICACHE_inst", false,-1, 31,0);
        tracep->declBus(c+328,"ysyx_22041461_CPU IF ICACHE index", false,-1, 5,0);
        tracep->declBus(c+329,"ysyx_22041461_CPU IF ICACHE offset", false,-1, 2,0);
        tracep->declQuad(c+330,"ysyx_22041461_CPU IF ICACHE tag", false,-1, 54,0);
        tracep->declBus(c+375,"ysyx_22041461_CPU IF ICACHE hit1", false,-1, 0,0);
        tracep->declBus(c+376,"ysyx_22041461_CPU IF ICACHE hit2", false,-1, 0,0);
        tracep->declBus(c+377,"ysyx_22041461_CPU IF ICACHE num", false,-1, 0,0);
        tracep->declQuad(c+351,"ysyx_22041461_CPU IF ICACHE AXI_rdata", false,-1, 63,0);
        tracep->declArray(c+353,"ysyx_22041461_CPU IF ICACHE SRAM_data_in", false,-1, 127,0);
        tracep->declArray(c+274,"ysyx_22041461_CPU IF ICACHE SRAM_data_out", false,-1, 127,0);
        tracep->declBus(c+378,"ysyx_22041461_CPU IF ICACHE SRAM_WEN", false,-1, 0,0);
        tracep->declArray(c+343,"ysyx_22041461_CPU IF ICACHE SRAM_BWEN", false,-1, 127,0);
        tracep->declQuad(c+278,"ysyx_22041461_CPU IF ICACHE CacheLine1_data", false,-1, 63,0);
        tracep->declQuad(c+280,"ysyx_22041461_CPU IF ICACHE CacheLine2_data", false,-1, 63,0);
        tracep->declBus(c+390,"ysyx_22041461_CPU IF ICACHE i", false,-1, 31,0);
        tracep->declBus(c+142,"ysyx_22041461_CPU IF ICACHE rst_r1", false,-1, 0,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU IF ICACHE rst_r2", false,-1, 0,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU IF ICACHE rst", false,-1, 0,0);
        tracep->declBus(c+379,"ysyx_22041461_CPU IF ICACHE k", false,-1, 31,0);
        tracep->declBus(c+391,"ysyx_22041461_CPU IF ICACHE SRAM Bits", false,-1, 31,0);
        tracep->declBus(c+392,"ysyx_22041461_CPU IF ICACHE SRAM Word_Depth", false,-1, 31,0);
        tracep->declBus(c+393,"ysyx_22041461_CPU IF ICACHE SRAM Add_Width", false,-1, 31,0);
        tracep->declBus(c+391,"ysyx_22041461_CPU IF ICACHE SRAM Wen_Width", false,-1, 31,0);
        tracep->declBit(c+357,"ysyx_22041461_CPU IF ICACHE SRAM CLK", false,-1);
        tracep->declBit(c+394,"ysyx_22041461_CPU IF ICACHE SRAM CEN", false,-1);
        tracep->declBit(c+378,"ysyx_22041461_CPU IF ICACHE SRAM WEN", false,-1);
        tracep->declArray(c+343,"ysyx_22041461_CPU IF ICACHE SRAM BWEN", false,-1, 127,0);
        tracep->declBus(c+328,"ysyx_22041461_CPU IF ICACHE SRAM A", false,-1, 5,0);
        tracep->declArray(c+353,"ysyx_22041461_CPU IF ICACHE SRAM D", false,-1, 127,0);
        tracep->declArray(c+274,"ysyx_22041461_CPU IF ICACHE SRAM Q", false,-1, 127,0);
        tracep->declBit(c+395,"ysyx_22041461_CPU IF ICACHE SRAM cen", false,-1);
        tracep->declBit(c+380,"ysyx_22041461_CPU IF ICACHE SRAM wen", false,-1);
        tracep->declArray(c+347,"ysyx_22041461_CPU IF ICACHE SRAM bwen", false,-1, 127,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU ID_reg clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU ID_reg flush", false,-1, 0,0);
        tracep->declBus(c+363,"ysyx_22041461_CPU ID_reg IDreg_enable", false,-1, 0,0);
        tracep->declBus(c+367,"ysyx_22041461_CPU ID_reg IDreg_valid_fromIF", false,-1, 0,0);
        tracep->declBus(c+283,"ysyx_22041461_CPU ID_reg IDreg_valid_fromCD", false,-1, 0,0);
        tracep->declBus(c+368,"ysyx_22041461_CPU ID_reg IDreg_inst_in", false,-1, 31,0);
        tracep->declQuad(c+326,"ysyx_22041461_CPU ID_reg IDreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22041461_CPU ID_reg IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+126,"ysyx_22041461_CPU ID_reg IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+127,"ysyx_22041461_CPU ID_reg IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22041461_CPU ID_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+145,"ysyx_22041461_CPU ID_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+145,"ysyx_22041461_CPU ID_reg rst", false,-1, 0,0);
        tracep->declBus(c+126,"ysyx_22041461_CPU ID ID_inst", false,-1, 31,0);
        tracep->declBus(c+125,"ysyx_22041461_CPU ID ID_valid_in", false,-1, 0,0);
        tracep->declQuad(c+127,"ysyx_22041461_CPU ID ID_pc", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22041461_CPU ID ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22041461_CPU ID ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22041461_CPU ID ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22041461_CPU ID ID_csr_mepc", false,-1, 63,0);
        tracep->declBus(c+129,"ysyx_22041461_CPU ID ID_rd", false,-1, 4,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU ID ID_rs1", false,-1, 4,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU ID ID_rs2", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22041461_CPU ID ID_csr", false,-1, 11,0);
        tracep->declQuad(c+284,"ysyx_22041461_CPU ID ID_imm", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22041461_CPU ID ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22041461_CPU ID ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+288,"ysyx_22041461_CPU ID ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+289,"ysyx_22041461_CPU ID ID_PC_ctrl", false,-1, 0,0);
        tracep->declBus(c+290,"ysyx_22041461_CPU ID ID_CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+291,"ysyx_22041461_CPU ID ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU ID ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU ID ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+294,"ysyx_22041461_CPU ID ID_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+135,"ysyx_22041461_CPU ID opcode", false,-1, 6,0);
        tracep->declBus(c+136,"ysyx_22041461_CPU ID funct3", false,-1, 2,0);
        tracep->declBus(c+137,"ysyx_22041461_CPU ID funct6", false,-1, 5,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU ID funct7", false,-1, 6,0);
        tracep->declBus(c+139,"ysyx_22041461_CPU ID shamt", false,-1, 5,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU EXE_reg clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU EXE_reg flush", false,-1, 0,0);
        tracep->declBus(c+365,"ysyx_22041461_CPU EXE_reg EXEreg_enable", false,-1, 0,0);
        tracep->declBus(c+364,"ysyx_22041461_CPU EXE_reg EXEreg_valid_fromCD", false,-1, 0,0);
        tracep->declBus(c+288,"ysyx_22041461_CPU EXE_reg EXEreg_valid_fromID", false,-1, 0,0);
        tracep->declBus(c+129,"ysyx_22041461_CPU EXE_reg EXEreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU EXE_reg EXEreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU EXE_reg EXEreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22041461_CPU EXE_reg EXEreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+284,"ysyx_22041461_CPU EXE_reg EXEreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22041461_CPU EXE_reg EXEreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22041461_CPU EXE_reg EXEreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_ctrl_in", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_src_in", false,-1, 2,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU EXE_reg EXEreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+294,"ysyx_22041461_CPU EXE_reg EXEreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU EXE_reg EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU EXE_reg EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU EXE_reg EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU EXE_reg EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+104,"ysyx_22041461_CPU EXE_reg EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+105,"ysyx_22041461_CPU EXE_reg EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22041461_CPU EXE_reg EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22041461_CPU EXE_reg EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+111,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+113,"ysyx_22041461_CPU EXE_reg EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+114,"ysyx_22041461_CPU EXE_reg EXEreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU EXE_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU EXE_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU EXE_reg rst", false,-1, 0,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU EXE EXE_valid_in", false,-1, 0,0);
        tracep->declQuad(c+262,"ysyx_22041461_CPU EXE EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+373,"ysyx_22041461_CPU EXE EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+264,"ysyx_22041461_CPU EXE EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22041461_CPU EXE EXE_imm", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22041461_CPU EXE EXE_zimm", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22041461_CPU EXE EXE_pc", false,-1, 63,0);
        tracep->declBus(c+111,"ysyx_22041461_CPU EXE EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22041461_CPU EXE EXE_src", false,-1, 2,0);
        tracep->declQuad(c+260,"ysyx_22041461_CPU EXE EXE_out", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU EXE EXE_valid_out", false,-1, 0,0);
        tracep->declQuad(c+266,"ysyx_22041461_CPU EXE src1", false,-1, 63,0);
        tracep->declQuad(c+268,"ysyx_22041461_CPU EXE src2", false,-1, 63,0);
        tracep->declArray(c+270,"ysyx_22041461_CPU EXE middle", false,-1, 127,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU MEM_reg clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU MEM_reg flush", false,-1, 0,0);
        tracep->declBus(c+332,"ysyx_22041461_CPU MEM_reg MEMreg_enable", false,-1, 0,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU MEM_reg MEMreg_valid_fromEXE", false,-1, 0,0);
        tracep->declBus(c+366,"ysyx_22041461_CPU MEM_reg MEMreg_valid_fromCD", false,-1, 0,0);
        tracep->declQuad(c+260,"ysyx_22041461_CPU MEM_reg MEMreg_EXE_in", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU MEM_reg MEMreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU MEM_reg MEMreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU MEM_reg MEMreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+104,"ysyx_22041461_CPU MEM_reg MEMreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+105,"ysyx_22041461_CPU MEM_reg MEMreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22041461_CPU MEM_reg MEMreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22041461_CPU MEM_reg MEMreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+113,"ysyx_22041461_CPU MEM_reg MEMreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+114,"ysyx_22041461_CPU MEM_reg MEMreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+156,"ysyx_22041461_CPU MEM_reg MEMreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+157,"ysyx_22041461_CPU MEM_reg MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+159,"ysyx_22041461_CPU MEM_reg MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+160,"ysyx_22041461_CPU MEM_reg MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+369,"ysyx_22041461_CPU MEM_reg MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+161,"ysyx_22041461_CPU MEM_reg MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+162,"ysyx_22041461_CPU MEM_reg MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22041461_CPU MEM_reg MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22041461_CPU MEM_reg MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22041461_CPU MEM_reg MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU MEM_reg MEMreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+148,"ysyx_22041461_CPU MEM_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+149,"ysyx_22041461_CPU MEM_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+149,"ysyx_22041461_CPU MEM_reg rst", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU MEM clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU MEM flush", false,-1, 0,0);
        tracep->declBus(c+156,"ysyx_22041461_CPU MEM MEM_valid_in", false,-1, 0,0);
        tracep->declBus(c+323,"ysyx_22041461_CPU MEM MEM_valid_fromCD", false,-1, 0,0);
        tracep->declQuad(c+157,"ysyx_22041461_CPU MEM MEM_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+254,"ysyx_22041461_CPU MEM MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22041461_CPU MEM MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+370,"ysyx_22041461_CPU MEM MEM_valid_out", false,-1, 0,0);
        tracep->declBus(c+333,"ysyx_22041461_CPU MEM MEM_ok", false,-1, 0,0);
        tracep->declQuad(c+371,"ysyx_22041461_CPU MEM MEM_out", false,-1, 63,0);
        tracep->declBus(c+325,"ysyx_22041461_CPU MEM busy", false,-1, 0,0);
        tracep->declBus(c+170,"ysyx_22041461_CPU MEM align", false,-1, 0,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU MEM state", false,-1, 1,0);
        tracep->declQuad(c+334,"ysyx_22041461_CPU MEM rdata1", false,-1, 63,0);
        tracep->declQuad(c+336,"ysyx_22041461_CPU MEM rdata2", false,-1, 63,0);
        tracep->declQuad(c+338,"ysyx_22041461_CPU MEM rdata", false,-1, 63,0);
        tracep->declQuad(c+157,"ysyx_22041461_CPU MEM addr1", false,-1, 63,0);
        tracep->declQuad(c+171,"ysyx_22041461_CPU MEM addr2", false,-1, 63,0);
        tracep->declQuad(c+256,"ysyx_22041461_CPU MEM wdata1", false,-1, 63,0);
        tracep->declQuad(c+258,"ysyx_22041461_CPU MEM wdata2", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22041461_CPU MEM wmask", false,-1, 15,0);
        tracep->declBus(c+174,"ysyx_22041461_CPU MEM wmask1", false,-1, 7,0);
        tracep->declBus(c+175,"ysyx_22041461_CPU MEM wmask2", false,-1, 7,0);
        tracep->declBus(c+340,"ysyx_22041461_CPU MEM DCACHE_valid", false,-1, 0,0);
        tracep->declQuad(c+303,"ysyx_22041461_CPU MEM DCACHE_addr", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22041461_CPU MEM DCACHE_wdata", false,-1, 63,0);
        tracep->declBus(c+305,"ysyx_22041461_CPU MEM DCACHE_mask", false,-1, 7,0);
        tracep->declBus(c+176,"ysyx_22041461_CPU MEM DCACHE_wen", false,-1, 0,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU MEM DCACHE_valid_out", false,-1, 0,0);
        tracep->declQuad(c+341,"ysyx_22041461_CPU MEM DCACHE_rdata", false,-1, 63,0);
        tracep->declBus(c+150,"ysyx_22041461_CPU MEM rst_r1", false,-1, 0,0);
        tracep->declBus(c+151,"ysyx_22041461_CPU MEM rst_r2", false,-1, 0,0);
        tracep->declBus(c+151,"ysyx_22041461_CPU MEM rst", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU MEM DCACHE clk", false,-1, 0,0);
        tracep->declBus(c+151,"ysyx_22041461_CPU MEM DCACHE rst", false,-1, 0,0);
        tracep->declBus(c+340,"ysyx_22041461_CPU MEM DCACHE DCACHE_valid", false,-1, 0,0);
        tracep->declQuad(c+303,"ysyx_22041461_CPU MEM DCACHE DCACHE_addr", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22041461_CPU MEM DCACHE DCACHE_wdata", false,-1, 63,0);
        tracep->declBus(c+305,"ysyx_22041461_CPU MEM DCACHE DCACHE_mask", false,-1, 7,0);
        tracep->declBus(c+176,"ysyx_22041461_CPU MEM DCACHE DCACHE_wen", false,-1, 0,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU MEM DCACHE DCACHE_valid_out", false,-1, 0,0);
        tracep->declQuad(c+341,"ysyx_22041461_CPU MEM DCACHE DCACHE_rdata", false,-1, 63,0);
        tracep->declBus(c+306,"ysyx_22041461_CPU MEM DCACHE index", false,-1, 5,0);
        tracep->declBus(c+307,"ysyx_22041461_CPU MEM DCACHE offset", false,-1, 2,0);
        tracep->declQuad(c+308,"ysyx_22041461_CPU MEM DCACHE tag", false,-1, 54,0);
        tracep->declBus(c+310,"ysyx_22041461_CPU MEM DCACHE hit1", false,-1, 0,0);
        tracep->declBus(c+311,"ysyx_22041461_CPU MEM DCACHE hit2", false,-1, 0,0);
        tracep->declBus(c+312,"ysyx_22041461_CPU MEM DCACHE inmemory", false,-1, 0,0);
        tracep->declQuad(c+313,"ysyx_22041461_CPU MEM DCACHE AXI_rdata", false,-1, 63,0);
        tracep->declArray(c+383,"ysyx_22041461_CPU MEM DCACHE SRAM_data_in", false,-1, 127,0);
        tracep->declArray(c+92,"ysyx_22041461_CPU MEM DCACHE SRAM_data_out", false,-1, 127,0);
        tracep->declBus(c+387,"ysyx_22041461_CPU MEM DCACHE SRAM_WEN", false,-1, 0,0);
        tracep->declArray(c+315,"ysyx_22041461_CPU MEM DCACHE SRAM_BWEN", false,-1, 127,0);
        tracep->declQuad(c+96,"ysyx_22041461_CPU MEM DCACHE CacheLine1_data", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22041461_CPU MEM DCACHE CacheLine2_data", false,-1, 63,0);
        tracep->declBus(c+123,"ysyx_22041461_CPU MEM DCACHE state", false,-1, 2,0);
        tracep->declBus(c+390,"ysyx_22041461_CPU MEM DCACHE i", false,-1, 31,0);
        tracep->declBus(c+124,"ysyx_22041461_CPU MEM DCACHE k", false,-1, 31,0);
        tracep->declBus(c+391,"ysyx_22041461_CPU MEM DCACHE SRAM Bits", false,-1, 31,0);
        tracep->declBus(c+392,"ysyx_22041461_CPU MEM DCACHE SRAM Word_Depth", false,-1, 31,0);
        tracep->declBus(c+393,"ysyx_22041461_CPU MEM DCACHE SRAM Add_Width", false,-1, 31,0);
        tracep->declBus(c+391,"ysyx_22041461_CPU MEM DCACHE SRAM Wen_Width", false,-1, 31,0);
        tracep->declBit(c+357,"ysyx_22041461_CPU MEM DCACHE SRAM CLK", false,-1);
        tracep->declBit(c+394,"ysyx_22041461_CPU MEM DCACHE SRAM CEN", false,-1);
        tracep->declBit(c+387,"ysyx_22041461_CPU MEM DCACHE SRAM WEN", false,-1);
        tracep->declArray(c+315,"ysyx_22041461_CPU MEM DCACHE SRAM BWEN", false,-1, 127,0);
        tracep->declBus(c+306,"ysyx_22041461_CPU MEM DCACHE SRAM A", false,-1, 5,0);
        tracep->declArray(c+383,"ysyx_22041461_CPU MEM DCACHE SRAM D", false,-1, 127,0);
        tracep->declArray(c+92,"ysyx_22041461_CPU MEM DCACHE SRAM Q", false,-1, 127,0);
        tracep->declBit(c+395,"ysyx_22041461_CPU MEM DCACHE SRAM cen", false,-1);
        tracep->declBit(c+388,"ysyx_22041461_CPU MEM DCACHE SRAM wen", false,-1);
        tracep->declArray(c+319,"ysyx_22041461_CPU MEM DCACHE SRAM bwen", false,-1, 127,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU WB_reg clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU WB_reg flush", false,-1, 0,0);
        tracep->declBus(c+395,"ysyx_22041461_CPU WB_reg WBreg_enable", false,-1, 0,0);
        tracep->declBus(c+370,"ysyx_22041461_CPU WB_reg WBreg_valid_fromMEM", false,-1, 0,0);
        tracep->declBus(c+324,"ysyx_22041461_CPU WB_reg WBreg_valid_fromCD", false,-1, 0,0);
        tracep->declQuad(c+157,"ysyx_22041461_CPU WB_reg WBreg_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+371,"ysyx_22041461_CPU WB_reg WBreg_MEM_in", false,-1, 63,0);
        tracep->declBus(c+159,"ysyx_22041461_CPU WB_reg WBreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+160,"ysyx_22041461_CPU WB_reg WBreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+161,"ysyx_22041461_CPU WB_reg WBreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+162,"ysyx_22041461_CPU WB_reg WBreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22041461_CPU WB_reg WBreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22041461_CPU WB_reg WBreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU WB_reg WBreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU WB_reg WBreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+2,"ysyx_22041461_CPU WB_reg WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22041461_CPU WB_reg WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22041461_CPU WB_reg WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22041461_CPU WB_reg WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22041461_CPU WB_reg WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+9,"ysyx_22041461_CPU WB_reg WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22041461_CPU WB_reg WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22041461_CPU WB_reg WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+15,"ysyx_22041461_CPU WB_reg WBreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+152,"ysyx_22041461_CPU WB_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+153,"ysyx_22041461_CPU WB_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+153,"ysyx_22041461_CPU WB_reg rst", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22041461_CPU WB clk", false,-1, 0,0);
        tracep->declBus(c+358,"ysyx_22041461_CPU WB flush", false,-1, 0,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU WB WB_valid", false,-1, 0,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU WB WB_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU WB WB_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU WB WB_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU WB WB_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+104,"ysyx_22041461_CPU WB WB_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+369,"ysyx_22041461_CPU WB WB_MEM_rs2", false,-1, 4,0);
        tracep->declQuad(c+2,"ysyx_22041461_CPU WB WB_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22041461_CPU WB WB_MEM_in", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22041461_CPU WB WB_rd", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22041461_CPU WB WB_rs1", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22041461_CPU WB WB_csr", false,-1, 11,0);
        tracep->declQuad(c+9,"ysyx_22041461_CPU WB WB_imm", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22041461_CPU WB WB_zimm", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22041461_CPU WB WB_pc", false,-1, 63,0);
        tracep->declBus(c+15,"ysyx_22041461_CPU WB WB_ctrl", false,-1, 3,0);
        tracep->declQuad(c+295,"ysyx_22041461_CPU WB WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22041461_CPU WB WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22041461_CPU WB WB_ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22041461_CPU WB WB_ID_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+262,"ysyx_22041461_CPU WB WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+373,"ysyx_22041461_CPU WB WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+264,"ysyx_22041461_CPU WB WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+254,"ysyx_22041461_CPU WB WB_MEM_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+23+i*2,"ysyx_22041461_CPU WB x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+181+i*2,"ysyx_22041461_CPU WB d", true,(i+0), 63,0);}}
        tracep->declQuad(c+19,"ysyx_22041461_CPU WB mtvec", false,-1, 63,0);
        tracep->declQuad(c+245,"ysyx_22041461_CPU WB mtvec_next", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22041461_CPU WB mepc", false,-1, 63,0);
        tracep->declQuad(c+247,"ysyx_22041461_CPU WB mepc_next", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU WB mcause", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22041461_CPU WB mcause_next", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU WB mstatus", false,-1, 63,0);
        tracep->declQuad(c+251,"ysyx_22041461_CPU WB mstatus_next", false,-1, 63,0);
        tracep->declBus(c+253,"ysyx_22041461_CPU WB i", false,-1, 31,0);
        tracep->declBus(c+91,"ysyx_22041461_CPU WB j", false,-1, 31,0);
        tracep->declBus(c+154,"ysyx_22041461_CPU WB rst_r1", false,-1, 0,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU WB rst_r2", false,-1, 0,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU WB rst", false,-1, 0,0);
        tracep->declBus(c+290,"ysyx_22041461_CPU CD CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+289,"ysyx_22041461_CPU CD CD_IF_ctrl", false,-1, 0,0);
        tracep->declBus(c+367,"ysyx_22041461_CPU CD CD_IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+125,"ysyx_22041461_CPU CD CD_ID_valid_in", false,-1, 0,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU CD CD_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU CD CD_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU CD CD_EXE_valid_in", false,-1, 0,0);
        tracep->declBus(c+111,"ysyx_22041461_CPU CD CD_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22041461_CPU CD CD_EXE_src", false,-1, 2,0);
        tracep->declBus(c+114,"ysyx_22041461_CPU CD CD_EXE_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU CD CD_EXE_rd", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU CD CD_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU CD CD_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+104,"ysyx_22041461_CPU CD CD_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+156,"ysyx_22041461_CPU CD CD_MEM_valid_in", false,-1, 0,0);
        tracep->declBus(c+333,"ysyx_22041461_CPU CD CD_MEM_ok", false,-1, 0,0);
        tracep->declBus(c+168,"ysyx_22041461_CPU CD CD_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU CD CD_MEM_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+159,"ysyx_22041461_CPU CD CD_MEM_rd", false,-1, 4,0);
        tracep->declBus(c+369,"ysyx_22041461_CPU CD CD_MEM_rs2", false,-1, 4,0);
        tracep->declBus(c+161,"ysyx_22041461_CPU CD CD_MEM_csr", false,-1, 11,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU CD CD_WB_valid_in", false,-1, 0,0);
        tracep->declBus(c+15,"ysyx_22041461_CPU CD CD_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+6,"ysyx_22041461_CPU CD CD_WB_rd", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22041461_CPU CD CD_WB_csr", false,-1, 11,0);
        tracep->declBus(c+362,"ysyx_22041461_CPU CD CD_IFreg_enable", false,-1, 0,0);
        tracep->declBus(c+282,"ysyx_22041461_CPU CD CD_IF_valid", false,-1, 0,0);
        tracep->declBus(c+283,"ysyx_22041461_CPU CD CD_IDreg_valid", false,-1, 0,0);
        tracep->declBus(c+363,"ysyx_22041461_CPU CD CD_IDreg_enable", false,-1, 0,0);
        tracep->declBus(c+364,"ysyx_22041461_CPU CD CD_EXEreg_valid", false,-1, 0,0);
        tracep->declBus(c+365,"ysyx_22041461_CPU CD CD_EXEreg_enable", false,-1, 0,0);
        tracep->declBus(c+366,"ysyx_22041461_CPU CD CD_MEMreg_valid", false,-1, 0,0);
        tracep->declBus(c+323,"ysyx_22041461_CPU CD CD_MEM_valid", false,-1, 0,0);
        tracep->declBus(c+332,"ysyx_22041461_CPU CD CD_MEMreg_enable", false,-1, 0,0);
        tracep->declBus(c+324,"ysyx_22041461_CPU CD CD_WBreg_valid", false,-1, 0,0);
        tracep->declBus(c+299,"ysyx_22041461_CPU CD ID_rs1_read", false,-1, 0,0);
        tracep->declBus(c+300,"ysyx_22041461_CPU CD ID_rs2_read", false,-1, 0,0);
        tracep->declBus(c+301,"ysyx_22041461_CPU CD ID_mtvec_read", false,-1, 0,0);
        tracep->declBus(c+302,"ysyx_22041461_CPU CD ID_mepc_read", false,-1, 0,0);
        tracep->declBus(c+115,"ysyx_22041461_CPU CD EXE_rd_write", false,-1, 0,0);
        tracep->declBus(c+116,"ysyx_22041461_CPU CD EXE_csr_write", false,-1, 0,0);
        tracep->declBus(c+117,"ysyx_22041461_CPU CD EXE_ecall_write", false,-1, 0,0);
        tracep->declBus(c+118,"ysyx_22041461_CPU CD EXE_rs1_read", false,-1, 0,0);
        tracep->declBus(c+119,"ysyx_22041461_CPU CD EXE_rs2_read", false,-1, 0,0);
        tracep->declBus(c+120,"ysyx_22041461_CPU CD EXE_csr_read", false,-1, 0,0);
        tracep->declBus(c+177,"ysyx_22041461_CPU CD MEM_rd_write", false,-1, 0,0);
        tracep->declBus(c+178,"ysyx_22041461_CPU CD MEM_csr_write", false,-1, 0,0);
        tracep->declBus(c+179,"ysyx_22041461_CPU CD MEM_ecall_write", false,-1, 0,0);
        tracep->declBus(c+180,"ysyx_22041461_CPU CD MEM_rs2_read", false,-1, 0,0);
        tracep->declBus(c+16,"ysyx_22041461_CPU CD WB_rd_write", false,-1, 0,0);
        tracep->declBus(c+17,"ysyx_22041461_CPU CD WB_csr_write", false,-1, 0,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU CD WB_ecall_write", false,-1, 0,0);
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
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp148;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out),64);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out),5);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out),5);
        tracep->fullSData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out),12);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out),64);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out),4);
        tracep->fullBit(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write));
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[10]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[11]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[12]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[13]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[14]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[15]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[16]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[17]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[18]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[19]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[20]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[21]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[22]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[23]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[24]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[25]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[26]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[27]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[28]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[29]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[30]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[31]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus),64);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j),32);
        tracep->fullWData(oldp+92,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out),128);
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[0U])))),64);
        tracep->fullQData(oldp+98,((((QData)((IData)(
                                                     vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[2U])))),64);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out));
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out),5);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out),5);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out),5);
        tracep->fullSData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out),12);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out),64);
        tracep->fullCData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out),5);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out),3);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out),4);
        tracep->fullCData(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out),4);
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read));
        tracep->fullCData(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state),2);
        tracep->fullBit(oldp+122,((5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))));
        tracep->fullCData(oldp+123,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state),3);
        tracep->fullIData(oldp+124,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__k),32);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out));
        tracep->fullIData(oldp+126,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out),32);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out),64);
        tracep->fullCData(oldp+129,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 7U))),5);
        tracep->fullCData(oldp+130,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+131,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+132,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+133,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                        >> 0xfU))))),64);
        tracep->fullCData(oldp+135,((0x7fU & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)),7);
        tracep->fullCData(oldp+136,((7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+137,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x1aU)),6);
        tracep->fullCData(oldp+138,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+139,((0x3fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0x14U))),6);
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r1));
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2));
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1));
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2));
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1));
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r1));
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2));
        tracep->fullBit(oldp+152,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1));
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out));
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out),64);
        tracep->fullCData(oldp+159,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out),5);
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out),5);
        tracep->fullSData(oldp+161,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out),12);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out),64);
        tracep->fullCData(oldp+168,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out),4);
        tracep->fullCData(oldp+169,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out),4);
        tracep->fullBit(oldp+170,((0U == (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out)))));
        tracep->fullQData(oldp+171,((8ULL + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out)),64);
        tracep->fullSData(oldp+173,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),16);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1),8);
        tracep->fullCData(oldp+175,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2),8);
        tracep->fullBit(oldp+176,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen));
        tracep->fullBit(oldp+177,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write));
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read));
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[10]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[11]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[12]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[13]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[14]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[15]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[16]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[17]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[18]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[19]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[20]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[21]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[22]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[23]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[24]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[25]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[26]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[27]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[28]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[29]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[30]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[31]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next),64);
        tracep->fullIData(oldp+253,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i),32);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata1),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata2),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22041461_CPU__DOT__EXE_out),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2),64);
        tracep->fullWData(oldp+270,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle),128);
        tracep->fullWData(oldp+274,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out),128);
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U])))),64);
        tracep->fullQData(oldp+280,((((QData)((IData)(
                                                      vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U])))),64);
        tracep->fullBit(oldp+282,(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid));
        tracep->fullBit(oldp+283,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid));
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22041461_CPU__DOT__ID_imm),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc),64);
        tracep->fullBit(oldp+288,(vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out));
        tracep->fullBit(oldp+289,(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl));
        tracep->fullCData(oldp+290,(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl),3);
        tracep->fullCData(oldp+291,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl),5);
        tracep->fullCData(oldp+292,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src),3);
        tracep->fullCData(oldp+293,(vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl),4);
        tracep->fullCData(oldp+294,(vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl),4);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data),64);
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read));
        tracep->fullBit(oldp+301,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read));
        tracep->fullBit(oldp+302,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read));
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr),64);
        tracep->fullCData(oldp+305,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask),8);
        tracep->fullCData(oldp+306,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+307,((7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr))),3);
        tracep->fullQData(oldp+308,((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+310,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1));
        tracep->fullBit(oldp+311,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2));
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory));
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata),64);
        tracep->fullWData(oldp+315,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN),128);
        __Vtemp131[0U] = (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[0U]);
        __Vtemp131[1U] = (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[1U]);
        __Vtemp131[2U] = (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[2U]);
        __Vtemp131[3U] = (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[3U]);
        tracep->fullWData(oldp+319,(__Vtemp131),128);
        tracep->fullBit(oldp+323,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid));
        tracep->fullBit(oldp+324,(vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid));
        tracep->fullBit(oldp+325,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__busy));
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc),64);
        tracep->fullCData(oldp+328,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+329,((7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc))),3);
        tracep->fullQData(oldp+330,((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                     >> 9U)),55);
        tracep->fullBit(oldp+332,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable));
        tracep->fullBit(oldp+333,(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok));
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata),64);
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid));
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_rdata),64);
        tracep->fullWData(oldp+343,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN),128);
        __Vtemp132[0U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U]);
        __Vtemp132[1U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U]);
        __Vtemp132[2U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U]);
        __Vtemp132[3U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U]);
        tracep->fullWData(oldp+347,(__Vtemp132),128);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata),64);
        tracep->fullWData(oldp+353,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in),128);
        tracep->fullBit(oldp+357,(vlSelf->clk));
        tracep->fullBit(oldp+358,(vlSelf->rst));
        tracep->fullQData(oldp+359,(vlSelf->pc),64);
        tracep->fullIData(oldp+361,(vlSelf->inst),32);
        tracep->fullBit(oldp+362,(vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable));
        tracep->fullBit(oldp+363,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable));
        tracep->fullBit(oldp+364,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid));
        tracep->fullBit(oldp+365,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable));
        tracep->fullBit(oldp+366,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid));
        tracep->fullBit(oldp+367,(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out));
        tracep->fullIData(oldp+368,(((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num)
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
        tracep->fullCData(oldp+369,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out),5);
        tracep->fullBit(oldp+370,(((~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                                                   ? 
                                                  (5U 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))))));
        tracep->fullQData(oldp+371,(((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                      ? 0ULL : ((4U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                   ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata
                                                   : (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))
                                                   : (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))))
                                                   : 0ULL))))),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                                    [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out]),64);
        tracep->fullBit(oldp+375,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1));
        tracep->fullBit(oldp+376,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2));
        tracep->fullBit(oldp+377,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num));
        tracep->fullBit(oldp+378,((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                         | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))))));
        tracep->fullIData(oldp+379,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__k),32);
        tracep->fullBit(oldp+380,((1U & (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                            | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                                  & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)))))))));
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata),64);
        VL_EXTEND_WQ(128,64, __Vtemp133, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata);
        VL_EXTEND_WQ(128,64, __Vtemp138, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        VL_EXTEND_WQ(128,64, __Vtemp142, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
            __Vtemp148[0U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp133[0U]
                                   : 0U) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                         >> 3U)))]
                                             ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                             >> 3U)))]
                                                 ? 
                                                __Vtemp138[0U]
                                                 : 0U)
                                             : __Vtemp142[0U]));
            __Vtemp148[1U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp133[1U]
                                   : 0U) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                         >> 3U)))]
                                             ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                             >> 3U)))]
                                                 ? 
                                                __Vtemp138[1U]
                                                 : 0U)
                                             : __Vtemp142[1U]));
            __Vtemp148[2U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp133[2U]
                                   : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                       ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata)
                                       : 0U)) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                  ? 
                                                 (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                   ? 
                                                  __Vtemp138[2U]
                                                   : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata))
                                                  : 
                                                 __Vtemp142[2U]));
            __Vtemp148[3U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp133[3U]
                                   : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                       ? (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata 
                                                  >> 0x20U))
                                       : 0U)) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                  ? 
                                                 (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                   ? 
                                                  __Vtemp138[3U]
                                                   : (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata 
                                                              >> 0x20U)))
                                                  : 
                                                 __Vtemp142[3U]));
        } else {
            __Vtemp148[0U] = 0U;
            __Vtemp148[1U] = 0U;
            __Vtemp148[2U] = 0U;
            __Vtemp148[3U] = 0U;
        }
        tracep->fullWData(oldp+383,(__Vtemp148),128);
        tracep->fullBit(oldp+387,(((3U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state)) 
                                   | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) 
                                      & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                         & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))))));
        tracep->fullBit(oldp+388,((1U & (~ ((3U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state)) 
                                            | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) 
                                               & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                  & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))))))));
        tracep->fullBit(oldp+389,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_valid_out));
        tracep->fullIData(oldp+390,(0x40U),32);
        tracep->fullIData(oldp+391,(0x80U),32);
        tracep->fullIData(oldp+392,(0x40U),32);
        tracep->fullIData(oldp+393,(6U),32);
        tracep->fullBit(oldp+394,(0U));
        tracep->fullBit(oldp+395,(1U));
    }
}
