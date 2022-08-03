module ysyx_22041461_ADDER(
    
    input   wire [63:0] in1 ,
    input   wire [63:0] in2 ,

    output  wire [63:0] sum ,
    output  wire [0:0]  flag   
);

assign  {flag, sum} = in1 + in2;    

endmodule
