`include "ysyx_22041461_macro"

module ysyx_22041461_WB_reg(
    input   wire [0:0]   clk                 ,
    input   wire [0:0]   flush               ,
    input   wire [0:0]   WBreg_enable       ,

    input   wire [0:0]   WBreg_valid_fromWB ,
    input   wire [0:0]   WBreg_valid_fromCD ,

    input   wire [63:0]  WBreg_MEM_in       ,
    input   wire [4:0]   WBreg_rd_in        ,
    input   wire [4:0]   WBreg_rs2_in       ,
    input   wire [11:0]  WBreg_csr_in       ,
    input   wire [63:0]  WBreg_imm_in       ,
    input   wire [63:0]  WBreg_zimm_in      ,
    input   wire [63:0]  WBreg_pc_in        ,
    input   wire [3:0]   WBreg_MEM_ctrl_in  ,
    input   wire [3:0]   WBreg_WB_ctrl_in   ,
  
    output  reg  [0:0]   WBreg_valid_out    ,  
    output  reg  [63:0]  WBreg_MEM_out      ,
    output  reg  [4:0]   WBreg_rd_out       ,
    output  reg  [4:0]   WBreg_rs2_out      ,
    output  reg  [11:0]  WBreg_csr_out      ,
    output  reg  [63:0]  WBreg_imm_out      ,
    output  reg  [63:0]  WBreg_zimm_out     ,
    output  reg  [63:0]  WBreg_pc_out       ,
    output  reg  [3:0]   WBreg_MEM_ctrl_out ,
    output  reg  [3:0]   WBreg_WB_ctrl_out  ,
);