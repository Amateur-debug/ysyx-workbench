`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_IF(

    input  wire [0:0]  IF_valid_in ,
    input  wire [63:0] IF_pc       ,

    output reg  [0:0]  IF_valid_out,
    output reg  [31:0] IF_inst
);

import "DPI-C" function void pmem_read_pc(input longint raddr, output longint rdata);

reg [63:0] rinst;

always@(*) begin
    if(IF_valid_in == 1'b1) begin
        pmem_read_pc(IF_pc, rinst);
        IF_valid_out = 1'b1;
    end
    else begin
        rinst = 64'b0;
        IF_valid_out = 1'b0;
    end
end

always@(*) begin
    if(IF_pc[2:0] == 3'b000) begin
        IF_inst = rinst[31:0]; 
    end
    else if(IF_pc[1:0] == 2'b00) begin
        IF_inst = rinst[63:32];
    end
    else begin
        IF_inst = 32'b0;
    end
end

endmodule
