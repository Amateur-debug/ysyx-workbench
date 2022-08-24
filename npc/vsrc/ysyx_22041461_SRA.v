module ysyx_22041461_SRA(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] SRA_out
);

reg  [31:0] sra;
wire signed [31:0] src1_32;
wire signed [63:0] src1_64;

assign src1_32 = src1[31:0];
assign src1_64 = src1;

always@(*) begin
    case(ctrl_ALU) 
        5'b00110: begin
            sra     = 32'd0;
            SRA_out = src1_64 >>> src2[5:0];
        end
        5'b11011: begin
            sra     = src1_32 >>> src2[5:0];
            SRA_out = {{32{sra[31:31]}}, sra[31:0]};
        end
        5'b11100: begin
            sra = src1_32 >>> src2[4:0];
            SRA_out = {{32{sra[31:31]}}, sra[31:0]};
        end
        default: begin
            sra     = 32'd0;
            SRA_out = 64'd0;
        end
    endcase
end

endmodule
