module ysyx_22041461_SUB(

    input   wire [63:0] src1 ,
    input   wire [63:0] src2 ,

    output  wire [63:0] sub  
);

assign sub = src1 - src2;

endmodule
