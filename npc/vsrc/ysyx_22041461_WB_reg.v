`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_WB_reg(

    input   wire [0:0]   clk                ,
    input   wire [0:0]   flush              ,
    input   wire [0:0]   WBreg_enable       ,

    input   wire [0:0]   WBreg_valid_fromMEM,
    input   wire [0:0]   WBreg_valid_fromCD ,

    input   wire [63:0]  WBreg_EXE_in       ,
    input   wire [63:0]  WBreg_MEM_in       ,
    input   wire [4:0]   WBreg_rd_in        ,
    input   wire [4:0]   WBreg_rs1_in       ,
    input   wire [11:0]  WBreg_csr_in       ,
    input   wire [63:0]  WBreg_imm_in       ,
    input   wire [63:0]  WBreg_zimm_in      ,
    input   wire [63:0]  WBreg_pc_in        ,
    input   wire [3:0]   WBreg_WB_ctrl_in   ,
  
    output  reg  [0:0]   WBreg_valid_out    , 
    output  reg  [63:0]  WBreg_EXE_out      ,
    output  reg  [63:0]  WBreg_MEM_out      ,
    output  reg  [4:0]   WBreg_rd_out       ,
    output  reg  [4:0]   WBreg_rs1_out      ,
    output  reg  [11:0]  WBreg_csr_out      ,
    output  reg  [63:0]  WBreg_imm_out      ,
    output  reg  [63:0]  WBreg_zimm_out     ,
    output  reg  [63:0]  WBreg_pc_out       ,
    output  reg  [3:0]   WBreg_WB_ctrl_out  
);

//异步复位同步释放
reg  [0:0]   rst_r1;
reg  [0:0]   rst_r2;
wire [0:0]   rst;

assign rst = rst_r2;

always@(posedge clk or negedge flush) begin
    if(flush == 1'b0) begin
        rst_r1 <= 1'b0;
        rst_r2 <= 1'b0;
    end
    else begin
        rst_r1 <= 1'b1;
        rst_r2 <= rst_r1;
    end
end

//流水线寄存器功能实现
always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
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

always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin  
        WBreg_EXE_out <= 64'b0;
        WBreg_MEM_out <= 64'b0;   
        WBreg_rd_out <= 5'b0;     
        WBreg_rs1_out <= 5'b0;
        WBreg_csr_out <= 12'b0;   
        WBreg_imm_out <= 64'b0;    
        WBreg_zimm_out <= 64'b0;   
        WBreg_pc_out <= 64'b0;     
        WBreg_WB_ctrl_out <= `WB_NOP;           
    end
    else if(WBreg_enable == 1'b0) begin
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

