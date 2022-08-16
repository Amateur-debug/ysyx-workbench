module ysyx_22041461_ADDER(
    
    input   wire [63:0] src1 ,
    input   wire [63:0] src2 ,

    output  wire [63:0] sum  ,
    output  wire [0:0]  flag   
);

assign  {flag, sum} = src1 + src2;

endmodule
