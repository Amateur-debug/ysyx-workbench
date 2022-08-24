module ysyx_22041461_SRA(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] SRA_out
);

reg [63:0] sra;

always@(*) begin
    case(ctrl_ALU)
        5'b00110: begin
            sra     = src1 >>> src2[5:0];
            SRA_out = sra;
        end
        5'b11011: begin
            sra     = {32'd0, src1[31:0] >>> src2[5:0]};
            SRA_out = {{32{sra[31:31]}}, sra[31:0]};
        end
        5'b11100: begin
            sra     = {32'd0, src1[31:0] >>> src2[4:0]};
            SRA_out = {{32{sra[31:31]}}, sra[31:0]};
        end
        default: begin
            sra     = 64'd0;
            SRA_out = 64'd0;
        end
    endcase
end

endmodule
