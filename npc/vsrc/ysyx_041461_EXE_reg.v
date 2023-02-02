module  ysyx_041461_EXE_reg(

    input   wire  [0:0]  clk                          ,
    input   wire  [0:0]  rst                          ,
    input   wire  [0:0]  EXEreg_enable                ,
     
    input   wire  [0:0]  EXEreg_valid_in              ,
    input   wire  [3:0]  EXEreg_trap_in               ,
    input   wire  [4:0]  EXEreg_rd_in                 ,
    input   wire  [4:0]  EXEreg_rs1_in                ,
    input   wire  [4:0]  EXEreg_rs2_in                ,
    input   wire  [11:0] EXEreg_csr_in                ,
    input   wire  [63:0] EXEreg_imm_in                ,
    input   wire  [63:0] EXEreg_zimm_in               ,
    input   wire  [63:0] EXEreg_pc_in                 ,
    input   wire  [4:0]  EXEreg_EXE_ctrl_in           ,
    input   wire  [2:0]  EXEreg_EXE_src_in            ,
    input   wire  [3:0]  EXEreg_MEM_ctrl_in           ,
    input   wire  [3:0]  EXEreg_WB_ctrl_in            ,
          
    output  reg   [0:0]  EXEreg_valid_out             ,
    output  reg   [3:0]  EXEreg_trap_out              ,
    output  reg   [4:0]  EXEreg_rd_out                ,
    output  reg   [4:0]  EXEreg_rs1_out               ,
    output  reg   [4:0]  EXEreg_rs2_out               ,
    output  reg   [11:0] EXEreg_csr_out               ,
    output  reg   [63:0] EXEreg_imm_out               ,
    output  reg   [63:0] EXEreg_zimm_out              ,
    output  reg   [63:0] EXEreg_pc_out                ,
    output  reg   [4:0]  EXEreg_EXE_ctrl_out          ,
    output  reg   [2:0]  EXEreg_EXE_src_out           ,
    output  reg   [3:0]  EXEreg_MEM_ctrl_out          ,
    output  reg   [3:0]  EXEreg_WB_ctrl_out
);


//流水线寄存器功能实现

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin  
        EXEreg_valid_out <= 1'b0;
        EXEreg_trap_out <= `ysyx_041461_TRAP_NOP;
        EXEreg_rd_out <= 5'b0;     
        EXEreg_rs1_out <= 5'b0;     
        EXEreg_rs2_out <= 5'b0;    
        EXEreg_csr_out <= 12'b0;     
        EXEreg_imm_out <= 64'b0;   
        EXEreg_zimm_out <= 64'b0;   
        EXEreg_pc_out <= 64'h0000_0000_3000_0000;     
        EXEreg_EXE_ctrl_out <= `ysyx_041461_EXE_NOP;
        EXEreg_EXE_src_out <= `ysyx_041461_EXE_src_NOP;
        EXEreg_MEM_ctrl_out <= `ysyx_041461_MEM_NOP;
        EXEreg_WB_ctrl_out <= `ysyx_041461_WB_NOP;                      
    end
    else if(EXEreg_enable == 1'b0) begin
        EXEreg_valid_out <= EXEreg_valid_out;
        EXEreg_trap_out <= EXEreg_trap_out;
        EXEreg_rd_out <= EXEreg_rd_out;     
        EXEreg_rs1_out <= EXEreg_rs1_out;     
        EXEreg_rs2_out <= EXEreg_rs2_out;    
        EXEreg_csr_out <= EXEreg_csr_out;     
        EXEreg_imm_out <= EXEreg_imm_out;  
        EXEreg_zimm_out <= EXEreg_zimm_out;   
        EXEreg_pc_out <= EXEreg_pc_out;     
        EXEreg_EXE_ctrl_out <= EXEreg_EXE_ctrl_out;
        EXEreg_EXE_src_out <= EXEreg_EXE_src_out;
        EXEreg_MEM_ctrl_out <= EXEreg_MEM_ctrl_out;
        EXEreg_WB_ctrl_out <= EXEreg_WB_ctrl_out;  
    end
    else begin 
        EXEreg_valid_out <= EXEreg_valid_in;
        EXEreg_trap_out <= EXEreg_trap_in;
        EXEreg_rd_out <= EXEreg_rd_in;     
        EXEreg_rs1_out <= EXEreg_rs1_in;     
        EXEreg_rs2_out <= EXEreg_rs2_in;    
        EXEreg_csr_out <= EXEreg_csr_in;     
        EXEreg_imm_out <= EXEreg_imm_in;   
        EXEreg_zimm_out <= EXEreg_zimm_in;   
        EXEreg_pc_out <= EXEreg_pc_in;     
        EXEreg_EXE_ctrl_out <= EXEreg_EXE_ctrl_in;
        EXEreg_EXE_src_out <= EXEreg_EXE_src_in;
        EXEreg_MEM_ctrl_out <= EXEreg_MEM_ctrl_in;
        EXEreg_WB_ctrl_out <= EXEreg_WB_ctrl_in;  
    end
end

endmodule
