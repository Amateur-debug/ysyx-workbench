module ysyx_22041461_SLL(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,

    output  wire [63:0] SLL_out
);

assign  SLL_out = src1 << src2[5:0];


endmodule
