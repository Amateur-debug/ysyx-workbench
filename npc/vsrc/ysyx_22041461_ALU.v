module ysyx_22041461_ALU(

    input   wire [2:0]  ctrl_ALU,
    input   wire [2:0]  sel_ALU ,
    input   wire [63:0] rs1_data,
    input   wire [63:0] rs2_data,
    input   wire [63:0] imm     ,
    input   wire [63:0] pc      ,
    input   wire [63:0] snpc    ,

    output  reg  [63:0] dest    ,
    output  wire [0:0]  flag
);

import "DPI-C" function void ebreak();

reg  [63:0] src1   ; 
reg  [63:0] src2   ;
wire [63:0] sum    ;
wire [63:0] SLL_out;

always@(*) begin
    case(sel_ALU)
        3'b000: begin
            src1 = rs1_data;
            src2 = rs2_data;
        end
        3'b001: begin
            src1 = rs1_data;
            src2 = imm;
        end
        3'b010: begin
            src1 = rs1_data;
            src2 = pc;
        end
        3'b011: begin
            src1 = rs1_data;
            src2 = snpc;
        end
        3'b100: begin
            src1 = imm;
            src2 = pc;
        end
        3'b101: begin
            src1 = imm;
            src2 = snpc;
        end
        default: begin
            src1 = rs1_data;
            src2 = rs2_data;
        end
    endcase
end

always@(*) begin
    case(ctrl_ALU)
            3'b000: begin
                dest = 64'd0;
            end
            3'b001: begin
                dest = sum;
            end
            3'b010: begin
                dest = {sum[63:1], 1'b0};
            end
            3'b011: begin
                dest = SLL_out;
            end  
            3'b100: begin
                dest = {{32{sum[31:31]}}, sum[31:0]};
            end
            default: begin
                dest = 64'd0;
            end
    
    endcase
end

ysyx_22041461_ADDER ADDER(
    
    .src1    (src1),
    .src2    (src2),

    .sum     (sum),
    .flag    (flag)   
);

ysyx_22041461_SLL SLL(

    .src1   (src1),
    .src2   (src2),

    .SLL_out(SLL_out)
);

endmodule

