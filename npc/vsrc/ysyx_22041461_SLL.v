module ysyx_22041461_SLL(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] SLL_out
);

reg [63:0] sll;

always@(*) begin
    case(ctrl_ALU)
        5'b00011: begin
            sll     = src1 << src2[5:0];
            SLL_out = sll;
        end
        5'b01000: begin
            sll     = src1 << src2[4:0];
            SLL_out = {{32{sll[31:31]}}, sll[31:0]};
        end
        5'b11010: begin
            sll     = src1 << src2[5:0];
            SLL_out = {{32{sll[31:31]}}, sll[31:0]};
        end
        default: begin
            sll     = 64'd0;
            SLL_out = 64'd0;
        end
    endcase
end

endmodule
