
module ysyx_041461_IF2_reg(

    input   wire [0:0]    clk                  ,
    input   wire [0:0]    rst                  ,
    input   wire [0:0]    IF2reg_enable       ,

    input   wire [63:0]   IF2reg_pc_in        ,
    input   wire [63:0]   IF2reg_AXI_rdata_in ,
    input   wire [0:0]    IF2reg_hit1_in      ,
    input   wire [0:0]    IF2reg_hit2_in      ,
    input   wire [0:0]    IF2reg_hit3_in      ,
    input   wire [0:0]    IF2reg_hit4_in      ,
    input   wire [0:0]    IF2reg_hit5_in      ,
    input   wire [0:0]    IF2reg_hit6_in      ,
    input   wire [0:0]    IF2reg_hit7_in      ,
    input   wire [0:0]    IF2reg_hit8_in      ,
    input   wire [0:0]    IF2reg_valid_in     ,
    input   wire [3:0]    IF2reg_trap_in      ,
    
    output  reg  [63:0]   IF2reg_pc_out       ,
    output  reg  [63:0]   IF2reg_AXI_rdata_out,
    output  reg  [0:0]    IF2reg_hit1_out     ,
    output  reg  [0:0]    IF2reg_hit2_out     ,
    output  reg  [0:0]    IF2reg_hit3_out     ,
    output  reg  [0:0]    IF2reg_hit4_out     ,
    output  reg  [0:0]    IF2reg_hit5_out     ,
    output  reg  [0:0]    IF2reg_hit6_out     ,
    output  reg  [0:0]    IF2reg_hit7_out     ,
    output  reg  [0:0]    IF2reg_hit8_out     ,
    output  reg  [0:0]    IF2reg_valid_out    ,
    output  reg  [3:0]    IF2reg_trap_out 
);

//流水线寄存器功能实现

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin  
        IF2reg_pc_out <= 64'h0000_0000_3000_0000; 
        IF2reg_AXI_rdata_out <= 64'b0;
        IF2reg_hit1_out <= 1'b0;
        IF2reg_hit2_out <= 1'b0;
        IF2reg_hit3_out <= 1'b0;
        IF2reg_hit4_out <= 1'b0;
        IF2reg_hit5_out <= 1'b0;
        IF2reg_hit6_out <= 1'b0;
        IF2reg_hit7_out <= 1'b0;
        IF2reg_hit8_out <= 1'b0;
        IF2reg_valid_out <= 1'b0;
        IF2reg_trap_out <= `ysyx_041461_TRAP_NOP;                 
    end
    else if(IF2reg_enable == 1'b0) begin
        IF2reg_pc_out <= IF2reg_pc_out; 
        IF2reg_AXI_rdata_out <= IF2reg_AXI_rdata_out;
        IF2reg_hit1_out <= IF2reg_hit1_out;
        IF2reg_hit2_out <= IF2reg_hit2_out;
        IF2reg_hit3_out <= IF2reg_hit3_out;
        IF2reg_hit4_out <= IF2reg_hit4_out;
        IF2reg_hit5_out <= IF2reg_hit5_out;
        IF2reg_hit6_out <= IF2reg_hit6_out;
        IF2reg_hit7_out <= IF2reg_hit7_out;
        IF2reg_hit8_out <= IF2reg_hit8_out;
        IF2reg_valid_out <= IF2reg_valid_out;
        IF2reg_trap_out <= IF2reg_trap_out;   
    end
    else begin 
        IF2reg_pc_out <= IF2reg_pc_in; 
        IF2reg_AXI_rdata_out <= IF2reg_AXI_rdata_in;
        IF2reg_hit1_out <= IF2reg_hit1_in;
        IF2reg_hit2_out <= IF2reg_hit2_in;
        IF2reg_hit3_out <= IF2reg_hit3_in;
        IF2reg_hit4_out <= IF2reg_hit4_in;
        IF2reg_hit5_out <= IF2reg_hit5_in;
        IF2reg_hit6_out <= IF2reg_hit6_in;
        IF2reg_hit7_out <= IF2reg_hit7_in;
        IF2reg_hit8_out <= IF2reg_hit8_in;
        IF2reg_valid_out <= IF2reg_valid_in;
        IF2reg_trap_out <= IF2reg_trap_in;  
    end
end

endmodule
