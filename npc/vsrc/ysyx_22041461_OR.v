module ysyx_22041461_OR(

    input   wire [63:0] src1   ,
    input   wire [63:0] src2   ,

    output  wire [63:0] OR_out
);

assign  OR_out = src1 | src2;

endmodule
