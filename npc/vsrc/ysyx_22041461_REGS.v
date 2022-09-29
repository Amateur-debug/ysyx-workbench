module ysyx_22041461_REGS(

    input   wire [0:0]  clk       ,
    input   wire [0:0]  rst       ,
    input   wire [2:0]  sel_REGS  ,
    input   wire [4:0]  rs1       ,
    input   wire [4:0]  rs2       ,
    input   wire [4:0]  rd        ,
    input   wire [63:0] imm       ,
    input   wire [63:0] dest      ,
    input   wire [63:0] pc        ,
    input   wire [63:0] snpc      ,
    input   wire [63:0] mem       ,

    output  wire [63:0] rs1_data  ,
    output  wire [63:0] rs2_data  
);

import "DPI-C" function void ebreak();
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

initial set_gpr_ptr(x);  // rf为通用寄存器的二维数组变量

reg [63:0] x [31:0];    //寄存器现态的值
reg [63:0] d [31:0];    //寄存器次态的值

integer i;
integer j;

assign  rs1_data = x[rs1];
assign  rs2_data = x[rs2];

always@(*) begin
    case(sel_REGS)
        3'b000: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
        end
        3'b001: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = dest;
        end
        3'b010: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = pc;
        end
        3'b011: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = snpc;
        end        
        3'b100: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = imm;
        end
        3'b101: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = mem;
        end
        3'b110: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = 64'd0;
        end
        3'b111: begin
            for(i = 0; i < 64; i = i+1) begin
                d[i] = x[i];
            end
            d[rd] = 64'd1;
        end
    endcase
    d[0] = 64'b0;
end

always@(posedge clk) begin
    if(rst == 1'b0) begin
        for(j = 0; j < 64; j = j + 1) begin
            x[j] <= 64'd0;
        end
    end
    else begin
        for(j = 0; j < 64; j = j + 1) begin
            x[j] <= d[j];
        end
    end
end

endmodule
