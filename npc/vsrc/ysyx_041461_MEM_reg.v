`include "ysyx_041461_macro.v"
module ysyx_041461_MEM_reg(

    input   wire [0:0]   clk                 ,
    input   wire [0:0]   rst                 ,
    input   wire [0:0]   MEMreg_enable       ,
       
    input   wire [0:0]   MEMreg_valid_in     ,
    input   wire [3:0]   MEMreg_trap_in      ,
    input   wire [63:0]  MEMreg_EXE_in       ,
    input   wire [4:0]   MEMreg_rd_in        ,
    input   wire [4:0]   MEMreg_rs1_in       ,
    input   wire [4:0]   MEMreg_rs2_in       ,
    input   wire [11:0]  MEMreg_csr_in       ,
    input   wire [63:0]  MEMreg_imm_in       ,
    input   wire [63:0]  MEMreg_zimm_in      ,
    input   wire [63:0]  MEMreg_pc_in        ,
    input   wire [3:0]   MEMreg_MEM_ctrl_in  ,
    input   wire [3:0]   MEMreg_WB_ctrl_in   ,
  
    output  reg  [0:0]   MEMreg_valid_out    ,    
    output  reg  [3:0]   MEMreg_trap_out     ,
    output  reg  [63:0]  MEMreg_EXE_out      ,
    output  reg  [4:0]   MEMreg_rd_out       ,
    output  reg  [4:0]   MEMreg_rs1_out      ,
    output  reg  [4:0]   MEMreg_rs2_out      ,
    output  reg  [11:0]  MEMreg_csr_out      ,
    output  reg  [63:0]  MEMreg_imm_out      ,
    output  reg  [63:0]  MEMreg_zimm_out     ,
    output  reg  [63:0]  MEMreg_pc_out       ,
    output  reg  [3:0]   MEMreg_MEM_ctrl_out ,
    output  reg  [3:0]   MEMreg_WB_ctrl_out  
);


//流水线寄存器功能实现

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin  
        MEMreg_valid_out <= 1'b0;
        MEMreg_trap_out <= `ysyx_041461_TRAP_NOP;
        MEMreg_EXE_out <= 64'b0;   
        MEMreg_rd_out <= 5'b0;   
        MEMreg_rs1_out <= 5'b0;  
        MEMreg_rs2_out <= 5'b0;
        MEMreg_csr_out <= 12'b0;   
        MEMreg_imm_out <= 64'b0;    
        MEMreg_zimm_out <= 64'b0;   
        MEMreg_pc_out <= 64'h0000_0000_8000_0000;     
        MEMreg_MEM_ctrl_out <= `ysyx_041461_MEM_NOP;
        MEMreg_WB_ctrl_out <= `ysyx_041461_WB_NOP;           
    end
    else if(MEMreg_enable == 1'b0) begin
        MEMreg_valid_out <= MEMreg_valid_out;
        MEMreg_trap_out <= MEMreg_trap_out;
        MEMreg_EXE_out <= MEMreg_EXE_out;   
        MEMreg_rd_out <= MEMreg_rd_out;   
        MEMreg_rs1_out <= MEMreg_rs1_out;  
        MEMreg_rs2_out <= MEMreg_rs2_out;
        MEMreg_csr_out <= MEMreg_csr_out;   
        MEMreg_imm_out <= MEMreg_imm_out;    
        MEMreg_zimm_out <= MEMreg_zimm_out;   
        MEMreg_pc_out <= MEMreg_pc_out;     
        MEMreg_MEM_ctrl_out <= MEMreg_MEM_ctrl_out;
        MEMreg_WB_ctrl_out <= MEMreg_WB_ctrl_out;  
    end
    else begin 
        MEMreg_valid_out <= MEMreg_valid_in;
        MEMreg_trap_out <= MEMreg_trap_in;     
        MEMreg_EXE_out <= MEMreg_EXE_in;   
        MEMreg_rd_out <= MEMreg_rd_in;   
        MEMreg_rs1_out <= MEMreg_rs1_in;  
        MEMreg_rs2_out <= MEMreg_rs2_in;
        MEMreg_csr_out <= MEMreg_csr_in;   
        MEMreg_imm_out <= MEMreg_imm_in;    
        MEMreg_zimm_out <= MEMreg_zimm_in;   
        MEMreg_pc_out <= MEMreg_pc_in;     
        MEMreg_MEM_ctrl_out <= MEMreg_MEM_ctrl_in;
        MEMreg_WB_ctrl_out <= MEMreg_WB_ctrl_in;  
    end
end

endmodule
