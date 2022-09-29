module ysyx_22041461_REM(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] REM_out
);

reg [63:0] rem;

always@(*) begin
    case(ctrl_ALU)
        5'b10101: begin
            rem     = {32'd0, $signed(src1[31:0]) % $signed(src2[31:0])};
            REM_out = {{32{rem[31:31]}}, rem[31:0]};
        end
        5'b10110: begin
            rem     = {32'd0, src1[31:0] % src2[31:0]};
            REM_out = {{32{rem[31:31]}}, rem[31:0]};
        end
        5'b10011: begin
            rem     = src1 % src2;
            REM_out = rem;
        end
        5'b10100: begin
            rem     = $signed(src1) % $signed(src2);
            REM_out = rem;
        end
        5'b10111: begin
            rem     = src1 % src2;
            REM_out = rem;
        end
        default: begin
            rem = 64'd0;
            REM_out = 64'd0;
        end
    endcase
end

endmodule
