module ysyx_22041461_SRL(

    input   wire [63:0] src1    ,
    input   wire [63:0] src2    ,
    input   wire [4:0]  ctrl_ALU,

    output  reg  [63:0] SRL_out
);

reg [63:0] srl;

always@(*) begin
    case(ctrl_ALU)
        5'b01011: begin
            srl     = src1 >> src2[5:0];
            SRL_out = srl;
        end
        5'b11101: begin
            srl     = src1 >> src2[5:0];
            SRL_out = {{32{srl[31:31]}}, srl[31:0]};
        end
        5'b11110: begin
            srl     = {32'd0, src1[31:0] >> src2[4:0]};
            SRL_out = {{32{srl[31:31]}}, srl[31:0]};
        end
        default: begin
            srl     = 64'd0;
            SRL_out = 64'd0;
        end
    endcase
end

endmodule
