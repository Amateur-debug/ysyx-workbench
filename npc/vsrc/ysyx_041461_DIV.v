module ysyx_041461_DIV(

    input  wire   [0:0]  clk          ,
    input  wire   [0:0]  rst          ,

    input  wire   [0:0]  DIV_valid_in ,
    input  wire   [0:0]  DIV_signed   ,
    input  wire   [0:0]  DIV_divw     ,
    input  wire   [63:0] DIV_dividend ,
    input  wire   [63:0] DIV_divisor  ,

    output reg    [0:0]  DIV_valid_out,
    output reg    [63:0] DIV_quotient ,
    output reg    [63:0] DIV_remainder
);

assign DIV_valid_out = 1'b1;
assign DIV_quotient = 64'b0;
assign DIV_remainder = 64'b0;












endmodule
