module ysyx_22041461_SRA(

    input   wire [63:0] src1   ,
    input   wire [63:0] src2   ,

    output  wire [63:0] SRA_out
);

assign  SRA_out = src1 >>> src2[6:0];

endmodule
