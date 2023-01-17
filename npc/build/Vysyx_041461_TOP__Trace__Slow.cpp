// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_041461_TOP__Syms.h"


void Vysyx_041461_TOP___024root__traceInitSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_041461_TOP___024root__traceInitTop(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_041461_TOP___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_041461_TOP___024root__traceInitSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+613,"clk", false,-1, 0,0);
        tracep->declBus(c+614,"rst", false,-1, 0,0);
        tracep->declBus(c+613,"ysyx_041461_TOP clk", false,-1, 0,0);
        tracep->declBus(c+614,"ysyx_041461_TOP rst", false,-1, 0,0);
        tracep->declBit(c+19,"ysyx_041461_TOP io_master_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP io_master_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+20,"ysyx_041461_TOP io_master_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP io_master_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP io_master_bready", false,-1);
        tracep->declBit(c+23,"ysyx_041461_TOP io_master_arvalid", false,-1);
        tracep->declBus(c+24,"ysyx_041461_TOP io_master_arid", false,-1, 3,0);
        tracep->declBus(c+341,"ysyx_041461_TOP io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+342,"ysyx_041461_TOP io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+25,"ysyx_041461_TOP io_master_rready", false,-1);
        tracep->declBus(c+406,"ysyx_041461_TOP io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram0_cen", false,-1);
        tracep->declBit(c+407,"ysyx_041461_TOP io_sram0_wen", false,-1);
        tracep->declArray(c+408,"ysyx_041461_TOP io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+412,"ysyx_041461_TOP io_sram0_wdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram1_cen", false,-1);
        tracep->declBit(c+416,"ysyx_041461_TOP io_sram1_wen", false,-1);
        tracep->declArray(c+417,"ysyx_041461_TOP io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+421,"ysyx_041461_TOP io_sram1_wdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram2_cen", false,-1);
        tracep->declBit(c+425,"ysyx_041461_TOP io_sram2_wen", false,-1);
        tracep->declArray(c+426,"ysyx_041461_TOP io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+430,"ysyx_041461_TOP io_sram2_wdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram3_cen", false,-1);
        tracep->declBit(c+434,"ysyx_041461_TOP io_sram3_wen", false,-1);
        tracep->declArray(c+435,"ysyx_041461_TOP io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+439,"ysyx_041461_TOP io_sram3_wdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram4_cen", false,-1);
        tracep->declBit(c+444,"ysyx_041461_TOP io_sram4_wen", false,-1);
        tracep->declArray(c+445,"ysyx_041461_TOP io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+449,"ysyx_041461_TOP io_sram4_wdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram5_cen", false,-1);
        tracep->declBit(c+453,"ysyx_041461_TOP io_sram5_wen", false,-1);
        tracep->declArray(c+454,"ysyx_041461_TOP io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+458,"ysyx_041461_TOP io_sram5_wdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram6_cen", false,-1);
        tracep->declBit(c+462,"ysyx_041461_TOP io_sram6_wen", false,-1);
        tracep->declArray(c+463,"ysyx_041461_TOP io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+467,"ysyx_041461_TOP io_sram6_wdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP io_sram7_cen", false,-1);
        tracep->declBit(c+471,"ysyx_041461_TOP io_sram7_wen", false,-1);
        tracep->declArray(c+472,"ysyx_041461_TOP io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+476,"ysyx_041461_TOP io_sram7_wdata", false,-1, 127,0);
        tracep->declBit(c+388,"ysyx_041461_TOP AXI_CROSSBAR_awready", false,-1);
        tracep->declBit(c+389,"ysyx_041461_TOP AXI_CROSSBAR_wready", false,-1);
        tracep->declBit(c+390,"ysyx_041461_TOP AXI_CROSSBAR_bvalid", false,-1);
        tracep->declBus(c+391,"ysyx_041461_TOP AXI_CROSSBAR_bid", false,-1, 3,0);
        tracep->declBus(c+1,"ysyx_041461_TOP AXI_CROSSBAR_bresp", false,-1, 1,0);
        tracep->declBit(c+392,"ysyx_041461_TOP AXI_CROSSBAR_arready", false,-1);
        tracep->declBit(c+393,"ysyx_041461_TOP AXI_CROSSBAR_rvalid", false,-1);
        tracep->declBus(c+394,"ysyx_041461_TOP AXI_CROSSBAR_rid", false,-1, 3,0);
        tracep->declBus(c+395,"ysyx_041461_TOP AXI_CROSSBAR_rresp", false,-1, 1,0);
        tracep->declQuad(c+396,"ysyx_041461_TOP AXI_CROSSBAR_rdata", false,-1, 63,0);
        tracep->declBit(c+398,"ysyx_041461_TOP AXI_CROSSBAR_rlast", false,-1);
        tracep->declArray(c+352,"ysyx_041461_TOP Q0", false,-1, 127,0);
        tracep->declArray(c+356,"ysyx_041461_TOP Q1", false,-1, 127,0);
        tracep->declArray(c+360,"ysyx_041461_TOP Q2", false,-1, 127,0);
        tracep->declArray(c+364,"ysyx_041461_TOP Q3", false,-1, 127,0);
        tracep->declArray(c+368,"ysyx_041461_TOP Q4", false,-1, 127,0);
        tracep->declArray(c+372,"ysyx_041461_TOP Q5", false,-1, 127,0);
        tracep->declArray(c+376,"ysyx_041461_TOP Q6", false,-1, 127,0);
        tracep->declArray(c+380,"ysyx_041461_TOP Q7", false,-1, 127,0);
        tracep->declBus(c+384,"ysyx_041461_TOP rst_r1", false,-1, 0,0);
        tracep->declBus(c+385,"ysyx_041461_TOP rst_r2", false,-1, 0,0);
        tracep->declBus(c+385,"ysyx_041461_TOP rst_sync", false,-1, 0,0);
        tracep->declBit(c+613,"ysyx_041461_TOP core clock", false,-1);
        tracep->declBit(c+614,"ysyx_041461_TOP core reset", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_interrupt", false,-1);
        tracep->declBit(c+388,"ysyx_041461_TOP core io_master_awready", false,-1);
        tracep->declBit(c+19,"ysyx_041461_TOP core io_master_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP core io_master_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+389,"ysyx_041461_TOP core io_master_wready", false,-1);
        tracep->declBit(c+20,"ysyx_041461_TOP core io_master_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP core io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP core io_master_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP core io_master_bready", false,-1);
        tracep->declBit(c+390,"ysyx_041461_TOP core io_master_bvalid", false,-1);
        tracep->declBus(c+391,"ysyx_041461_TOP core io_master_bid", false,-1, 3,0);
        tracep->declBus(c+1,"ysyx_041461_TOP core io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+392,"ysyx_041461_TOP core io_master_arready", false,-1);
        tracep->declBit(c+23,"ysyx_041461_TOP core io_master_arvalid", false,-1);
        tracep->declBus(c+24,"ysyx_041461_TOP core io_master_arid", false,-1, 3,0);
        tracep->declBus(c+341,"ysyx_041461_TOP core io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+342,"ysyx_041461_TOP core io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+25,"ysyx_041461_TOP core io_master_rready", false,-1);
        tracep->declBit(c+393,"ysyx_041461_TOP core io_master_rvalid", false,-1);
        tracep->declBus(c+394,"ysyx_041461_TOP core io_master_rid", false,-1, 3,0);
        tracep->declBus(c+395,"ysyx_041461_TOP core io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+396,"ysyx_041461_TOP core io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+398,"ysyx_041461_TOP core io_master_rlast", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_awready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_awvalid", false,-1);
        tracep->declBus(c+630,"ysyx_041461_TOP core io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+631,"ysyx_041461_TOP core io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+632,"ysyx_041461_TOP core io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_wready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_wvalid", false,-1);
        tracep->declQuad(c+633,"ysyx_041461_TOP core io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_wlast", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_bready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_bvalid", false,-1);
        tracep->declBus(c+630,"ysyx_041461_TOP core io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_arready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_arvalid", false,-1);
        tracep->declBus(c+630,"ysyx_041461_TOP core io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+631,"ysyx_041461_TOP core io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+632,"ysyx_041461_TOP core io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_rready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_rvalid", false,-1);
        tracep->declBus(c+630,"ysyx_041461_TOP core io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+633,"ysyx_041461_TOP core io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_slave_rlast", false,-1);
        tracep->declBus(c+406,"ysyx_041461_TOP core io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram0_cen", false,-1);
        tracep->declBit(c+407,"ysyx_041461_TOP core io_sram0_wen", false,-1);
        tracep->declArray(c+408,"ysyx_041461_TOP core io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+412,"ysyx_041461_TOP core io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+352,"ysyx_041461_TOP core io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram1_cen", false,-1);
        tracep->declBit(c+416,"ysyx_041461_TOP core io_sram1_wen", false,-1);
        tracep->declArray(c+417,"ysyx_041461_TOP core io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+421,"ysyx_041461_TOP core io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+356,"ysyx_041461_TOP core io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram2_cen", false,-1);
        tracep->declBit(c+425,"ysyx_041461_TOP core io_sram2_wen", false,-1);
        tracep->declArray(c+426,"ysyx_041461_TOP core io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+430,"ysyx_041461_TOP core io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+360,"ysyx_041461_TOP core io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram3_cen", false,-1);
        tracep->declBit(c+434,"ysyx_041461_TOP core io_sram3_wen", false,-1);
        tracep->declArray(c+435,"ysyx_041461_TOP core io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+439,"ysyx_041461_TOP core io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+364,"ysyx_041461_TOP core io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram4_cen", false,-1);
        tracep->declBit(c+444,"ysyx_041461_TOP core io_sram4_wen", false,-1);
        tracep->declArray(c+445,"ysyx_041461_TOP core io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+449,"ysyx_041461_TOP core io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+368,"ysyx_041461_TOP core io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram5_cen", false,-1);
        tracep->declBit(c+453,"ysyx_041461_TOP core io_sram5_wen", false,-1);
        tracep->declArray(c+454,"ysyx_041461_TOP core io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+458,"ysyx_041461_TOP core io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+372,"ysyx_041461_TOP core io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram6_cen", false,-1);
        tracep->declBit(c+462,"ysyx_041461_TOP core io_sram6_wen", false,-1);
        tracep->declArray(c+463,"ysyx_041461_TOP core io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+467,"ysyx_041461_TOP core io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+376,"ysyx_041461_TOP core io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core io_sram7_cen", false,-1);
        tracep->declBit(c+471,"ysyx_041461_TOP core io_sram7_wen", false,-1);
        tracep->declArray(c+472,"ysyx_041461_TOP core io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+476,"ysyx_041461_TOP core io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+380,"ysyx_041461_TOP core io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+480,"ysyx_041461_TOP core CD_ID_conflict", false,-1, 0,0);
        tracep->declBus(c+481,"ysyx_041461_TOP core CD_ID_trap_out", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_041461_TOP core CD_EXE_conflict", false,-1, 0,0);
        tracep->declBus(c+27,"ysyx_041461_TOP core CD_EXE_trap_out", false,-1, 3,0);
        tracep->declBus(c+28,"ysyx_041461_TOP core CD_MEM_conflict", false,-1, 0,0);
        tracep->declBus(c+482,"ysyx_041461_TOP core CD_MEM_trap_out", false,-1, 3,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core CD_WB_trap_out", false,-1, 3,0);
        tracep->declQuad(c+483,"ysyx_041461_TOP core IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+485,"ysyx_041461_TOP core IF_trap_out", false,-1, 3,0);
        tracep->declBus(c+343,"ysyx_041461_TOP core IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+608,"ysyx_041461_TOP core IF_ready", false,-1, 0,0);
        tracep->declBus(c+486,"ysyx_041461_TOP core IF_inst", false,-1, 31,0);
        tracep->declBus(c+30,"ysyx_041461_TOP core IF_arvalid", false,-1, 0,0);
        tracep->declBus(c+487,"ysyx_041461_TOP core IF_araddr", false,-1, 31,0);
        tracep->declBus(c+630,"ysyx_041461_TOP core IF_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core IF_arlen", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_041461_TOP core IF_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core IF_arburst", false,-1, 1,0);
        tracep->declBus(c+31,"ysyx_041461_TOP core IF_rready", false,-1, 0,0);
        tracep->declBus(c+32,"ysyx_041461_TOP core IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+33,"ysyx_041461_TOP core IDreg_trap_out", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_041461_TOP core IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_041461_TOP core IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_041461_TOP core ID_rd", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_041461_TOP core ID_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_041461_TOP core ID_rs2", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_041461_TOP core ID_csr", false,-1, 11,0);
        tracep->declQuad(c+489,"ysyx_041461_TOP core ID_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_041461_TOP core ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+491,"ysyx_041461_TOP core ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+493,"ysyx_041461_TOP core ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+494,"ysyx_041461_TOP core ID_IFreg_ctrl", false,-1, 0,0);
        tracep->declBus(c+495,"ysyx_041461_TOP core ID_TYPE", false,-1, 2,0);
        tracep->declBus(c+496,"ysyx_041461_TOP core ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+497,"ysyx_041461_TOP core ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+498,"ysyx_041461_TOP core ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+499,"ysyx_041461_TOP core ID_WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+500,"ysyx_041461_TOP core ID_trap_out", false,-1, 3,0);
        tracep->declBus(c+609,"ysyx_041461_TOP core ID_ready", false,-1, 0,0);
        tracep->declBus(c+43,"ysyx_041461_TOP core EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+44,"ysyx_041461_TOP core EXEreg_trap_out", false,-1, 3,0);
        tracep->declBus(c+45,"ysyx_041461_TOP core EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_041461_TOP core EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_041461_TOP core EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_041461_TOP core EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+49,"ysyx_041461_TOP core EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_041461_TOP core EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_041461_TOP core EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_041461_TOP core EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_041461_TOP core EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+57,"ysyx_041461_TOP core EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+58,"ysyx_041461_TOP core EXEreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declQuad(c+59,"ysyx_041461_TOP core EXE_out", false,-1, 63,0);
        tracep->declBus(c+344,"ysyx_041461_TOP core EXE_valid_out", false,-1, 0,0);
        tracep->declBus(c+610,"ysyx_041461_TOP core EXE_ready", false,-1, 0,0);
        tracep->declBus(c+61,"ysyx_041461_TOP core MEMreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+62,"ysyx_041461_TOP core MEMreg_trap_out", false,-1, 3,0);
        tracep->declQuad(c+501,"ysyx_041461_TOP core MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_041461_TOP core MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+64,"ysyx_041461_TOP core MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+65,"ysyx_041461_TOP core MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+66,"ysyx_041461_TOP core MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+67,"ysyx_041461_TOP core MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_041461_TOP core MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_041461_TOP core MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+73,"ysyx_041461_TOP core MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+74,"ysyx_041461_TOP core MEMreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declBus(c+345,"ysyx_041461_TOP core MEM_valid_out", false,-1, 0,0);
        tracep->declBus(c+611,"ysyx_041461_TOP core MEM_ready", false,-1, 0,0);
        tracep->declQuad(c+346,"ysyx_041461_TOP core MEM_out", false,-1, 63,0);
        tracep->declBus(c+503,"ysyx_041461_TOP core MEM_trap_out", false,-1, 3,0);
        tracep->declBus(c+75,"ysyx_041461_TOP core MEM_awvalid", false,-1, 0,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core MEM_awaddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core MEM_awid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core MEM_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core MEM_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM_awburst", false,-1, 1,0);
        tracep->declBus(c+20,"ysyx_041461_TOP core MEM_wvalid", false,-1, 0,0);
        tracep->declQuad(c+403,"ysyx_041461_TOP core MEM_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core MEM_wstrb", false,-1, 7,0);
        tracep->declBus(c+21,"ysyx_041461_TOP core MEM_wlast", false,-1, 0,0);
        tracep->declBus(c+22,"ysyx_041461_TOP core MEM_bready", false,-1, 0,0);
        tracep->declBus(c+76,"ysyx_041461_TOP core MEM_arvalid", false,-1, 0,0);
        tracep->declBus(c+504,"ysyx_041461_TOP core MEM_araddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core MEM_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core MEM_arlen", false,-1, 7,0);
        tracep->declBus(c+505,"ysyx_041461_TOP core MEM_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM_arburst", false,-1, 1,0);
        tracep->declBus(c+77,"ysyx_041461_TOP core MEM_rready", false,-1, 0,0);
        tracep->declBus(c+78,"ysyx_041461_TOP core WBreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+79,"ysyx_041461_TOP core WBreg_trap_out", false,-1, 3,0);
        tracep->declQuad(c+80,"ysyx_041461_TOP core WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_041461_TOP core WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_041461_TOP core WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_041461_TOP core WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_041461_TOP core WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+87,"ysyx_041461_TOP core WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_041461_TOP core WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_041461_TOP core WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_041461_TOP core WBreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declBus(c+612,"ysyx_041461_TOP core WB_ready", false,-1, 0,0);
        tracep->declQuad(c+94,"ysyx_041461_TOP core WB_IFreg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_041461_TOP core WB_IFreg_mepc", false,-1, 63,0);
        tracep->declBus(c+98,"ysyx_041461_TOP core WB_IFreg_ctrl", false,-1, 1,0);
        tracep->declQuad(c+99,"ysyx_041461_TOP core WB_IF_mstatus", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_041461_TOP core WB_IF_mie", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_041461_TOP core WB_IF_mip", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_041461_TOP core WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_041461_TOP core WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_041461_TOP core WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_041461_TOP core WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_041461_TOP core WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_041461_TOP core WB_MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+117,"ysyx_041461_TOP core time_interrupt", false,-1, 0,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core CLINT_awready", false,-1);
        tracep->declBit(c+119,"ysyx_041461_TOP core CLINT_wready", false,-1);
        tracep->declBit(c+120,"ysyx_041461_TOP core CLINT_bvalid", false,-1);
        tracep->declBus(c+121,"ysyx_041461_TOP core CLINT_bid", false,-1, 3,0);
        tracep->declBus(c+2,"ysyx_041461_TOP core CLINT_bresp", false,-1, 1,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core CLINT_arready", false,-1);
        tracep->declBit(c+122,"ysyx_041461_TOP core CLINT_rvalid", false,-1);
        tracep->declBus(c+123,"ysyx_041461_TOP core CLINT_rid", false,-1, 3,0);
        tracep->declBus(c+3,"ysyx_041461_TOP core CLINT_rresp", false,-1, 1,0);
        tracep->declQuad(c+124,"ysyx_041461_TOP core CLINT_rdata", false,-1, 63,0);
        tracep->declBit(c+126,"ysyx_041461_TOP core CLINT_rlast", false,-1);
        tracep->declBus(c+615,"ysyx_041461_TOP core ARBITER_IF_arready", false,-1, 0,0);
        tracep->declBus(c+592,"ysyx_041461_TOP core ARBITER_IF_rvalid", false,-1, 0,0);
        tracep->declBus(c+593,"ysyx_041461_TOP core ARBITER_IF_rresp", false,-1, 1,0);
        tracep->declQuad(c+594,"ysyx_041461_TOP core ARBITER_IF_rdata", false,-1, 63,0);
        tracep->declBus(c+596,"ysyx_041461_TOP core ARBITER_IF_rlast", false,-1, 0,0);
        tracep->declBus(c+597,"ysyx_041461_TOP core ARBITER_IF_rid", false,-1, 3,0);
        tracep->declBus(c+616,"ysyx_041461_TOP core ARBITER_MEM_arready", false,-1, 0,0);
        tracep->declBus(c+598,"ysyx_041461_TOP core ARBITER_MEM_rvalid", false,-1, 0,0);
        tracep->declBus(c+599,"ysyx_041461_TOP core ARBITER_MEM_rresp", false,-1, 1,0);
        tracep->declQuad(c+600,"ysyx_041461_TOP core ARBITER_MEM_rdata", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_041461_TOP core ARBITER_MEM_rlast", false,-1, 0,0);
        tracep->declBus(c+603,"ysyx_041461_TOP core ARBITER_MEM_rid", false,-1, 3,0);
        tracep->declBus(c+617,"ysyx_041461_TOP core ARBITER_MEM_awready", false,-1, 0,0);
        tracep->declBus(c+618,"ysyx_041461_TOP core ARBITER_MEM_wready", false,-1, 0,0);
        tracep->declBus(c+604,"ysyx_041461_TOP core ARBITER_MEM_bvalid", false,-1, 0,0);
        tracep->declBus(c+127,"ysyx_041461_TOP core ARBITER_MEM_bresp", false,-1, 1,0);
        tracep->declBus(c+605,"ysyx_041461_TOP core ARBITER_MEM_bid", false,-1, 3,0);
        tracep->declBit(c+629,"ysyx_041461_TOP core ARBITER_CLINT_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER_CLINT_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core ARBITER_CLINT_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER_CLINT_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core ARBITER_CLINT_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER_CLINT_awburst", false,-1, 1,0);
        tracep->declBit(c+20,"ysyx_041461_TOP core ARBITER_CLINT_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP core ARBITER_CLINT_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core ARBITER_CLINT_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP core ARBITER_CLINT_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP core ARBITER_CLINT_bready", false,-1);
        tracep->declBit(c+128,"ysyx_041461_TOP core ARBITER_CLINT_arvalid", false,-1);
        tracep->declBus(c+129,"ysyx_041461_TOP core ARBITER_CLINT_arid", false,-1, 3,0);
        tracep->declBus(c+506,"ysyx_041461_TOP core ARBITER_CLINT_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER_CLINT_arlen", false,-1, 7,0);
        tracep->declBus(c+507,"ysyx_041461_TOP core ARBITER_CLINT_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER_CLINT_arburst", false,-1, 1,0);
        tracep->declBit(c+130,"ysyx_041461_TOP core ARBITER_CLINT_rready", false,-1);
        tracep->declBus(c+386,"ysyx_041461_TOP core rst_r1", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core rst_r2", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core rst_sync", false,-1, 0,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core IF_reg clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core IF_reg rst", false,-1, 0,0);
        tracep->declBus(c+608,"ysyx_041461_TOP core IF_reg IFreg_enable", false,-1, 0,0);
        tracep->declBus(c+494,"ysyx_041461_TOP core IF_reg IFreg_ctrl_fromID", false,-1, 0,0);
        tracep->declBus(c+98,"ysyx_041461_TOP core IF_reg IFreg_ctrl_fromWB", false,-1, 1,0);
        tracep->declQuad(c+491,"ysyx_041461_TOP core IF_reg IFreg_next_pc", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_041461_TOP core IF_reg IFreg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_041461_TOP core IF_reg IFreg_mepc", false,-1, 63,0);
        tracep->declQuad(c+483,"ysyx_041461_TOP core IF_reg IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core IF clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core IF rst", false,-1, 0,0);
        tracep->declQuad(c+483,"ysyx_041461_TOP core IF IF_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_041461_TOP core IF IF_mstatus", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_041461_TOP core IF IF_mie", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_041461_TOP core IF IF_mip", false,-1, 63,0);
        tracep->declBus(c+495,"ysyx_041461_TOP core IF IF_ID_TYPE", false,-1, 2,0);
        tracep->declBus(c+609,"ysyx_041461_TOP core IF IF_ID_ready", false,-1, 0,0);
        tracep->declBus(c+481,"ysyx_041461_TOP core IF IF_ID_trap", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_041461_TOP core IF IF_EXE_trap", false,-1, 3,0);
        tracep->declBus(c+482,"ysyx_041461_TOP core IF IF_MEM_trap", false,-1, 3,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core IF IF_WB_trap", false,-1, 3,0);
        tracep->declBus(c+485,"ysyx_041461_TOP core IF IF_trap_out", false,-1, 3,0);
        tracep->declBus(c+343,"ysyx_041461_TOP core IF IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+608,"ysyx_041461_TOP core IF IF_ready", false,-1, 0,0);
        tracep->declBus(c+486,"ysyx_041461_TOP core IF IF_inst", false,-1, 31,0);
        tracep->declBus(c+615,"ysyx_041461_TOP core IF IF_arready", false,-1, 0,0);
        tracep->declBus(c+30,"ysyx_041461_TOP core IF IF_arvalid", false,-1, 0,0);
        tracep->declBus(c+487,"ysyx_041461_TOP core IF IF_araddr", false,-1, 31,0);
        tracep->declBus(c+630,"ysyx_041461_TOP core IF IF_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core IF IF_arlen", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_041461_TOP core IF IF_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core IF IF_arburst", false,-1, 1,0);
        tracep->declBus(c+31,"ysyx_041461_TOP core IF IF_rready", false,-1, 0,0);
        tracep->declBus(c+592,"ysyx_041461_TOP core IF IF_rvalid", false,-1, 0,0);
        tracep->declBus(c+593,"ysyx_041461_TOP core IF IF_rresp", false,-1, 1,0);
        tracep->declQuad(c+594,"ysyx_041461_TOP core IF IF_rdata", false,-1, 63,0);
        tracep->declBus(c+596,"ysyx_041461_TOP core IF IF_rlast", false,-1, 0,0);
        tracep->declBus(c+597,"ysyx_041461_TOP core IF IF_rid", false,-1, 3,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core IF IF_sram0_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core IF IF_sram0_cen", false,-1, 0,0);
        tracep->declBus(c+407,"ysyx_041461_TOP core IF IF_sram0_wen", false,-1, 0,0);
        tracep->declArray(c+408,"ysyx_041461_TOP core IF IF_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+412,"ysyx_041461_TOP core IF IF_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+352,"ysyx_041461_TOP core IF IF_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core IF IF_sram1_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core IF IF_sram1_cen", false,-1, 0,0);
        tracep->declBus(c+416,"ysyx_041461_TOP core IF IF_sram1_wen", false,-1, 0,0);
        tracep->declArray(c+417,"ysyx_041461_TOP core IF IF_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+421,"ysyx_041461_TOP core IF IF_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+356,"ysyx_041461_TOP core IF IF_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core IF IF_sram2_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core IF IF_sram2_cen", false,-1, 0,0);
        tracep->declBus(c+425,"ysyx_041461_TOP core IF IF_sram2_wen", false,-1, 0,0);
        tracep->declArray(c+426,"ysyx_041461_TOP core IF IF_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+430,"ysyx_041461_TOP core IF IF_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+360,"ysyx_041461_TOP core IF IF_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core IF IF_sram3_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core IF IF_sram3_cen", false,-1, 0,0);
        tracep->declBus(c+434,"ysyx_041461_TOP core IF IF_sram3_wen", false,-1, 0,0);
        tracep->declArray(c+435,"ysyx_041461_TOP core IF IF_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+439,"ysyx_041461_TOP core IF IF_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+364,"ysyx_041461_TOP core IF IF_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+630,"ysyx_041461_TOP core IF IF_AXI_id", false,-1, 3,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core IF OKAY", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core IF EXOKAY", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core IF SLVERR", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core IF DECERR", false,-1, 1,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core IF FIXED", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core IF INCR", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core IF WRAP", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core IF Rserved", false,-1, 1,0);
        tracep->declBus(c+131,"ysyx_041461_TOP core IF state", false,-1, 2,0);
        tracep->declQuad(c+132,"ysyx_041461_TOP core IF AXI_rdata", false,-1, 63,0);
        tracep->declQuad(c+606,"ysyx_041461_TOP core IF AXI_rdata_next", false,-1, 63,0);
        tracep->declBus(c+508,"ysyx_041461_TOP core IF hit1", false,-1, 0,0);
        tracep->declBus(c+509,"ysyx_041461_TOP core IF hit2", false,-1, 0,0);
        tracep->declBus(c+510,"ysyx_041461_TOP core IF hit3", false,-1, 0,0);
        tracep->declBus(c+511,"ysyx_041461_TOP core IF hit4", false,-1, 0,0);
        tracep->declBus(c+512,"ysyx_041461_TOP core IF hit5", false,-1, 0,0);
        tracep->declBus(c+513,"ysyx_041461_TOP core IF hit6", false,-1, 0,0);
        tracep->declBus(c+514,"ysyx_041461_TOP core IF hit7", false,-1, 0,0);
        tracep->declBus(c+515,"ysyx_041461_TOP core IF hit8", false,-1, 0,0);
        tracep->declBus(c+516,"ysyx_041461_TOP core IF hit", false,-1, 0,0);
        tracep->declBus(c+406,"ysyx_041461_TOP core IF index", false,-1, 5,0);
        tracep->declBus(c+517,"ysyx_041461_TOP core IF offset", false,-1, 2,0);
        tracep->declQuad(c+518,"ysyx_041461_TOP core IF tag", false,-1, 54,0);
        tracep->declBus(c+520,"ysyx_041461_TOP core IF uncached", false,-1, 0,0);
        tracep->declBus(c+134,"ysyx_041461_TOP core IF mie_MTIE", false,-1, 0,0);
        tracep->declBus(c+135,"ysyx_041461_TOP core IF mip_MTIP", false,-1, 0,0);
        tracep->declBus(c+136,"ysyx_041461_TOP core IF mstatus_MIE", false,-1, 0,0);
        tracep->declBus(c+521,"ysyx_041461_TOP core IF i", false,-1, 31,0);
        tracep->declBus(c+137,"ysyx_041461_TOP core IF k", false,-1, 31,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core ID_reg clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core ID_reg rst", false,-1, 0,0);
        tracep->declBus(c+609,"ysyx_041461_TOP core ID_reg IDreg_enable", false,-1, 0,0);
        tracep->declBus(c+343,"ysyx_041461_TOP core ID_reg IDreg_valid_in", false,-1, 0,0);
        tracep->declBus(c+485,"ysyx_041461_TOP core ID_reg IDreg_trap_in", false,-1, 3,0);
        tracep->declBus(c+486,"ysyx_041461_TOP core ID_reg IDreg_inst_in", false,-1, 31,0);
        tracep->declQuad(c+483,"ysyx_041461_TOP core ID_reg IDreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_041461_TOP core ID_reg IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+33,"ysyx_041461_TOP core ID_reg IDreg_trap_out", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_041461_TOP core ID_reg IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_041461_TOP core ID_reg IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_041461_TOP core ID ID_inst", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_041461_TOP core ID ID_valid_in", false,-1, 0,0);
        tracep->declQuad(c+35,"ysyx_041461_TOP core ID ID_pc", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_041461_TOP core ID ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_041461_TOP core ID ID_rs2_data", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_041461_TOP core ID ID_trap_in", false,-1, 3,0);
        tracep->declBus(c+480,"ysyx_041461_TOP core ID ID_conflict", false,-1, 0,0);
        tracep->declBus(c+610,"ysyx_041461_TOP core ID ID_EXE_ready", false,-1, 0,0);
        tracep->declBus(c+611,"ysyx_041461_TOP core ID ID_MEM_ready", false,-1, 0,0);
        tracep->declBus(c+27,"ysyx_041461_TOP core ID ID_EXE_trap", false,-1, 3,0);
        tracep->declBus(c+482,"ysyx_041461_TOP core ID ID_MEM_trap", false,-1, 3,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core ID ID_WB_trap", false,-1, 3,0);
        tracep->declBus(c+37,"ysyx_041461_TOP core ID ID_rd", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_041461_TOP core ID ID_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_041461_TOP core ID ID_rs2", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_041461_TOP core ID ID_csr", false,-1, 11,0);
        tracep->declQuad(c+489,"ysyx_041461_TOP core ID ID_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_041461_TOP core ID ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+491,"ysyx_041461_TOP core ID ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+493,"ysyx_041461_TOP core ID ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+494,"ysyx_041461_TOP core ID ID_IFreg_ctrl", false,-1, 0,0);
        tracep->declBus(c+495,"ysyx_041461_TOP core ID ID_TYPE", false,-1, 2,0);
        tracep->declBus(c+496,"ysyx_041461_TOP core ID ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+497,"ysyx_041461_TOP core ID ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+498,"ysyx_041461_TOP core ID ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+499,"ysyx_041461_TOP core ID ID_WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+500,"ysyx_041461_TOP core ID ID_trap_out", false,-1, 3,0);
        tracep->declBus(c+609,"ysyx_041461_TOP core ID ID_ready", false,-1, 0,0);
        tracep->declBus(c+138,"ysyx_041461_TOP core ID opcode", false,-1, 6,0);
        tracep->declBus(c+139,"ysyx_041461_TOP core ID funct3", false,-1, 2,0);
        tracep->declBus(c+140,"ysyx_041461_TOP core ID funct6", false,-1, 5,0);
        tracep->declBus(c+141,"ysyx_041461_TOP core ID funct7", false,-1, 6,0);
        tracep->declBus(c+142,"ysyx_041461_TOP core ID shamt", false,-1, 5,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core EXE_reg clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core EXE_reg rst", false,-1, 0,0);
        tracep->declBus(c+610,"ysyx_041461_TOP core EXE_reg EXEreg_enable", false,-1, 0,0);
        tracep->declBus(c+493,"ysyx_041461_TOP core EXE_reg EXEreg_valid_in", false,-1, 0,0);
        tracep->declBus(c+500,"ysyx_041461_TOP core EXE_reg EXEreg_trap_in", false,-1, 3,0);
        tracep->declBus(c+37,"ysyx_041461_TOP core EXE_reg EXEreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_041461_TOP core EXE_reg EXEreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_041461_TOP core EXE_reg EXEreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_041461_TOP core EXE_reg EXEreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+489,"ysyx_041461_TOP core EXE_reg EXEreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_041461_TOP core EXE_reg EXEreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_041461_TOP core EXE_reg EXEreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+496,"ysyx_041461_TOP core EXE_reg EXEreg_EXE_ctrl_in", false,-1, 4,0);
        tracep->declBus(c+497,"ysyx_041461_TOP core EXE_reg EXEreg_EXE_src_in", false,-1, 2,0);
        tracep->declBus(c+498,"ysyx_041461_TOP core EXE_reg EXEreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+499,"ysyx_041461_TOP core EXE_reg EXEreg_WB_ctrl_in", false,-1, 2,0);
        tracep->declBus(c+43,"ysyx_041461_TOP core EXE_reg EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+44,"ysyx_041461_TOP core EXE_reg EXEreg_trap_out", false,-1, 3,0);
        tracep->declBus(c+45,"ysyx_041461_TOP core EXE_reg EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_041461_TOP core EXE_reg EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_041461_TOP core EXE_reg EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_041461_TOP core EXE_reg EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+49,"ysyx_041461_TOP core EXE_reg EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_041461_TOP core EXE_reg EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_041461_TOP core EXE_reg EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_041461_TOP core EXE_reg EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_041461_TOP core EXE_reg EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+57,"ysyx_041461_TOP core EXE_reg EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+58,"ysyx_041461_TOP core EXE_reg EXEreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declBus(c+43,"ysyx_041461_TOP core EXE EXE_valid_in", false,-1, 0,0);
        tracep->declBus(c+44,"ysyx_041461_TOP core EXE EXE_trap_in", false,-1, 3,0);
        tracep->declQuad(c+109,"ysyx_041461_TOP core EXE EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_041461_TOP core EXE EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_041461_TOP core EXE EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_041461_TOP core EXE EXE_imm", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_041461_TOP core EXE EXE_zimm", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_041461_TOP core EXE EXE_pc", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_041461_TOP core EXE EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_041461_TOP core EXE EXE_src", false,-1, 2,0);
        tracep->declBus(c+26,"ysyx_041461_TOP core EXE EXE_conflict", false,-1, 0,0);
        tracep->declBus(c+611,"ysyx_041461_TOP core EXE EXE_MEM_ready", false,-1, 0,0);
        tracep->declBus(c+482,"ysyx_041461_TOP core EXE EXE_MEM_trap", false,-1, 3,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core EXE EXE_WB_trap", false,-1, 3,0);
        tracep->declQuad(c+59,"ysyx_041461_TOP core EXE EXE_out", false,-1, 63,0);
        tracep->declBus(c+344,"ysyx_041461_TOP core EXE EXE_valid_out", false,-1, 0,0);
        tracep->declBus(c+610,"ysyx_041461_TOP core EXE EXE_ready", false,-1, 0,0);
        tracep->declQuad(c+143,"ysyx_041461_TOP core EXE src1", false,-1, 63,0);
        tracep->declQuad(c+145,"ysyx_041461_TOP core EXE src2", false,-1, 63,0);
        tracep->declArray(c+147,"ysyx_041461_TOP core EXE middle", false,-1, 127,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core MEM_reg clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core MEM_reg rst", false,-1, 0,0);
        tracep->declBus(c+611,"ysyx_041461_TOP core MEM_reg MEMreg_enable", false,-1, 0,0);
        tracep->declBus(c+344,"ysyx_041461_TOP core MEM_reg MEMreg_valid_in", false,-1, 0,0);
        tracep->declBus(c+44,"ysyx_041461_TOP core MEM_reg MEMreg_trap_in", false,-1, 3,0);
        tracep->declQuad(c+59,"ysyx_041461_TOP core MEM_reg MEMreg_EXE_in", false,-1, 63,0);
        tracep->declBus(c+45,"ysyx_041461_TOP core MEM_reg MEMreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_041461_TOP core MEM_reg MEMreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_041461_TOP core MEM_reg MEMreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_041461_TOP core MEM_reg MEMreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+49,"ysyx_041461_TOP core MEM_reg MEMreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_041461_TOP core MEM_reg MEMreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_041461_TOP core MEM_reg MEMreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_041461_TOP core MEM_reg MEMreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+58,"ysyx_041461_TOP core MEM_reg MEMreg_WB_ctrl_in", false,-1, 2,0);
        tracep->declBus(c+61,"ysyx_041461_TOP core MEM_reg MEMreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+62,"ysyx_041461_TOP core MEM_reg MEMreg_trap_out", false,-1, 3,0);
        tracep->declQuad(c+501,"ysyx_041461_TOP core MEM_reg MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_041461_TOP core MEM_reg MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+64,"ysyx_041461_TOP core MEM_reg MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+65,"ysyx_041461_TOP core MEM_reg MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+66,"ysyx_041461_TOP core MEM_reg MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+67,"ysyx_041461_TOP core MEM_reg MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_041461_TOP core MEM_reg MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_041461_TOP core MEM_reg MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+73,"ysyx_041461_TOP core MEM_reg MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+74,"ysyx_041461_TOP core MEM_reg MEMreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core MEM clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core MEM rst", false,-1, 0,0);
        tracep->declBus(c+61,"ysyx_041461_TOP core MEM MEM_valid_in", false,-1, 0,0);
        tracep->declQuad(c+501,"ysyx_041461_TOP core MEM MEM_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_041461_TOP core MEM MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+73,"ysyx_041461_TOP core MEM MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+62,"ysyx_041461_TOP core MEM MEM_trap_in", false,-1, 3,0);
        tracep->declBus(c+612,"ysyx_041461_TOP core MEM MEM_WB_ready", false,-1, 0,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core MEM MEM_WB_trap", false,-1, 3,0);
        tracep->declBus(c+28,"ysyx_041461_TOP core MEM MEM_conflict", false,-1, 0,0);
        tracep->declBus(c+345,"ysyx_041461_TOP core MEM MEM_valid_out", false,-1, 0,0);
        tracep->declBus(c+611,"ysyx_041461_TOP core MEM MEM_ready", false,-1, 0,0);
        tracep->declQuad(c+346,"ysyx_041461_TOP core MEM MEM_out", false,-1, 63,0);
        tracep->declBus(c+503,"ysyx_041461_TOP core MEM MEM_trap_out", false,-1, 3,0);
        tracep->declBus(c+617,"ysyx_041461_TOP core MEM MEM_awready", false,-1, 0,0);
        tracep->declBus(c+75,"ysyx_041461_TOP core MEM MEM_awvalid", false,-1, 0,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core MEM MEM_awaddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core MEM MEM_awid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core MEM MEM_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core MEM MEM_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM MEM_awburst", false,-1, 1,0);
        tracep->declBus(c+618,"ysyx_041461_TOP core MEM MEM_wready", false,-1, 0,0);
        tracep->declBus(c+20,"ysyx_041461_TOP core MEM MEM_wvalid", false,-1, 0,0);
        tracep->declQuad(c+403,"ysyx_041461_TOP core MEM MEM_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core MEM MEM_wstrb", false,-1, 7,0);
        tracep->declBus(c+21,"ysyx_041461_TOP core MEM MEM_wlast", false,-1, 0,0);
        tracep->declBus(c+22,"ysyx_041461_TOP core MEM MEM_bready", false,-1, 0,0);
        tracep->declBus(c+604,"ysyx_041461_TOP core MEM MEM_bvalid", false,-1, 0,0);
        tracep->declBus(c+127,"ysyx_041461_TOP core MEM MEM_bresp", false,-1, 1,0);
        tracep->declBus(c+605,"ysyx_041461_TOP core MEM MEM_bid", false,-1, 3,0);
        tracep->declBus(c+616,"ysyx_041461_TOP core MEM MEM_arready", false,-1, 0,0);
        tracep->declBus(c+76,"ysyx_041461_TOP core MEM MEM_arvalid", false,-1, 0,0);
        tracep->declBus(c+504,"ysyx_041461_TOP core MEM MEM_araddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core MEM MEM_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core MEM MEM_arlen", false,-1, 7,0);
        tracep->declBus(c+505,"ysyx_041461_TOP core MEM MEM_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM MEM_arburst", false,-1, 1,0);
        tracep->declBus(c+77,"ysyx_041461_TOP core MEM MEM_rready", false,-1, 0,0);
        tracep->declBus(c+598,"ysyx_041461_TOP core MEM MEM_rvalid", false,-1, 0,0);
        tracep->declBus(c+599,"ysyx_041461_TOP core MEM MEM_rresp", false,-1, 1,0);
        tracep->declQuad(c+600,"ysyx_041461_TOP core MEM MEM_rdata", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_041461_TOP core MEM MEM_rlast", false,-1, 0,0);
        tracep->declBus(c+603,"ysyx_041461_TOP core MEM MEM_rid", false,-1, 3,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core MEM MEM_sram4_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core MEM MEM_sram4_cen", false,-1, 0,0);
        tracep->declBus(c+444,"ysyx_041461_TOP core MEM MEM_sram4_wen", false,-1, 0,0);
        tracep->declArray(c+445,"ysyx_041461_TOP core MEM MEM_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+449,"ysyx_041461_TOP core MEM MEM_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+368,"ysyx_041461_TOP core MEM MEM_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core MEM MEM_sram5_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core MEM MEM_sram5_cen", false,-1, 0,0);
        tracep->declBus(c+453,"ysyx_041461_TOP core MEM MEM_sram5_wen", false,-1, 0,0);
        tracep->declArray(c+454,"ysyx_041461_TOP core MEM MEM_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+458,"ysyx_041461_TOP core MEM MEM_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+372,"ysyx_041461_TOP core MEM MEM_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core MEM MEM_sram6_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core MEM MEM_sram6_cen", false,-1, 0,0);
        tracep->declBus(c+462,"ysyx_041461_TOP core MEM MEM_sram6_wen", false,-1, 0,0);
        tracep->declArray(c+463,"ysyx_041461_TOP core MEM MEM_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+467,"ysyx_041461_TOP core MEM MEM_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+376,"ysyx_041461_TOP core MEM MEM_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core MEM MEM_sram7_addr", false,-1, 5,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core MEM MEM_sram7_cen", false,-1, 0,0);
        tracep->declBus(c+471,"ysyx_041461_TOP core MEM MEM_sram7_wen", false,-1, 0,0);
        tracep->declArray(c+472,"ysyx_041461_TOP core MEM MEM_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+476,"ysyx_041461_TOP core MEM MEM_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+380,"ysyx_041461_TOP core MEM MEM_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core MEM MEM_AXI_id", false,-1, 3,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM OKAY", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core MEM EXOKAY", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core MEM SLVERR", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core MEM DECERR", false,-1, 1,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core MEM FIXED", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core MEM INCR", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core MEM WRAP", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core MEM Rserved", false,-1, 1,0);
        tracep->declBus(c+151,"ysyx_041461_TOP core MEM load", false,-1, 0,0);
        tracep->declBus(c+152,"ysyx_041461_TOP core MEM store", false,-1, 0,0);
        tracep->declBus(c+522,"ysyx_041461_TOP core MEM uncached", false,-1, 0,0);
        tracep->declBus(c+153,"ysyx_041461_TOP core MEM state", false,-1, 3,0);
        tracep->declQuad(c+154,"ysyx_041461_TOP core MEM AXI_rdata", false,-1, 63,0);
        tracep->declQuad(c+619,"ysyx_041461_TOP core MEM AXI_rdata_next", false,-1, 63,0);
        tracep->declBus(c+523,"ysyx_041461_TOP core MEM hit1", false,-1, 0,0);
        tracep->declBus(c+524,"ysyx_041461_TOP core MEM hit2", false,-1, 0,0);
        tracep->declBus(c+525,"ysyx_041461_TOP core MEM hit3", false,-1, 0,0);
        tracep->declBus(c+526,"ysyx_041461_TOP core MEM hit4", false,-1, 0,0);
        tracep->declBus(c+527,"ysyx_041461_TOP core MEM hit5", false,-1, 0,0);
        tracep->declBus(c+528,"ysyx_041461_TOP core MEM hit6", false,-1, 0,0);
        tracep->declBus(c+529,"ysyx_041461_TOP core MEM hit7", false,-1, 0,0);
        tracep->declBus(c+530,"ysyx_041461_TOP core MEM hit8", false,-1, 0,0);
        tracep->declBus(c+531,"ysyx_041461_TOP core MEM hit", false,-1, 0,0);
        tracep->declBus(c+443,"ysyx_041461_TOP core MEM index", false,-1, 5,0);
        tracep->declBus(c+532,"ysyx_041461_TOP core MEM offset", false,-1, 2,0);
        tracep->declQuad(c+533,"ysyx_041461_TOP core MEM tag", false,-1, 54,0);
        tracep->declBus(c+535,"ysyx_041461_TOP core MEM align", false,-1, 0,0);
        tracep->declBus(c+638,"ysyx_041461_TOP core MEM i", false,-1, 31,0);
        tracep->declBus(c+156,"ysyx_041461_TOP core MEM k", false,-1, 31,0);
        tracep->declQuad(c+536,"ysyx_041461_TOP core MEM cache_wmask", false,-1, 63,0);
        tracep->declQuad(c+538,"ysyx_041461_TOP core MEM cache_wdata", false,-1, 63,0);
        tracep->declQuad(c+540,"ysyx_041461_TOP core MEM rdata", false,-1, 63,0);
        tracep->declQuad(c+542,"ysyx_041461_TOP core MEM rrdata", false,-1, 63,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core WB_reg clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core WB_reg rst", false,-1, 0,0);
        tracep->declBus(c+612,"ysyx_041461_TOP core WB_reg WBreg_enable", false,-1, 0,0);
        tracep->declBus(c+345,"ysyx_041461_TOP core WB_reg WBreg_valid_in", false,-1, 0,0);
        tracep->declBus(c+503,"ysyx_041461_TOP core WB_reg WBreg_trap_in", false,-1, 3,0);
        tracep->declQuad(c+501,"ysyx_041461_TOP core WB_reg WBreg_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_041461_TOP core WB_reg WBreg_MEM_in", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_041461_TOP core WB_reg WBreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+64,"ysyx_041461_TOP core WB_reg WBreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+66,"ysyx_041461_TOP core WB_reg WBreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+67,"ysyx_041461_TOP core WB_reg WBreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_041461_TOP core WB_reg WBreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_041461_TOP core WB_reg WBreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_041461_TOP core WB_reg WBreg_WB_ctrl_in", false,-1, 2,0);
        tracep->declBus(c+78,"ysyx_041461_TOP core WB_reg WBreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+79,"ysyx_041461_TOP core WB_reg WBreg_trap_out", false,-1, 3,0);
        tracep->declQuad(c+80,"ysyx_041461_TOP core WB_reg WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_041461_TOP core WB_reg WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_041461_TOP core WB_reg WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_041461_TOP core WB_reg WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_041461_TOP core WB_reg WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+87,"ysyx_041461_TOP core WB_reg WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_041461_TOP core WB_reg WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_041461_TOP core WB_reg WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_041461_TOP core WB_reg WBreg_WB_ctrl_out", false,-1, 2,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core WB clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core WB rst", false,-1, 0,0);
        tracep->declBus(c+78,"ysyx_041461_TOP core WB WB_valid", false,-1, 0,0);
        tracep->declBus(c+608,"ysyx_041461_TOP core WB WB_IF_ready", false,-1, 0,0);
        tracep->declBus(c+38,"ysyx_041461_TOP core WB WB_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_041461_TOP core WB WB_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_041461_TOP core WB WB_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_041461_TOP core WB WB_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_041461_TOP core WB WB_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+65,"ysyx_041461_TOP core WB WB_MEM_rs2", false,-1, 4,0);
        tracep->declQuad(c+80,"ysyx_041461_TOP core WB WB_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_041461_TOP core WB WB_MEM_in", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_041461_TOP core WB WB_rd", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_041461_TOP core WB WB_rs1", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_041461_TOP core WB WB_csr", false,-1, 11,0);
        tracep->declQuad(c+87,"ysyx_041461_TOP core WB WB_imm", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_041461_TOP core WB WB_zimm", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_041461_TOP core WB WB_pc", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_041461_TOP core WB WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+79,"ysyx_041461_TOP core WB WB_trap", false,-1, 3,0);
        tracep->declBus(c+117,"ysyx_041461_TOP core WB WB_interrupt", false,-1, 0,0);
        tracep->declBus(c+612,"ysyx_041461_TOP core WB WB_ready", false,-1, 0,0);
        tracep->declQuad(c+94,"ysyx_041461_TOP core WB WB_IFreg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_041461_TOP core WB WB_IFreg_mepc", false,-1, 63,0);
        tracep->declBus(c+98,"ysyx_041461_TOP core WB WB_IFreg_ctrl", false,-1, 1,0);
        tracep->declQuad(c+99,"ysyx_041461_TOP core WB WB_IF_mstatus", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_041461_TOP core WB WB_IF_mie", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_041461_TOP core WB WB_IF_mip", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_041461_TOP core WB WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_041461_TOP core WB WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_041461_TOP core WB WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_041461_TOP core WB WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_041461_TOP core WB WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_041461_TOP core WB WB_MEM_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+157+i*2,"ysyx_041461_TOP core WB x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+221+i*2,"ysyx_041461_TOP core WB d", true,(i+0), 63,0);}}
        tracep->declQuad(c+94,"ysyx_041461_TOP core WB mtvec", false,-1, 63,0);
        tracep->declQuad(c+285,"ysyx_041461_TOP core WB mtvec_next", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_041461_TOP core WB mepc", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_041461_TOP core WB mepc_next", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_041461_TOP core WB mcause", false,-1, 63,0);
        tracep->declQuad(c+291,"ysyx_041461_TOP core WB mcause_next", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_041461_TOP core WB mstatus", false,-1, 63,0);
        tracep->declQuad(c+293,"ysyx_041461_TOP core WB mstatus_next", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_041461_TOP core WB mie", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_041461_TOP core WB mie_next", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_041461_TOP core WB mip", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_041461_TOP core WB mip_next", false,-1, 63,0);
        tracep->declQuad(c+299,"ysyx_041461_TOP core WB mhartid", false,-1, 63,0);
        tracep->declQuad(c+301,"ysyx_041461_TOP core WB mhartid_next", false,-1, 63,0);
        tracep->declBus(c+639,"ysyx_041461_TOP core WB i", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_041461_TOP core WB j", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_041461_TOP core CD CD_ID_valid_in", false,-1, 0,0);
        tracep->declBus(c+495,"ysyx_041461_TOP core CD CD_ID_TYPE", false,-1, 2,0);
        tracep->declBus(c+38,"ysyx_041461_TOP core CD CD_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_041461_TOP core CD CD_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+500,"ysyx_041461_TOP core CD CD_ID_trap_in", false,-1, 3,0);
        tracep->declBus(c+43,"ysyx_041461_TOP core CD CD_EXE_valid_in", false,-1, 0,0);
        tracep->declBus(c+55,"ysyx_041461_TOP core CD CD_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_041461_TOP core CD CD_EXE_src", false,-1, 2,0);
        tracep->declBus(c+58,"ysyx_041461_TOP core CD CD_EXE_WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+45,"ysyx_041461_TOP core CD CD_EXE_rd", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_041461_TOP core CD CD_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_041461_TOP core CD CD_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_041461_TOP core CD CD_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+44,"ysyx_041461_TOP core CD CD_EXE_trap_in", false,-1, 3,0);
        tracep->declBus(c+61,"ysyx_041461_TOP core CD CD_MEM_valid_in", false,-1, 0,0);
        tracep->declBus(c+73,"ysyx_041461_TOP core CD CD_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+74,"ysyx_041461_TOP core CD CD_MEM_WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+63,"ysyx_041461_TOP core CD CD_MEM_rd", false,-1, 4,0);
        tracep->declBus(c+65,"ysyx_041461_TOP core CD CD_MEM_rs2", false,-1, 4,0);
        tracep->declBus(c+66,"ysyx_041461_TOP core CD CD_MEM_csr", false,-1, 11,0);
        tracep->declBus(c+503,"ysyx_041461_TOP core CD CD_MEM_trap_in", false,-1, 3,0);
        tracep->declBus(c+78,"ysyx_041461_TOP core CD CD_WB_valid_in", false,-1, 0,0);
        tracep->declBus(c+93,"ysyx_041461_TOP core CD CD_WB_ctrl", false,-1, 2,0);
        tracep->declBus(c+84,"ysyx_041461_TOP core CD CD_WB_rd", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_041461_TOP core CD CD_WB_csr", false,-1, 11,0);
        tracep->declBus(c+79,"ysyx_041461_TOP core CD CD_WB_trap_in", false,-1, 3,0);
        tracep->declBus(c+480,"ysyx_041461_TOP core CD CD_ID_conflict", false,-1, 0,0);
        tracep->declBus(c+481,"ysyx_041461_TOP core CD CD_ID_trap_out", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_041461_TOP core CD CD_EXE_conflict", false,-1, 0,0);
        tracep->declBus(c+27,"ysyx_041461_TOP core CD CD_EXE_trap_out", false,-1, 3,0);
        tracep->declBus(c+28,"ysyx_041461_TOP core CD CD_MEM_conflict", false,-1, 0,0);
        tracep->declBus(c+482,"ysyx_041461_TOP core CD CD_MEM_trap_out", false,-1, 3,0);
        tracep->declBus(c+29,"ysyx_041461_TOP core CD CD_WB_trap_out", false,-1, 3,0);
        tracep->declBus(c+348,"ysyx_041461_TOP core CD ID_rs1_read", false,-1, 0,0);
        tracep->declBus(c+349,"ysyx_041461_TOP core CD ID_rs2_read", false,-1, 0,0);
        tracep->declBus(c+304,"ysyx_041461_TOP core CD EXE_rd_write", false,-1, 0,0);
        tracep->declBus(c+305,"ysyx_041461_TOP core CD EXE_csr_write", false,-1, 0,0);
        tracep->declBus(c+306,"ysyx_041461_TOP core CD EXE_rs1_read", false,-1, 0,0);
        tracep->declBus(c+307,"ysyx_041461_TOP core CD EXE_rs2_read", false,-1, 0,0);
        tracep->declBus(c+308,"ysyx_041461_TOP core CD EXE_csr_read", false,-1, 0,0);
        tracep->declBus(c+309,"ysyx_041461_TOP core CD MEM_rd_write", false,-1, 0,0);
        tracep->declBus(c+310,"ysyx_041461_TOP core CD MEM_csr_write", false,-1, 0,0);
        tracep->declBus(c+311,"ysyx_041461_TOP core CD MEM_rs2_read", false,-1, 0,0);
        tracep->declBus(c+312,"ysyx_041461_TOP core CD WB_rd_write", false,-1, 0,0);
        tracep->declBus(c+313,"ysyx_041461_TOP core CD WB_csr_write", false,-1, 0,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core CLINT clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core CLINT rst", false,-1, 0,0);
        tracep->declBus(c+117,"ysyx_041461_TOP core CLINT time_interrupt", false,-1, 0,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core CLINT CLINT_awready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core CLINT CLINT_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP core CLINT CLINT_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core CLINT CLINT_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core CLINT CLINT_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core CLINT CLINT_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core CLINT CLINT_awburst", false,-1, 1,0);
        tracep->declBit(c+119,"ysyx_041461_TOP core CLINT CLINT_wready", false,-1);
        tracep->declBit(c+20,"ysyx_041461_TOP core CLINT CLINT_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP core CLINT CLINT_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core CLINT CLINT_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP core CLINT CLINT_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP core CLINT CLINT_bready", false,-1);
        tracep->declBit(c+120,"ysyx_041461_TOP core CLINT CLINT_bvalid", false,-1);
        tracep->declBus(c+121,"ysyx_041461_TOP core CLINT CLINT_bid", false,-1, 3,0);
        tracep->declBus(c+2,"ysyx_041461_TOP core CLINT CLINT_bresp", false,-1, 1,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core CLINT CLINT_arready", false,-1);
        tracep->declBit(c+128,"ysyx_041461_TOP core CLINT CLINT_arvalid", false,-1);
        tracep->declBus(c+129,"ysyx_041461_TOP core CLINT CLINT_arid", false,-1, 3,0);
        tracep->declBus(c+506,"ysyx_041461_TOP core CLINT CLINT_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core CLINT CLINT_arlen", false,-1, 7,0);
        tracep->declBus(c+507,"ysyx_041461_TOP core CLINT CLINT_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core CLINT CLINT_arburst", false,-1, 1,0);
        tracep->declBit(c+130,"ysyx_041461_TOP core CLINT CLINT_rready", false,-1);
        tracep->declBit(c+122,"ysyx_041461_TOP core CLINT CLINT_rvalid", false,-1);
        tracep->declBus(c+123,"ysyx_041461_TOP core CLINT CLINT_rid", false,-1, 3,0);
        tracep->declBus(c+3,"ysyx_041461_TOP core CLINT CLINT_rresp", false,-1, 1,0);
        tracep->declQuad(c+124,"ysyx_041461_TOP core CLINT CLINT_rdata", false,-1, 63,0);
        tracep->declBit(c+126,"ysyx_041461_TOP core CLINT CLINT_rlast", false,-1);
        tracep->declBus(c+628,"ysyx_041461_TOP core CLINT OKAY", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core CLINT EXOKAY", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core CLINT SLVERR", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core CLINT DECERR", false,-1, 1,0);
        tracep->declQuad(c+314,"ysyx_041461_TOP core CLINT mtime", false,-1, 63,0);
        tracep->declQuad(c+544,"ysyx_041461_TOP core CLINT mtime_next", false,-1, 63,0);
        tracep->declQuad(c+316,"ysyx_041461_TOP core CLINT mtimecmp", false,-1, 63,0);
        tracep->declQuad(c+546,"ysyx_041461_TOP core CLINT mtimecmp_next", false,-1, 63,0);
        tracep->declBus(c+318,"ysyx_041461_TOP core CLINT state", false,-1, 1,0);
        tracep->declBus(c+319,"ysyx_041461_TOP core CLINT waddr_mtime_hit", false,-1, 0,0);
        tracep->declBus(c+320,"ysyx_041461_TOP core CLINT waddr_mtimecmp_hit", false,-1, 0,0);
        tracep->declBus(c+321,"ysyx_041461_TOP core CLINT raddr_mtime_hit", false,-1, 0,0);
        tracep->declBus(c+322,"ysyx_041461_TOP core CLINT raddr_mtimecmp_hit", false,-1, 0,0);
        tracep->declBus(c+548,"ysyx_041461_TOP core CLINT waddr_hit", false,-1, 0,0);
        tracep->declBus(c+549,"ysyx_041461_TOP core CLINT raddr_hit", false,-1, 0,0);
        tracep->declBus(c+323,"ysyx_041461_TOP core CLINT awid", false,-1, 3,0);
        tracep->declBus(c+324,"ysyx_041461_TOP core CLINT awid_next", false,-1, 3,0);
        tracep->declBus(c+325,"ysyx_041461_TOP core CLINT awaddr", false,-1, 31,0);
        tracep->declBus(c+350,"ysyx_041461_TOP core CLINT awaddr_next", false,-1, 31,0);
        tracep->declBus(c+326,"ysyx_041461_TOP core CLINT awlen", false,-1, 7,0);
        tracep->declBus(c+327,"ysyx_041461_TOP core CLINT awlen_next", false,-1, 7,0);
        tracep->declBus(c+328,"ysyx_041461_TOP core CLINT awsize", false,-1, 2,0);
        tracep->declBus(c+351,"ysyx_041461_TOP core CLINT awsize_next", false,-1, 2,0);
        tracep->declBus(c+329,"ysyx_041461_TOP core CLINT awburst", false,-1, 1,0);
        tracep->declBus(c+330,"ysyx_041461_TOP core CLINT awburst_next", false,-1, 1,0);
        tracep->declBus(c+331,"ysyx_041461_TOP core CLINT arid", false,-1, 3,0);
        tracep->declBus(c+332,"ysyx_041461_TOP core CLINT arid_next", false,-1, 3,0);
        tracep->declBus(c+333,"ysyx_041461_TOP core CLINT araddr", false,-1, 31,0);
        tracep->declBus(c+550,"ysyx_041461_TOP core CLINT araddr_next", false,-1, 31,0);
        tracep->declBus(c+334,"ysyx_041461_TOP core CLINT arlen", false,-1, 7,0);
        tracep->declBus(c+335,"ysyx_041461_TOP core CLINT arlen_next", false,-1, 7,0);
        tracep->declBus(c+336,"ysyx_041461_TOP core CLINT arsize", false,-1, 2,0);
        tracep->declBus(c+551,"ysyx_041461_TOP core CLINT arsize_next", false,-1, 2,0);
        tracep->declBus(c+337,"ysyx_041461_TOP core CLINT arburst", false,-1, 1,0);
        tracep->declBus(c+338,"ysyx_041461_TOP core CLINT arburst_next", false,-1, 1,0);
        tracep->declBus(c+613,"ysyx_041461_TOP core ARBITER clk", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_041461_TOP core ARBITER rst", false,-1, 0,0);
        tracep->declBus(c+30,"ysyx_041461_TOP core ARBITER ARBITER_IF_arvalid", false,-1, 0,0);
        tracep->declBus(c+487,"ysyx_041461_TOP core ARBITER ARBITER_IF_araddr", false,-1, 31,0);
        tracep->declBus(c+630,"ysyx_041461_TOP core ARBITER ARBITER_IF_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_IF_arlen", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_041461_TOP core ARBITER ARBITER_IF_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_IF_arburst", false,-1, 1,0);
        tracep->declBus(c+615,"ysyx_041461_TOP core ARBITER ARBITER_IF_arready", false,-1, 0,0);
        tracep->declBus(c+31,"ysyx_041461_TOP core ARBITER ARBITER_IF_rready", false,-1, 0,0);
        tracep->declBus(c+592,"ysyx_041461_TOP core ARBITER ARBITER_IF_rvalid", false,-1, 0,0);
        tracep->declBus(c+593,"ysyx_041461_TOP core ARBITER ARBITER_IF_rresp", false,-1, 1,0);
        tracep->declQuad(c+594,"ysyx_041461_TOP core ARBITER ARBITER_IF_rdata", false,-1, 63,0);
        tracep->declBus(c+596,"ysyx_041461_TOP core ARBITER ARBITER_IF_rlast", false,-1, 0,0);
        tracep->declBus(c+597,"ysyx_041461_TOP core ARBITER ARBITER_IF_rid", false,-1, 3,0);
        tracep->declBus(c+76,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arvalid", false,-1, 0,0);
        tracep->declBus(c+504,"ysyx_041461_TOP core ARBITER ARBITER_MEM_araddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arlen", false,-1, 7,0);
        tracep->declBus(c+505,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arburst", false,-1, 1,0);
        tracep->declBus(c+616,"ysyx_041461_TOP core ARBITER ARBITER_MEM_arready", false,-1, 0,0);
        tracep->declBus(c+77,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rready", false,-1, 0,0);
        tracep->declBus(c+598,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rvalid", false,-1, 0,0);
        tracep->declBus(c+599,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rresp", false,-1, 1,0);
        tracep->declQuad(c+600,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rdata", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rlast", false,-1, 0,0);
        tracep->declBus(c+603,"ysyx_041461_TOP core ARBITER ARBITER_MEM_rid", false,-1, 3,0);
        tracep->declBus(c+617,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awready", false,-1, 0,0);
        tracep->declBus(c+75,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awvalid", false,-1, 0,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awaddr", false,-1, 31,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_MEM_awburst", false,-1, 1,0);
        tracep->declBus(c+618,"ysyx_041461_TOP core ARBITER ARBITER_MEM_wready", false,-1, 0,0);
        tracep->declBus(c+20,"ysyx_041461_TOP core ARBITER ARBITER_MEM_wvalid", false,-1, 0,0);
        tracep->declQuad(c+403,"ysyx_041461_TOP core ARBITER ARBITER_MEM_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core ARBITER ARBITER_MEM_wstrb", false,-1, 7,0);
        tracep->declBus(c+21,"ysyx_041461_TOP core ARBITER ARBITER_MEM_wlast", false,-1, 0,0);
        tracep->declBus(c+22,"ysyx_041461_TOP core ARBITER ARBITER_MEM_bready", false,-1, 0,0);
        tracep->declBus(c+604,"ysyx_041461_TOP core ARBITER ARBITER_MEM_bvalid", false,-1, 0,0);
        tracep->declBus(c+127,"ysyx_041461_TOP core ARBITER ARBITER_MEM_bresp", false,-1, 1,0);
        tracep->declBus(c+605,"ysyx_041461_TOP core ARBITER ARBITER_MEM_bid", false,-1, 3,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awready", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_awburst", false,-1, 1,0);
        tracep->declBit(c+119,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_wready", false,-1);
        tracep->declBit(c+20,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_bready", false,-1);
        tracep->declBit(c+120,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_bvalid", false,-1);
        tracep->declBus(c+121,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_bid", false,-1, 3,0);
        tracep->declBus(c+2,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_bresp", false,-1, 1,0);
        tracep->declBit(c+118,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arready", false,-1);
        tracep->declBit(c+128,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arvalid", false,-1);
        tracep->declBus(c+129,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arid", false,-1, 3,0);
        tracep->declBus(c+506,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arlen", false,-1, 7,0);
        tracep->declBus(c+507,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_arburst", false,-1, 1,0);
        tracep->declBit(c+130,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rready", false,-1);
        tracep->declBit(c+122,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rvalid", false,-1);
        tracep->declBus(c+123,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rid", false,-1, 3,0);
        tracep->declBus(c+3,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rresp", false,-1, 1,0);
        tracep->declQuad(c+124,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rdata", false,-1, 63,0);
        tracep->declBit(c+126,"ysyx_041461_TOP core ARBITER ARBITER_CLINT_rlast", false,-1);
        tracep->declBit(c+388,"ysyx_041461_TOP core ARBITER ARBITER_io_awready", false,-1);
        tracep->declBit(c+19,"ysyx_041461_TOP core ARBITER ARBITER_io_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER ARBITER_io_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP core ARBITER ARBITER_io_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_io_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP core ARBITER ARBITER_io_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_io_awburst", false,-1, 1,0);
        tracep->declBit(c+389,"ysyx_041461_TOP core ARBITER ARBITER_io_wready", false,-1);
        tracep->declBit(c+20,"ysyx_041461_TOP core ARBITER ARBITER_io_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP core ARBITER ARBITER_io_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP core ARBITER ARBITER_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP core ARBITER ARBITER_io_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP core ARBITER ARBITER_io_bready", false,-1);
        tracep->declBit(c+390,"ysyx_041461_TOP core ARBITER ARBITER_io_bvalid", false,-1);
        tracep->declBus(c+391,"ysyx_041461_TOP core ARBITER ARBITER_io_bid", false,-1, 3,0);
        tracep->declBus(c+1,"ysyx_041461_TOP core ARBITER ARBITER_io_bresp", false,-1, 1,0);
        tracep->declBus(c+392,"ysyx_041461_TOP core ARBITER ARBITER_io_arready", false,-1, 0,0);
        tracep->declBus(c+23,"ysyx_041461_TOP core ARBITER ARBITER_io_arvalid", false,-1, 0,0);
        tracep->declBus(c+341,"ysyx_041461_TOP core ARBITER ARBITER_io_araddr", false,-1, 31,0);
        tracep->declBus(c+24,"ysyx_041461_TOP core ARBITER ARBITER_io_arid", false,-1, 3,0);
        tracep->declBus(c+627,"ysyx_041461_TOP core ARBITER ARBITER_io_arlen", false,-1, 7,0);
        tracep->declBus(c+342,"ysyx_041461_TOP core ARBITER ARBITER_io_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER ARBITER_io_arburst", false,-1, 1,0);
        tracep->declBus(c+25,"ysyx_041461_TOP core ARBITER ARBITER_io_rready", false,-1, 0,0);
        tracep->declBus(c+393,"ysyx_041461_TOP core ARBITER ARBITER_io_rvalid", false,-1, 0,0);
        tracep->declBus(c+395,"ysyx_041461_TOP core ARBITER ARBITER_io_rresp", false,-1, 1,0);
        tracep->declQuad(c+396,"ysyx_041461_TOP core ARBITER ARBITER_io_rdata", false,-1, 63,0);
        tracep->declBus(c+398,"ysyx_041461_TOP core ARBITER ARBITER_io_rlast", false,-1, 0,0);
        tracep->declBus(c+394,"ysyx_041461_TOP core ARBITER ARBITER_io_rid", false,-1, 3,0);
        tracep->declBus(c+630,"ysyx_041461_TOP core ARBITER IF_AXI_id", false,-1, 3,0);
        tracep->declBus(c+626,"ysyx_041461_TOP core ARBITER MEM_AXI_id", false,-1, 3,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER OKAY", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core ARBITER EXOKAY", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core ARBITER SLVERR", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core ARBITER DECERR", false,-1, 1,0);
        tracep->declBus(c+628,"ysyx_041461_TOP core ARBITER FIXED", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP core ARBITER INCR", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP core ARBITER WRAP", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP core ARBITER Rserved", false,-1, 1,0);
        tracep->declBus(c+339,"ysyx_041461_TOP core ARBITER rstate", false,-1, 1,0);
        tracep->declBus(c+340,"ysyx_041461_TOP core ARBITER wstate", false,-1, 1,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core ARBITER rclint", false,-1, 0,0);
        tracep->declBus(c+629,"ysyx_041461_TOP core ARBITER wclint", false,-1, 0,0);
        tracep->declBus(c+613,"ysyx_041461_TOP AXI_CROSSBAR clk", false,-1, 0,0);
        tracep->declBus(c+385,"ysyx_041461_TOP AXI_CROSSBAR rst", false,-1, 0,0);
        tracep->declBit(c+388,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awready", false,-1);
        tracep->declBit(c+19,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awvalid", false,-1);
        tracep->declBus(c+626,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awid", false,-1, 3,0);
        tracep->declBus(c+401,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awaddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awlen", false,-1, 7,0);
        tracep->declBus(c+402,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_awburst", false,-1, 1,0);
        tracep->declBit(c+389,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_wready", false,-1);
        tracep->declBit(c+20,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_wvalid", false,-1);
        tracep->declQuad(c+403,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_wdata", false,-1, 63,0);
        tracep->declBus(c+405,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_wlast", false,-1);
        tracep->declBit(c+22,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_bready", false,-1);
        tracep->declBit(c+390,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_bvalid", false,-1);
        tracep->declBus(c+391,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_bid", false,-1, 3,0);
        tracep->declBus(c+1,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_bresp", false,-1, 1,0);
        tracep->declBit(c+392,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arready", false,-1);
        tracep->declBit(c+23,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arvalid", false,-1);
        tracep->declBus(c+24,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arid", false,-1, 3,0);
        tracep->declBus(c+341,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_araddr", false,-1, 31,0);
        tracep->declBus(c+627,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arlen", false,-1, 7,0);
        tracep->declBus(c+342,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arsize", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_arburst", false,-1, 1,0);
        tracep->declBit(c+25,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rready", false,-1);
        tracep->declBit(c+393,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rvalid", false,-1);
        tracep->declBus(c+394,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rid", false,-1, 3,0);
        tracep->declBus(c+395,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rresp", false,-1, 1,0);
        tracep->declQuad(c+396,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rdata", false,-1, 63,0);
        tracep->declBit(c+398,"ysyx_041461_TOP AXI_CROSSBAR AXI_CROSSBAR_rlast", false,-1);
        tracep->declBus(c+628,"ysyx_041461_TOP AXI_CROSSBAR OKAY", false,-1, 1,0);
        tracep->declBus(c+635,"ysyx_041461_TOP AXI_CROSSBAR EXOKAY", false,-1, 1,0);
        tracep->declBus(c+636,"ysyx_041461_TOP AXI_CROSSBAR SLVERR", false,-1, 1,0);
        tracep->declBus(c+637,"ysyx_041461_TOP AXI_CROSSBAR DECERR", false,-1, 1,0);
        tracep->declBus(c+399,"ysyx_041461_TOP AXI_CROSSBAR wstate", false,-1, 1,0);
        tracep->declBus(c+400,"ysyx_041461_TOP AXI_CROSSBAR rstate", false,-1, 0,0);
        tracep->declBus(c+4,"ysyx_041461_TOP AXI_CROSSBAR awid", false,-1, 3,0);
        tracep->declBus(c+14,"ysyx_041461_TOP AXI_CROSSBAR awid_next", false,-1, 3,0);
        tracep->declBus(c+5,"ysyx_041461_TOP AXI_CROSSBAR awaddr", false,-1, 31,0);
        tracep->declBus(c+621,"ysyx_041461_TOP AXI_CROSSBAR awaddr_next", false,-1, 31,0);
        tracep->declBus(c+6,"ysyx_041461_TOP AXI_CROSSBAR awlen", false,-1, 7,0);
        tracep->declBus(c+15,"ysyx_041461_TOP AXI_CROSSBAR awlen_next", false,-1, 7,0);
        tracep->declBus(c+7,"ysyx_041461_TOP AXI_CROSSBAR awsize", false,-1, 2,0);
        tracep->declBus(c+622,"ysyx_041461_TOP AXI_CROSSBAR awsize_next", false,-1, 2,0);
        tracep->declBus(c+8,"ysyx_041461_TOP AXI_CROSSBAR awburst", false,-1, 1,0);
        tracep->declBus(c+16,"ysyx_041461_TOP AXI_CROSSBAR awburst_next", false,-1, 1,0);
        tracep->declBus(c+9,"ysyx_041461_TOP AXI_CROSSBAR arid", false,-1, 3,0);
        tracep->declBus(c+623,"ysyx_041461_TOP AXI_CROSSBAR arid_next", false,-1, 3,0);
        tracep->declBus(c+10,"ysyx_041461_TOP AXI_CROSSBAR araddr", false,-1, 31,0);
        tracep->declBus(c+624,"ysyx_041461_TOP AXI_CROSSBAR araddr_next", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_041461_TOP AXI_CROSSBAR arlen", false,-1, 7,0);
        tracep->declBus(c+17,"ysyx_041461_TOP AXI_CROSSBAR arlen_next", false,-1, 7,0);
        tracep->declBus(c+12,"ysyx_041461_TOP AXI_CROSSBAR arsize", false,-1, 2,0);
        tracep->declBus(c+625,"ysyx_041461_TOP AXI_CROSSBAR arsize_next", false,-1, 2,0);
        tracep->declBus(c+13,"ysyx_041461_TOP AXI_CROSSBAR arburst", false,-1, 1,0);
        tracep->declBus(c+18,"ysyx_041461_TOP AXI_CROSSBAR arburst_next", false,-1, 1,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM0 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM0 CEN", false,-1);
        tracep->declBit(c+407,"ysyx_041461_TOP RAM0 WEN", false,-1);
        tracep->declArray(c+408,"ysyx_041461_TOP RAM0 BWEN", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP RAM0 A", false,-1, 5,0);
        tracep->declArray(c+412,"ysyx_041461_TOP RAM0 D", false,-1, 127,0);
        tracep->declArray(c+352,"ysyx_041461_TOP RAM0 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM0 cen", false,-1);
        tracep->declBit(c+552,"ysyx_041461_TOP RAM0 wen", false,-1);
        tracep->declArray(c+553,"ysyx_041461_TOP RAM0 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM1 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM1 CEN", false,-1);
        tracep->declBit(c+416,"ysyx_041461_TOP RAM1 WEN", false,-1);
        tracep->declArray(c+417,"ysyx_041461_TOP RAM1 BWEN", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP RAM1 A", false,-1, 5,0);
        tracep->declArray(c+421,"ysyx_041461_TOP RAM1 D", false,-1, 127,0);
        tracep->declArray(c+356,"ysyx_041461_TOP RAM1 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM1 cen", false,-1);
        tracep->declBit(c+557,"ysyx_041461_TOP RAM1 wen", false,-1);
        tracep->declArray(c+558,"ysyx_041461_TOP RAM1 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM2 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM2 CEN", false,-1);
        tracep->declBit(c+425,"ysyx_041461_TOP RAM2 WEN", false,-1);
        tracep->declArray(c+426,"ysyx_041461_TOP RAM2 BWEN", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP RAM2 A", false,-1, 5,0);
        tracep->declArray(c+430,"ysyx_041461_TOP RAM2 D", false,-1, 127,0);
        tracep->declArray(c+360,"ysyx_041461_TOP RAM2 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM2 cen", false,-1);
        tracep->declBit(c+562,"ysyx_041461_TOP RAM2 wen", false,-1);
        tracep->declArray(c+563,"ysyx_041461_TOP RAM2 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM3 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM3 CEN", false,-1);
        tracep->declBit(c+434,"ysyx_041461_TOP RAM3 WEN", false,-1);
        tracep->declArray(c+435,"ysyx_041461_TOP RAM3 BWEN", false,-1, 127,0);
        tracep->declBus(c+406,"ysyx_041461_TOP RAM3 A", false,-1, 5,0);
        tracep->declArray(c+439,"ysyx_041461_TOP RAM3 D", false,-1, 127,0);
        tracep->declArray(c+364,"ysyx_041461_TOP RAM3 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM3 cen", false,-1);
        tracep->declBit(c+567,"ysyx_041461_TOP RAM3 wen", false,-1);
        tracep->declArray(c+568,"ysyx_041461_TOP RAM3 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM4 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM4 CEN", false,-1);
        tracep->declBit(c+444,"ysyx_041461_TOP RAM4 WEN", false,-1);
        tracep->declArray(c+445,"ysyx_041461_TOP RAM4 BWEN", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP RAM4 A", false,-1, 5,0);
        tracep->declArray(c+449,"ysyx_041461_TOP RAM4 D", false,-1, 127,0);
        tracep->declArray(c+368,"ysyx_041461_TOP RAM4 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM4 cen", false,-1);
        tracep->declBit(c+572,"ysyx_041461_TOP RAM4 wen", false,-1);
        tracep->declArray(c+573,"ysyx_041461_TOP RAM4 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM5 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM5 CEN", false,-1);
        tracep->declBit(c+453,"ysyx_041461_TOP RAM5 WEN", false,-1);
        tracep->declArray(c+454,"ysyx_041461_TOP RAM5 BWEN", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP RAM5 A", false,-1, 5,0);
        tracep->declArray(c+458,"ysyx_041461_TOP RAM5 D", false,-1, 127,0);
        tracep->declArray(c+372,"ysyx_041461_TOP RAM5 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM5 cen", false,-1);
        tracep->declBit(c+577,"ysyx_041461_TOP RAM5 wen", false,-1);
        tracep->declArray(c+578,"ysyx_041461_TOP RAM5 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM6 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM6 CEN", false,-1);
        tracep->declBit(c+462,"ysyx_041461_TOP RAM6 WEN", false,-1);
        tracep->declArray(c+463,"ysyx_041461_TOP RAM6 BWEN", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP RAM6 A", false,-1, 5,0);
        tracep->declArray(c+467,"ysyx_041461_TOP RAM6 D", false,-1, 127,0);
        tracep->declArray(c+376,"ysyx_041461_TOP RAM6 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM6 cen", false,-1);
        tracep->declBit(c+582,"ysyx_041461_TOP RAM6 wen", false,-1);
        tracep->declArray(c+583,"ysyx_041461_TOP RAM6 bwen", false,-1, 127,0);
        tracep->declBit(c+613,"ysyx_041461_TOP RAM7 CLK", false,-1);
        tracep->declBit(c+629,"ysyx_041461_TOP RAM7 CEN", false,-1);
        tracep->declBit(c+471,"ysyx_041461_TOP RAM7 WEN", false,-1);
        tracep->declArray(c+472,"ysyx_041461_TOP RAM7 BWEN", false,-1, 127,0);
        tracep->declBus(c+443,"ysyx_041461_TOP RAM7 A", false,-1, 5,0);
        tracep->declArray(c+476,"ysyx_041461_TOP RAM7 D", false,-1, 127,0);
        tracep->declArray(c+380,"ysyx_041461_TOP RAM7 Q", false,-1, 127,0);
        tracep->declBit(c+640,"ysyx_041461_TOP RAM7 cen", false,-1);
        tracep->declBit(c+587,"ysyx_041461_TOP RAM7 wen", false,-1);
        tracep->declArray(c+588,"ysyx_041461_TOP RAM7 bwen", false,-1, 127,0);
    }
}

void Vysyx_041461_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_041461_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_041461_TOP___024root__traceRegister(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_041461_TOP___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_041461_TOP___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_041461_TOP___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_041461_TOP___024root__traceFullSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_041461_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_041461_TOP___024root* const __restrict vlSelf = static_cast<Vysyx_041461_TOP___024root*>(voidSelf);
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_041461_TOP___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_041461_TOP___024root__traceFullSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp182;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<4>/*127:0*/ __Vtemp186;
    VlWide<4>/*127:0*/ __Vtemp187;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp),2);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp),2);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp),2);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid),4);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr),32);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen),8);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize),3);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst),2);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid),4);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr),32);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen),8);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize),3);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst),2);
        tracep->fullCData(oldp+14,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid))),4);
        tracep->fullCData(oldp+15,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen))),8);
        tracep->fullCData(oldp+16,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst))),2);
        tracep->fullCData(oldp+17,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen)
                                     : 0U)),8);
        tracep->fullCData(oldp+18,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst)
                                     : 0U)),2);
        tracep->fullBit(oldp+19,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                  & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
        tracep->fullBit(oldp+20,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast));
        tracep->fullBit(oldp+22,((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
        tracep->fullBit(oldp+23,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                  & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                      ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                      : (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
        tracep->fullCData(oldp+24,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                     ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         ? 0U : 1U)
                                     : 0U)),4);
        tracep->fullBit(oldp+25,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                   ? (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict));
        tracep->fullCData(oldp+27,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out),4);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict));
        tracep->fullCData(oldp+29,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out),4);
        tracep->fullBit(oldp+30,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
        tracep->fullBit(oldp+31,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
        tracep->fullBit(oldp+32,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
        tracep->fullCData(oldp+33,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
        tracep->fullIData(oldp+34,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
        tracep->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 7U))),5);
        tracep->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+39,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0x14U))),5);
        tracep->fullSData(oldp+40,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                    >> 0x14U)),12);
        tracep->fullQData(oldp+41,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xfU))))),64);
        tracep->fullBit(oldp+43,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
        tracep->fullCData(oldp+44,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
        tracep->fullSData(oldp+48,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),3);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
        tracep->fullBit(oldp+61,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
        tracep->fullCData(oldp+62,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
        tracep->fullSData(oldp+66,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
        tracep->fullCData(oldp+73,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
        tracep->fullCData(oldp+74,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),3);
        tracep->fullBit(oldp+75,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
        tracep->fullBit(oldp+76,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
        tracep->fullBit(oldp+77,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
        tracep->fullBit(oldp+78,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
        tracep->fullCData(oldp+79,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
        tracep->fullCData(oldp+85,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
        tracep->fullSData(oldp+86,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
        tracep->fullCData(oldp+93,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),3);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                    [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
        tracep->fullBit(oldp+117,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                   >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
        tracep->fullBit(oldp+118,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
        tracep->fullBit(oldp+119,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
        tracep->fullCData(oldp+121,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
        tracep->fullBit(oldp+122,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
        tracep->fullCData(oldp+123,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
        tracep->fullQData(oldp+124,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
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
        tracep->fullBit(oldp+126,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
        tracep->fullCData(oldp+127,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
        tracep->fullBit(oldp+128,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                   & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
        tracep->fullCData(oldp+129,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? 1U : 0U)),4);
        tracep->fullBit(oldp+130,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                   & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
        tracep->fullCData(oldp+131,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
        tracep->fullBit(oldp+134,((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                 >> 7U)))));
        tracep->fullBit(oldp+135,((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                 >> 7U)))));
        tracep->fullBit(oldp+136,((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullIData(oldp+137,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
        tracep->fullCData(oldp+138,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
        tracep->fullCData(oldp+139,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+140,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                     >> 0x1aU)),6);
        tracep->fullCData(oldp+141,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+142,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0x14U))),6);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
        tracep->fullWData(oldp+147,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),128);
        tracep->fullBit(oldp+151,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
        tracep->fullBit(oldp+152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
        tracep->fullCData(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),4);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
        tracep->fullIData(oldp+156,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next),64);
        tracep->fullIData(oldp+303,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
        tracep->fullBit(oldp+304,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
        tracep->fullBit(oldp+305,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                   & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                                       | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                                      | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))))));
        tracep->fullBit(oldp+306,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
        tracep->fullBit(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
        tracep->fullBit(oldp+308,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
        tracep->fullBit(oldp+309,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
        tracep->fullBit(oldp+310,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                   & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                       | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                      | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
        tracep->fullBit(oldp+311,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                   & (IData)((8U == 
                                              (0xcU 
                                               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))))));
        tracep->fullBit(oldp+312,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
        tracep->fullBit(oldp+313,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                   & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                       | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                      | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
        tracep->fullQData(oldp+314,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
        tracep->fullCData(oldp+318,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
        tracep->fullBit(oldp+319,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
        tracep->fullBit(oldp+320,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit));
        tracep->fullBit(oldp+321,(((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                   & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
        tracep->fullBit(oldp+322,(((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                   & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
        tracep->fullCData(oldp+323,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
        tracep->fullCData(oldp+324,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
        tracep->fullIData(oldp+325,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
        tracep->fullCData(oldp+326,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
        tracep->fullCData(oldp+327,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
        tracep->fullCData(oldp+328,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
        tracep->fullCData(oldp+329,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
        tracep->fullCData(oldp+330,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
        tracep->fullCData(oldp+331,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
        tracep->fullCData(oldp+332,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                          ? 1U : 0U)
                                      : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
        tracep->fullIData(oldp+333,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
        tracep->fullCData(oldp+334,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
        tracep->fullCData(oldp+335,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
        tracep->fullCData(oldp+336,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
        tracep->fullCData(oldp+337,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
        tracep->fullCData(oldp+338,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
        tracep->fullCData(oldp+339,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
        tracep->fullCData(oldp+340,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
        tracep->fullIData(oldp+341,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                              ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                              : ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)) 
                                                 << 3U))
                                          : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                                      : 0U)),32);
        tracep->fullCData(oldp+342,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                              ? 2U : 3U)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                                      : 0U)),3);
        tracep->fullBit(oldp+343,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                    ? ((~ ((((((0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                                       & ((((((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))
                                    : ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                       & (~ ((((0U 
                                                != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out)) 
                                               | (0U 
                                                  != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                              | (0U 
                                                 != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                             | (0U 
                                                != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))))));
        tracep->fullBit(oldp+344,(((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                    & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                   | ((~ (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                          & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                      & ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))));
        tracep->fullBit(oldp+345,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                    ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                        & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict)))
                                        ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                        : ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict))) 
                                           & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                               & (0U 
                                                  != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))
                                    : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))));
        tracep->fullQData(oldp+346,(((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                      ? 0ULL : ((4U 
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
        tracep->fullBit(oldp+348,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                   & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                                      | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))))));
        tracep->fullBit(oldp+349,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                   & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)))));
        tracep->fullIData(oldp+350,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                      : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)),32);
        tracep->fullCData(oldp+351,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                      : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))),3);
        tracep->fullWData(oldp+352,(vlSelf->ysyx_041461_TOP__DOT__Q0),128);
        tracep->fullWData(oldp+356,(vlSelf->ysyx_041461_TOP__DOT__Q1),128);
        tracep->fullWData(oldp+360,(vlSelf->ysyx_041461_TOP__DOT__Q2),128);
        tracep->fullWData(oldp+364,(vlSelf->ysyx_041461_TOP__DOT__Q3),128);
        tracep->fullWData(oldp+368,(vlSelf->ysyx_041461_TOP__DOT__Q4),128);
        tracep->fullWData(oldp+372,(vlSelf->ysyx_041461_TOP__DOT__Q5),128);
        tracep->fullWData(oldp+376,(vlSelf->ysyx_041461_TOP__DOT__Q6),128);
        tracep->fullWData(oldp+380,(vlSelf->ysyx_041461_TOP__DOT__Q7),128);
        tracep->fullBit(oldp+384,(vlSelf->ysyx_041461_TOP__DOT__rst_r1));
        tracep->fullBit(oldp+385,(vlSelf->ysyx_041461_TOP__DOT__rst_r2));
        tracep->fullBit(oldp+386,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1));
        tracep->fullBit(oldp+387,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2));
        tracep->fullBit(oldp+388,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
        tracep->fullBit(oldp+389,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
        tracep->fullBit(oldp+390,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid));
        tracep->fullCData(oldp+391,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid),4);
        tracep->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
        tracep->fullBit(oldp+393,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid));
        tracep->fullCData(oldp+394,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid),4);
        tracep->fullCData(oldp+395,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp),2);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata),64);
        tracep->fullBit(oldp+398,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast));
        tracep->fullCData(oldp+399,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate),2);
        tracep->fullBit(oldp+400,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate));
        tracep->fullIData(oldp+401,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr),32);
        tracep->fullCData(oldp+402,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize),3);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata),64);
        tracep->fullCData(oldp+405,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb),8);
        tracep->fullCData(oldp+406,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                      >> 3U)))),6);
        tracep->fullBit(oldp+407,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen));
        tracep->fullWData(oldp+408,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask),128);
        tracep->fullWData(oldp+412,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata),128);
        tracep->fullBit(oldp+416,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen));
        tracep->fullWData(oldp+417,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask),128);
        tracep->fullWData(oldp+421,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata),128);
        tracep->fullBit(oldp+425,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen));
        tracep->fullWData(oldp+426,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask),128);
        tracep->fullWData(oldp+430,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata),128);
        tracep->fullBit(oldp+434,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen));
        tracep->fullWData(oldp+435,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask),128);
        tracep->fullWData(oldp+439,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata),128);
        tracep->fullCData(oldp+443,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 3U)))),6);
        tracep->fullBit(oldp+444,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen));
        tracep->fullWData(oldp+445,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask),128);
        tracep->fullWData(oldp+449,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata),128);
        tracep->fullBit(oldp+453,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen));
        tracep->fullWData(oldp+454,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask),128);
        tracep->fullWData(oldp+458,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata),128);
        tracep->fullBit(oldp+462,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen));
        tracep->fullWData(oldp+463,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask),128);
        tracep->fullWData(oldp+467,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata),128);
        tracep->fullBit(oldp+471,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen));
        tracep->fullWData(oldp+472,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask),128);
        tracep->fullWData(oldp+476,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata),128);
        tracep->fullBit(oldp+480,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict));
        tracep->fullCData(oldp+481,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out),4);
        tracep->fullCData(oldp+482,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out),4);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc),64);
        tracep->fullCData(oldp+485,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out),4);
        tracep->fullIData(oldp+486,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst),32);
        tracep->fullIData(oldp+487,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                      : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)) 
                                         << 3U))),32);
        tracep->fullCData(oldp+488,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                      ? 2U : 3U)),3);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
        tracep->fullBit(oldp+493,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out));
        tracep->fullBit(oldp+494,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
        tracep->fullCData(oldp+495,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE),3);
        tracep->fullCData(oldp+496,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
        tracep->fullCData(oldp+497,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
        tracep->fullCData(oldp+498,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
        tracep->fullCData(oldp+499,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),3);
        tracep->fullCData(oldp+500,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out),4);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out),64);
        tracep->fullCData(oldp+503,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out),4);
        tracep->fullIData(oldp+504,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr),32);
        tracep->fullCData(oldp+505,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize),3);
        tracep->fullIData(oldp+506,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr),32);
        tracep->fullCData(oldp+507,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize),3);
        tracep->fullBit(oldp+508,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1));
        tracep->fullBit(oldp+509,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2));
        tracep->fullBit(oldp+510,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3));
        tracep->fullBit(oldp+511,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4));
        tracep->fullBit(oldp+512,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5));
        tracep->fullBit(oldp+513,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6));
        tracep->fullBit(oldp+514,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7));
        tracep->fullBit(oldp+515,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8));
        tracep->fullBit(oldp+516,(((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1) 
                                         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2)) 
                                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3)) 
                                       | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4)) 
                                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5)) 
                                     | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6)) 
                                    | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7)) 
                                   | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8))));
        tracep->fullCData(oldp+517,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),3);
        tracep->fullQData(oldp+518,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 9U)),55);
        tracep->fullBit(oldp+520,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached));
        tracep->fullIData(oldp+521,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i),32);
        tracep->fullBit(oldp+522,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
        tracep->fullBit(oldp+523,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1));
        tracep->fullBit(oldp+524,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2));
        tracep->fullBit(oldp+525,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3));
        tracep->fullBit(oldp+526,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4));
        tracep->fullBit(oldp+527,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5));
        tracep->fullBit(oldp+528,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6));
        tracep->fullBit(oldp+529,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7));
        tracep->fullBit(oldp+530,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
        tracep->fullBit(oldp+531,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit));
        tracep->fullCData(oldp+532,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))),3);
        tracep->fullQData(oldp+533,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 9U)),55);
        tracep->fullBit(oldp+535,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align));
        tracep->fullQData(oldp+536,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask),64);
        tracep->fullQData(oldp+538,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata),64);
        tracep->fullQData(oldp+540,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata),64);
        tracep->fullQData(oldp+542,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata),64);
        tracep->fullQData(oldp+544,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next),64);
        tracep->fullQData(oldp+546,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next),64);
        tracep->fullBit(oldp+548,((((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                    & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
                                   | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                      & (0x2004007U 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)))));
        tracep->fullBit(oldp+549,((((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                    & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)) 
                                   | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                      & (0x2004007U 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)))));
        tracep->fullIData(oldp+550,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next),32);
        tracep->fullCData(oldp+551,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next),3);
        tracep->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))));
        __Vtemp180[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]);
        __Vtemp180[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]);
        __Vtemp180[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]);
        __Vtemp180[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]);
        tracep->fullWData(oldp+553,(__Vtemp180),128);
        tracep->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))));
        __Vtemp181[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]);
        __Vtemp181[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]);
        __Vtemp181[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]);
        __Vtemp181[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]);
        tracep->fullWData(oldp+558,(__Vtemp181),128);
        tracep->fullBit(oldp+562,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))));
        __Vtemp182[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]);
        __Vtemp182[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]);
        __Vtemp182[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]);
        __Vtemp182[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]);
        tracep->fullWData(oldp+563,(__Vtemp182),128);
        tracep->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))));
        __Vtemp183[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]);
        __Vtemp183[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]);
        __Vtemp183[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]);
        __Vtemp183[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]);
        tracep->fullWData(oldp+568,(__Vtemp183),128);
        tracep->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))));
        __Vtemp184[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]);
        __Vtemp184[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]);
        __Vtemp184[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]);
        __Vtemp184[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]);
        tracep->fullWData(oldp+573,(__Vtemp184),128);
        tracep->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))));
        __Vtemp185[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]);
        __Vtemp185[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]);
        __Vtemp185[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]);
        __Vtemp185[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]);
        tracep->fullWData(oldp+578,(__Vtemp185),128);
        tracep->fullBit(oldp+582,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))));
        __Vtemp186[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]);
        __Vtemp186[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]);
        __Vtemp186[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]);
        __Vtemp186[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]);
        tracep->fullWData(oldp+583,(__Vtemp186),128);
        tracep->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))));
        __Vtemp187[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]);
        __Vtemp187[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]);
        __Vtemp187[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]);
        __Vtemp187[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]);
        tracep->fullWData(oldp+588,(__Vtemp187),128);
        tracep->fullBit(oldp+592,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid));
        tracep->fullCData(oldp+593,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp),2);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata),64);
        tracep->fullBit(oldp+596,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast));
        tracep->fullCData(oldp+597,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid),4);
        tracep->fullBit(oldp+598,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid));
        tracep->fullCData(oldp+599,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp),2);
        tracep->fullQData(oldp+600,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata),64);
        tracep->fullBit(oldp+602,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast));
        tracep->fullCData(oldp+603,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid),4);
        tracep->fullBit(oldp+604,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid));
        tracep->fullCData(oldp+605,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid),4);
        tracep->fullQData(oldp+606,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next),64);
        tracep->fullBit(oldp+608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ready));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready));
        tracep->fullBit(oldp+613,(vlSelf->clk));
        tracep->fullBit(oldp+614,(vlSelf->rst));
        tracep->fullBit(oldp+615,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                   & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
        tracep->fullBit(oldp+616,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                   & ((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                      & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate))))));
        tracep->fullBit(oldp+617,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate)))));
        tracep->fullBit(oldp+618,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                                    ? (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                    : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                       & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))))));
        tracep->fullQData(oldp+619,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                      ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata
                                      : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata)),64);
        tracep->fullIData(oldp+621,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                      ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                      : vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)),32);
        tracep->fullCData(oldp+622,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                      : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize))),3);
        tracep->fullCData(oldp+623,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
                                      : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                          ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                              ? 0U : 1U)
                                          : 0U))),4);
        tracep->fullIData(oldp+624,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                      ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr
                                      : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                          ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                              ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                  ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)) 
                                                  << 3U))
                                              : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                                          : 0U))),32);
        tracep->fullCData(oldp+625,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize)
                                      : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                          ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                              ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                  ? 2U
                                                  : 3U)
                                              : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                                          : 0U))),3);
        tracep->fullCData(oldp+626,(1U),4);
        tracep->fullCData(oldp+627,(0U),8);
        tracep->fullCData(oldp+628,(0U),2);
        tracep->fullBit(oldp+629,(0U));
        tracep->fullCData(oldp+630,(0U),4);
        tracep->fullIData(oldp+631,(0U),32);
        tracep->fullCData(oldp+632,(0U),3);
        tracep->fullQData(oldp+633,(0ULL),64);
        tracep->fullCData(oldp+635,(1U),2);
        tracep->fullCData(oldp+636,(2U),2);
        tracep->fullCData(oldp+637,(3U),2);
        tracep->fullIData(oldp+638,(0x40U),32);
        tracep->fullIData(oldp+639,(0x20U),32);
        tracep->fullBit(oldp+640,(1U));
    }
}
