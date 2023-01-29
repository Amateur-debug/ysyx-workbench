module ysyx_041461_CSA(

    input  wire [0:0] a   ,
    input  wire [0:0] b   ,
    input  wire [0:0] cin ,
    output wire [0:0] cout,
    output wire [0:0] s
);

assign s = a ^ b ^ cin;
assign cout = a & b | b & cin | a & cin;

endmodule