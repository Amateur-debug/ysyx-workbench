module ysyx_22041461_ALU(

    input   wire [4:0]  ctrl_ALU,
    input   wire [2:0]  sel_ALU ,
    input   wire [63:0] rs1_data,
    input   wire [63:0] rs2_data,
    input   wire [63:0] imm     ,
    input   wire [63:0] pc      ,
    input   wire [63:0] snpc    ,
    input   wire [63:0] csr_data,

    output  reg  [63:0] dest    ,
    output  wire [0:0]  flag
);

import "DPI-C" function void ebreak();

reg  [63:0] src1    ; 
reg  [63:0] src2    ;
wire [63:0] sum     ;
wire [63:0] SLL_out ;
wire [63:0] SRA_out ;
wire [63:0] sub     ;
wire [63:0] AND_out ;
wire [63:0] XOR_out ;
wire [63:0] OR_out  ;
wire [63:0] SRL_out ;
wire [63:0] MUL_out ;
wire [63:0] DIV_out ;
wire [63:0] REM_out ;

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
        3'b110: begin
            src1 = rs1_data;
            src2 = csr_data;
        end
        default: begin
            src1 = rs1_data;
            src2 = rs2_data;
        end
    endcase
end

always@(*) begin
    case(ctrl_ALU)
        5'b00000: begin
            dest = 64'd0;
        end
        5'b00001: begin
            dest = sum;
        end
        5'b00010: begin
            dest = {sum[63:1], 1'b0};
        end
        5'b00011: begin //slli,sll
            dest = SLL_out;
        end  
        5'b00100: begin
            dest = {{32{sum[31:31]}}, sum[31:0]};
        end
        5'b00101: begin
            dest = sub;
        end
        5'b00110: begin //srai, sra
            dest = SRA_out;
        end
        5'b00111: begin
            dest = AND_out;
        end
        5'b01000: begin //sllw
            dest = SLL_out;
        end
        5'b01001: begin
            dest = XOR_out;
        end
        5'b01010: begin
            dest = OR_out;
        end
        5'b01011: begin //srli, srl
            dest = SRL_out;
        end
        5'b01100: begin  //mulw
            dest = MUL_out;
        end
        5'b01101: begin  //mulhu
            dest = MUL_out;
        end
        5'b01110: begin  //mulhsu
            dest = MUL_out;
        end
        5'b01111: begin  //mulh
            dest = MUL_out;
        end
        5'b10000: begin  //mul
            dest = MUL_out;
        end
        5'b10001: begin  //divw
            dest = DIV_out;
        end
        5'b10010: begin  //divuw
            dest = DIV_out;
        end
        5'b10011: begin  //divu
            dest = DIV_out;
        end
        5'b10100: begin  //div
            dest = DIV_out;
        end
        5'b10101: begin  //remw
            dest = REM_out;
        end
        5'b10110: begin  //remuw
            dest = REM_out;
        end
        5'b10111: begin  //remu
            dest = REM_out;
        end
        5'b11000: begin  //rem
            dest = REM_out;
        end
        5'b11001: begin  //subw
            dest = {{32{sub[31:31]}}, sub[31:0]};
        end
        5'b11010: begin  //slliw
            dest = SLL_out;
        end
        5'b11011: begin  //sraiw
            dest = SRA_out;
        end
        5'b11100: begin  //sraw
            dest = SRA_out;
        end
        5'b11101: begin  //srliw
            dest = SRL_out;
        end
        5'b11110: begin  //srlw
            dest = SRL_out;
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

    .src1       (src1    ),
    .src2       (src2    ),
    .ctrl_ALU   (ctrl_ALU),

    .SLL_out    (SLL_out)
);

ysyx_22041461_SRA SRA(

    .src1       (src1    ),
    .src2       (src2    ),
    .ctrl_ALU   (ctrl_ALU),

    .SRA_out    (SRA_out)
);

ysyx_22041461_SRL SRL(

    .src1       (src1   ) ,
    .src2       (src2   ) ,
    .ctrl_ALU   (ctrl_ALU),

    .SRL_out    (SRL_out)
);

ysyx_22041461_SUB SUB(

    .src1   (src1),
    .src2   (src2),

    .sub    (sub )
);

ysyx_22041461_AND AND(

    .src1   (src1   ),
    .src2   (src2   ),

    .AND_out(AND_out)
);

ysyx_22041461_XOR XOR(

    .src1   (src1),
    .src2   (src2),

    .XOR_out(XOR_out)
);

ysyx_22041461_OR OR(

    .src1   (src1),
    .src2   (src2),

    .OR_out(OR_out)
);

ysyx_22041461_MUL MUL(

    .src1       (src1),
    .src2       (src2),
    .ctrl_ALU   (ctrl_ALU),

    .MUL_out    (MUL_out)
);

ysyx_22041461_DIV DIV(

    .src1       (src1),
    .src2       (src2),
    .ctrl_ALU   (ctrl_ALU),

    .DIV_out    (DIV_out)
);

ysyx_22041461_REM REM(

    .src1       (src1),
    .src2       (src2),
    .ctrl_ALU   (ctrl_ALU),

    .REM_out    (REM_out)
);

endmodule

