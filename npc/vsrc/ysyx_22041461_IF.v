module ysyx_22041461_IF(

    input  wire [0:0]  clk         ,
    input  wire [0:0]  rst         ,
    input  wire [0:0]  IF_valid_in ,
    input  wire [63:0] IF_pc       ,

    output wire [0:0]  IF_valid_out,
    output wire [31:0] IF_inst
);


ysyx_22041461_ICACHE ICACHE(

   .clk              (clk),
   .flush            (rst),
   .ICACHE_valid_in  (IF_valid_in),

   .ICACHE_pc        (IF_pc),

   .ICACHE_valid_out (IF_valid_out),
   .ICACHE_inst      (IF_inst)
);

endmodule
