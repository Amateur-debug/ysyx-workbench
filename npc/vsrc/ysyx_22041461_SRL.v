module ysyx_22041461_SRL(

    input   wire [63:0] src1   ,
    input   wire [63:0] src2   ,

    output  wire [63:0] SRL_out
);

assign  SRL_out = src1 >> src2[6:0];

endmodule
