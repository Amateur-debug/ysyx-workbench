module ysyx_22041461_MUL(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] MUL_out
);

reg [127:0] mul;

always@(*) begin
    case(ctrl_ALU)
        5'b01100: begin
            mul     = src1 * src2;
            MUL_out = {{32{mul[31:31]}}, mul[31:0]};
        end
        5'b01101: begin
            mul     = src1 * src2;
            MUL_out = mul[127:64];
        end
        5'b01110: begin
            mul     = $signed(src1) * src2;
            MUL_out = mul[127:64];
        end
        5'b01111: begin
            mul     = $signed(src1) * $signed(src2);
            MUL_out = mul[127:64];
        end
        5'b10000: begin
            mul     = src1 * src2;
            MUL_out = mul[63:0];
        end
        default: begin
            mul = 128'd0;
            MUL_out = 64'd0;
        end
    endcase
end

endmodule
