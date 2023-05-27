`include "ysyx_041461_macro.v"
module ysyx_041461_ID_reg(

    input   wire [0:0]   clk               ,
    input   wire [0:0]   rst               ,
    input   wire [0:0]   IDreg_enable      ,
        
    input   wire [0:0]   IDreg_valid_in    , 
    input   wire [3:0]   IDreg_trap_in     ,
    input   wire [31:0]  IDreg_inst_in     ,
    input   wire [63:0]  IDreg_pc_in       ,

    output  reg  [0:0]   IDreg_valid_out   ,  
    output  reg  [3:0]   IDreg_trap_out    ,
    output  reg  [31:0]  IDreg_inst_out    ,   
    output  reg  [63:0]  IDreg_pc_out      
);


//流水线寄存器功能实现

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        IDreg_valid_out <= 1'b0;
        IDreg_trap_out <= `ysyx_041461_TRAP_NOP;
        IDreg_inst_out <= 32'b0;
        IDreg_pc_out <= 64'h0000_0000_8000_0000;
    end
    else if(IDreg_enable == 1'b0) begin
        IDreg_valid_out <= IDreg_valid_out;
        IDreg_trap_out <= IDreg_trap_out;
        IDreg_inst_out <= IDreg_inst_out;
        IDreg_pc_out <= IDreg_pc_out;
    end
    else begin
        IDreg_valid_out <= IDreg_valid_in;
        IDreg_trap_out <= IDreg_trap_in;
        IDreg_inst_out <= IDreg_inst_in;
        IDreg_pc_out <= IDreg_pc_in;
    end
end

endmodule
