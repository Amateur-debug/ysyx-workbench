module ysyx_041461_MUL(

    input  wire   [0:0]  clk             ,
    input  wire   [0:0]  rst             ,

    input  wire   [0:0]  MUL_valid_in    ,
    input  wire   [0:0]  MUL_flush       ,
    input  wire   [0:0]  MUL_mulw        ,
    input  wire   [1:0]  MUL_signed      ,
    input  wire   [63:0] MUL_multiplicand,
    input  wire   [63:0] MUL_multiplier  ,

    output reg    [0:0]  MUL_ready       ,
    output reg    [0:0]  MUL_valid_out   ,
    output reg    [63:0] MUL_result_hi   ,
    output reg    [63:0] MUL_result_lo
);




endmodule
