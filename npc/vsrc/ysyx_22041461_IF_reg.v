`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_IF_reg(

    input   wire [0:0]   clk               ,
    input   wire [0:0]   flush             ,
    input   wire [0:0]   IFreg_enable      ,
    input   wire [0:0]   IFreg_ctrl        ,
    input   wire [63:0]  IFreg_next_pc     ,
 
    output  reg  [63:0]  IFreg_pc          
);

import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);

initial set_pc_ptr(IFreg_pc);  // rf为通用寄存器的二维数组变量

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

//PC寄存器功能实现
always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        IFreg_pc <= 64'h0000_0000_8000_0000;
    end
    else if(IFreg_enable == 1'b0) begin
        IFreg_pc <= IFreg_pc;
    end
    else if(IFreg_ctrl == 1'b0) begin
        IFreg_pc <= IFreg_pc + 4;
    end
    else begin
        IFreg_pc <= IFreg_next_pc;
    end
end


endmodule
