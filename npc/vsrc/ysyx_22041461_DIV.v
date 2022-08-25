module ysyx_22041461_DIV(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] DIV_out
);

reg [63:0] div;

always@(*) begin
    case(ctrl_ALU)
        5'b10001: begin
            div     = {32'd0, $signed(src1[31:0]) / $signed(src2[31:0])};
            DIV_out = {{32{div[31:31]}}, div[31:0]};
        end
        5'b10010: begin
            div     = {32'd0, src1[31:0] / src2[31:0]};
            DIV_out = {{32{div[31:31]}}, div[31:0]};
        end
        5'b10011: begin
            div     = src1 / src2;
            DIV_out = div;
        end
        5'b10100: begin
            div     = $signed(src1) / $signed(src2);
            DIV_out = div;
        end
        default: begin
            div = 64'd0;
            DIV_out = 64'd0;
        end
    endcase
end

endmodule
