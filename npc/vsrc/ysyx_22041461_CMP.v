module ysyx_22041461_CMP(

    input   wire [63:0] imm     ,
    input   wire [63:0] rs1_data,
    input   wire [63:0] rs2_data,
    input   wire [1:0]  sel_CMP ,
    input   wire [0:0]  ctrl_CMP,

    output  reg  [1:0]  CMP_out  
);

reg [63:0] src1;
reg [63:0] src2;

always@(*) begin
    case(sel_CMP)
        2'b00: begin
            src1 = rs1_data;
            src2 = rs2_data;
        end
        2'b01: begin
            src1 = rs1_data;
            src2 = imm     ;
        end
        default: begin
            src1 = rs1_data;
            src2 = rs2_data;
        end
    endcase
end

always@(*) begin
    case(ctrl_CMP)
        1'b0: begin //视为无符号数比较
            if(src1 == src2) begin
                CMP_out = 2'b00;
            end
            else if(src1 < src2) begin
                CMP_out = 2'b01;
            end
            else begin
                CMP_out = 2'b10;
            end
        end
        1'b1: begin //视为有符号数比较
            if(src1 == src2) begin
                CMP_out = 2'b00;
            end
            else if(src1[63:63] == 1'b1 && src2[63:63] == 1'b0) begin
                CMP_out = 2'b01;
            end
            else if(src1[63:63] == 1'b0 && src2[63:63] == 1'b1) begin
                CMP_out = 2'b10;
            end
            else if(src1[63:63] == src2[63:63]) begin
                if(src1[62:0] < src2[62:0]) begin
                    CMP_out = 2'b01;
                end
                else begin
                    CMP_out = 2'b10;
                end
            end
        end
    endcase
end

endmodule
