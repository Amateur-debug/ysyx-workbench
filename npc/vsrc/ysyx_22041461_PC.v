module ysyx_22041461_PC(

    input   wire [0:0]   clk      ,
    input   wire [0:0]   rst      ,
    input   wire [1:0]   sel_PC   ,   //选择下一个pc的值
    input   wire [63:0]  dest     ,
    input   wire [63:0]  csr_mepc ,
    input   wire [63:0]  csr_mtvec,

    output  wire [63:0]  snpc     ,
    output  reg  [63:0]  pc       
);

import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);

initial set_pc_ptr(pc);  // rf为通用寄存器的二维数组变量

reg [63:0] npc;  

assign snpc = pc + 4;

always@(*) begin
    case(sel_PC)
        2'b00: begin
            npc = snpc;
        end
        2'b01: begin
            npc = dest;
        end
        2'b10: begin
            npc = csr_mepc;
        end
        2'b11: begin
            npc = csr_mtvec;
        end
    endcase
end

always@(posedge clk) begin
    if(rst == 1'b0) begin
        pc <= 64'h0000_0000_8000_0000;
    end
    else begin
        pc <= npc;
    end
end


endmodule
