module ysyx_22041461_XOR(

    input   wire [63:0] src1   ,
    input   wire [63:0] src2   ,

    output  wire [63:0] XOR_out
);

assign  XOR_out = src1 ^ src2;

endmodule
