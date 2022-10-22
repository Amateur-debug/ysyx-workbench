`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_EXE(

input  wire   [0:0]  EXE_valid_in ,
input  wire   [63:0] EXE_rs1_data ,
input  wire   [63:0] EXE_rs2_data ,
input  wire   [63:0] EXE_csr_data ,
input  wire   [63:0] EXE_imm      ,
input  wire   [63:0] EXE_zimm     ,
input  wire   [63:0] EXE_pc       ,
input  wire   [4:0]  EXE_ctrl     ,
input  wire   [2:0]  EXE_src      ,
 
output reg    [63:0] EXE_out      ,
output wire   [0:0]  EXE_valid_out

);

import "DPI-C" function void ebreak();
import "DPI-C" function void invalid_inst();

reg [63:0]  src1;
reg [63:0]  src2;
reg [127:0] middle;

assign EXE_valid_out = EXE_valid_in;

always@(*) begin
    if(EXE_valid_in == 1'b0) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    if(EXE_ctrl == `EXE_NOP) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    else begin
        case(EXE_src)
            `EXE_src_NOP: begin
                src1 = 64'b0;
                src2 = 64'b0;
            end
            `EXE_R_R: begin
                src1 = EXE_rs1_data;
                src2 = EXE_rs2_data;
            end
            `EXE_R_I: begin
                src1 = EXE_rs1_data;
                src2 = EXE_imm;
            end
            `EXE_PC_I: begin
                src1 = EXE_pc;
                src2 = EXE_imm;
            end
            `EXE_R_CSR: begin
                src1 = EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `EXE_NOTR_CSR: begin
                src1 = ~EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `EXE_CSR_ZIMM: begin
                src1 = EXE_csr_data;
                src2 = EXE_zimm;
            end
            `EXE_CSR_NOTZIMM: begin
                src1 = EXE_csr_data;
                src2 = ~EXE_zimm;
            end
        endcase
    end
end

always@(*) begin
    if(EXE_valid_in == 1'b0) begin
        middle = 128'b0;
        EXE_out = 64'b0;
    end
    else begin
        case(EXE_ctrl)
            `EXE_NOP: begin
                middle = 128'b0;
                EXE_out = 64'b0;
            end
            `EXE_SLL: begin
                middle = 128'b0;
                EXE_out = src1 << src2[5:0];
            end
            `EXE_SRL: begin
                middle = 128'b0;
                EXE_out = src1 >> src2[5:0];
            end
            `EXE_SRA: begin
                middle = 128'b0;
                EXE_out = $signed(src1) >>> src2[5:0];
            end
            `EXE_ADD: begin
                middle = 128'b0;
                EXE_out = src1 + src2;
            end
            `EXE_SUB: begin
                middle = 128'b0;
                EXE_out = src1 - src2;
            end
            `EXE_XOR: begin
                middle = 128'b0;
                EXE_out = src1 ^ src2;
            end
            `EXE_OR: begin
                middle = 128'b0;
                EXE_out = src1 | src2;
            end
            `EXE_AND: begin
                middle = 128'b0;
                EXE_out = src1 & src2;
            end
            `EXE_SLT: begin
                middle = 128'b0;
                if($signed(src1) < $signed(src2)) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `EXE_SLTU: begin
                middle = 128'b0;
                if(src1 < src2) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `EXE_MUL: begin
                middle = 128'b0;
                EXE_out = $signed(src1) * $signed(src2);
            end
            `EXE_MULH: begin
                middle = $signed(src1) * $signed(src2);
                EXE_out = middle[127:64];
            end
            `EXE_MULHSU: begin
                middle = $signed(src1) * src2;
                EXE_out = middle[127:64];
            end
            `EXE_DIV: begin
                middle = 128'b0;
                EXE_out = $signed(src1) / $signed(src2);
            end
            `EXE_DIVU: begin
                middle = 128'b0;
                EXE_out = src1 / src2;
            end
            `EXE_REM: begin
                middle = 128'b0;
                EXE_out = $signed(src1) % $signed(src2);
            end
            `EXE_REMU: begin
                middle = 128'b0;
                EXE_out = src1 % src2;;
            end
            `EXE_SLLW: begin
                middle[63:0] = src1 << src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_SRLW: begin
                middle[31:0] = src1[31:0] >> src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_SRAW: begin
                middle[31:0] = $signed(src1[31:0]) >>> $signed(src2[4:0]);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_ADDW: begin
                middle[63:0] = src1 + src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_SUBW: begin
                middle[63:0] = src1 - src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_MULW: begin
                middle = $signed(src1) * $signed(src2);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_DIVW: begin
                middle[31:0] = $signed(src1[31:0]) / $signed(src2[31:0]);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_DIVUW: begin
                middle[31:0] = src1[31:0] / src2[31:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_REMW: begin
                middle[31:0] = $signed(src1[31:0]) % $signed(src2[31:0]);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `EXE_REMUW: begin
                middle[31:0] = src1[31:0] % src2[31:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            default: begin
                middle = 128'b0;
                EXE_out = 64'b0;
                invalid_inst();
            end
        endcase
    end
end


endmodule

