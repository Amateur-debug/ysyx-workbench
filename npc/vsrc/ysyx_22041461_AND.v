module ysyx_22041461_AND(

    input   wire [63:0] src1   ,
    input   wire [63:0] src2   ,

    output  wire [63:0] AND_out
);

assign  AND_out = src1 & src2;

endmodule
