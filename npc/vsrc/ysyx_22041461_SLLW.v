module ysyx_22041461_SLLW(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,

    output  wire [63:0] SLLW_out
);

wire [31:0] sllw;

assign sllw = src1[31:0] << src2[4:0];

assign SLLW_out = {{32{sllw[31:31]}}, sllw[31:0]};

endmodule
