module ysyx_041461_WB_reg(

    input   wire [0:0]   clk                         ,
    input   wire [0:0]   rst                         ,
    input   wire [0:0]   WBreg_enable                ,
         
    input   wire [0:0]   WBreg_valid_fromMEM         ,
    input   wire [0:0]   WBreg_valid_fromCD          ,
         
    input   wire [2:0]   WBreg_exception_in          ,
    input   wire [0:0]   WBreg_interrupt_ret_inst_in ,
    input   wire [63:0]  WBreg_EXE_in                ,
    input   wire [63:0]  WBreg_MEM_in                ,
    input   wire [4:0]   WBreg_rd_in                 ,
    input   wire [4:0]   WBreg_rs1_in                ,
    input   wire [11:0]  WBreg_csr_in                ,
    input   wire [63:0]  WBreg_imm_in                ,
    input   wire [63:0]  WBreg_zimm_in               ,
    input   wire [63:0]  WBreg_pc_in                 ,
    input   wire [2:0]   WBreg_WB_ctrl_in            ,
         
    output  reg  [0:0]   WBreg_valid_out             , 
    output  reg  [2:0]   WBreg_exception_out         ,
    output  reg  [0:0]   WBreg_interrupt_ret_inst_out,
    output  reg  [63:0]  WBreg_EXE_out               ,
    output  reg  [63:0]  WBreg_MEM_out               ,
    output  reg  [4:0]   WBreg_rd_out                ,
    output  reg  [4:0]   WBreg_rs1_out               ,
    output  reg  [11:0]  WBreg_csr_out               ,
    output  reg  [63:0]  WBreg_imm_out               ,
    output  reg  [63:0]  WBreg_zimm_out              ,
    output  reg  [63:0]  WBreg_pc_out                ,
    output  reg  [2:0]   WBreg_WB_ctrl_out  
);


//流水线寄存器功能实现
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        WBreg_valid_out <= 1'b0;
    end
    else if(WBreg_enable == 1'b0) begin
        WBreg_valid_out <= WBreg_valid_out;
    end
    else if(WBreg_valid_fromCD == 1'b0 || WBreg_valid_fromMEM == 1'b0) begin
        WBreg_valid_out <= 1'b0;
    end
    else begin
        WBreg_valid_out <= 1'b1;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin  
        WBreg_exception_out <= `ysyx_041461_exception_NOP;
        WBreg_interrupt_ret_inst_out <= 1'b0;
        WBreg_EXE_out <= 64'b0;
        WBreg_MEM_out <= 64'b0;   
        WBreg_rd_out <= 5'b0;     
        WBreg_rs1_out <= 5'b0;
        WBreg_csr_out <= 12'b0;   
        WBreg_imm_out <= 64'b0;    
        WBreg_zimm_out <= 64'b0;   
        WBreg_pc_out <= 64'b0;     
        WBreg_WB_ctrl_out <= `ysyx_041461_WB_NOP;           
    end
    else if(WBreg_enable == 1'b0) begin
        WBreg_exception_out <= WBreg_exception_out;
        WBreg_interrupt_ret_inst_out <= WBreg_interrupt_ret_inst_out;
        WBreg_EXE_out <= WBreg_EXE_out;
        WBreg_MEM_out <= WBreg_MEM_out;   
        WBreg_rd_out <= WBreg_rd_out;    
        WBreg_rs1_out <= WBreg_rs1_out; 
        WBreg_csr_out <= WBreg_csr_out;   
        WBreg_imm_out <= WBreg_imm_out;    
        WBreg_zimm_out <= WBreg_zimm_out;   
        WBreg_pc_out <= WBreg_pc_out;     
        WBreg_WB_ctrl_out <= WBreg_WB_ctrl_out;  
    end
    else begin 
        WBreg_exception_out <= WBreg_exception_in;
        WBreg_interrupt_ret_inst_out <= WBreg_interrupt_ret_inst_in;
        WBreg_EXE_out <= WBreg_EXE_in;
        WBreg_MEM_out <= WBreg_MEM_in;   
        WBreg_rd_out <= WBreg_rd_in;  
        WBreg_rs1_out <= WBreg_rs1_in;   
        WBreg_csr_out <= WBreg_csr_in;   
        WBreg_imm_out <= WBreg_imm_in;    
        WBreg_zimm_out <= WBreg_zimm_in;   
        WBreg_pc_out <= WBreg_pc_in;     
        WBreg_WB_ctrl_out <= WBreg_WB_ctrl_in;  
    end
end

endmodule