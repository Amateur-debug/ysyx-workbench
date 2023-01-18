`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_041461_macro.v"

module ysyx_041461_EXE(

    input  wire   [0:0]  EXE_valid_in ,
    input  wire   [3:0]  EXE_trap_in  ,
    input  wire   [63:0] EXE_rs1_data ,
    input  wire   [63:0] EXE_rs2_data ,
    input  wire   [63:0] EXE_csr_data ,
    input  wire   [63:0] EXE_imm      ,
    input  wire   [63:0] EXE_zimm     ,
    input  wire   [63:0] EXE_pc       ,
    input  wire   [4:0]  EXE_ctrl     ,
    input  wire   [2:0]  EXE_src      ,
    input  wire   [0:0]  EXE_conflict ,
    input  wire   [0:0]  EXE_MEM_ready,
    input  wire   [3:0]  EXE_MEM_trap ,
    input  wire   [3:0]  EXE_WB_trap  ,
    
    output reg    [63:0] EXE_out      ,
    output reg    [0:0]  EXE_valid_out,
    output reg    [0:0]  EXE_ready    
);


reg [63:0]  src1;
reg [63:0]  src2;
reg [127:0] middle;

always@(*) begin
    if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
        EXE_valid_out = 1'b1;
    end
    else if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b1) begin
        EXE_valid_out = 1'b0;
    end
    else if(EXE_valid_in == 1'b1 && EXE_trap_in != `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP) begin
        EXE_valid_out = 1'b1;
    end
    else begin
        EXE_valid_out = 1'b0;
    end
end

always@(*) begin
    if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
        if(EXE_MEM_ready == 1'b1) begin
            EXE_ready = 1'b1;
        end
        else begin
            EXE_ready = 1'b0;
        end
    end
    else if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b1)begin
        EXE_ready = 1'b0;
    end
    else if(EXE_valid_in == 1'b1 && EXE_trap_in != `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP) begin
        if(EXE_MEM_ready == 1'b1) begin
            EXE_ready = 1'b1;
        end
        else begin
            EXE_ready = 1'b0;
        end
    end
    else begin
        EXE_ready = 1'b1;
    end
end

always@(*) begin
    if(EXE_valid_in == 1'b0) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    else if(EXE_ctrl == `ysyx_041461_EXE_NOP) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    else begin
        case(EXE_src)
            `ysyx_041461_EXE_src_NOP: begin
                src1 = 64'b0;
                src2 = 64'b0;
            end
            `ysyx_041461_EXE_R_R: begin
                src1 = EXE_rs1_data;
                src2 = EXE_rs2_data;
            end
            `ysyx_041461_EXE_R_I: begin
                src1 = EXE_rs1_data;
                src2 = EXE_imm;
            end
            `ysyx_041461_EXE_PC_I: begin
                src1 = EXE_pc;
                src2 = EXE_imm;
            end
            `ysyx_041461_EXE_R_CSR: begin
                src1 = EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `ysyx_041461_EXE_NOTR_CSR: begin
                src1 = ~EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `ysyx_041461_EXE_CSR_ZIMM: begin
                src1 = EXE_csr_data;
                src2 = EXE_zimm;
            end
            `ysyx_041461_EXE_CSR_NOTZIMM: begin
                src1 = EXE_csr_data;
                src2 = ~EXE_zimm;
            end
        endcase
    end
end

always@(*) begin
    if(EXE_valid_in == 1'b0 || EXE_trap_in != `ysyx_041461_TRAP_NOP) begin
        middle = 128'b0;
        EXE_out = 64'b0;
    end
    else begin
        case(EXE_ctrl)
            `ysyx_041461_EXE_NOP: begin
                middle = 128'b0;
                EXE_out = 64'b0;
            end
            `ysyx_041461_EXE_SLL: begin
                middle = 128'b0;
                EXE_out = src1 << src2[5:0];
            end
            `ysyx_041461_EXE_SRL: begin
                middle = 128'b0;
                EXE_out = src1 >> src2[5:0];
            end
            `ysyx_041461_EXE_SRA: begin
                middle = 128'b0;
                EXE_out = $signed(src1) >>> src2[5:0];
            end
            `ysyx_041461_EXE_ADD: begin
                middle = 128'b0;
                EXE_out = src1 + src2;
            end
            `ysyx_041461_EXE_SUB: begin
                middle = 128'b0;
                EXE_out = src1 - src2;
            end
            `ysyx_041461_EXE_XOR: begin
                middle = 128'b0;
                EXE_out = src1 ^ src2;
            end
            `ysyx_041461_EXE_OR: begin
                middle = 128'b0;
                EXE_out = src1 | src2;
            end
            `ysyx_041461_EXE_AND: begin
                middle = 128'b0;
                EXE_out = src1 & src2;
            end
            `ysyx_041461_EXE_SLT: begin
                middle = 128'b0;
                if($signed(src1) < $signed(src2)) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `ysyx_041461_EXE_SLTU: begin
                middle = 128'b0;
                if(src1 < src2) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `ysyx_041461_EXE_MUL: begin
                middle = 128'b0;
                EXE_out = $signed(src1) * $signed(src2);
            end
            `ysyx_041461_EXE_MULH: begin
                middle = $signed(src1) * $signed(src2);
                EXE_out = middle[127:64];
            end
            `ysyx_041461_EXE_MULHSU: begin
                middle = $signed(src1) * src2;
                EXE_out = middle[127:64];
            end
            `ysyx_041461_EXE_DIV: begin
                middle = 128'b0;
                EXE_out = $signed(src1) / $signed(src2);
            end
            `ysyx_041461_EXE_DIVU: begin
                middle = 128'b0;
                EXE_out = src1 / src2;
            end
            `ysyx_041461_EXE_REM: begin
                middle = 128'b0;
                EXE_out = $signed(src1) % $signed(src2);
            end
            `ysyx_041461_EXE_REMU: begin
                middle = 128'b0;
                EXE_out = src1 % src2;;
            end
            `ysyx_041461_EXE_SLLW: begin
                middle[63:0] = src1 << src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SRLW: begin
                middle[31:0] = src1[31:0] >> src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SRAW: begin
                middle[31:0] = $signed(src1[31:0]) >>> src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_ADDW: begin
                middle[63:0] = src1 + src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SUBW: begin
                middle[63:0] = src1 - src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_MULW: begin
                middle = $signed(src1) * $signed(src2);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_DIVW: begin
                middle[31:0] = $signed(src1[31:0]) / $signed(src2[31:0]);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_DIVUW: begin
                middle[31:0] = src1[31:0] / src2[31:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_REMW: begin
                middle[31:0] = $signed(src1[31:0]) % $signed(src2[31:0]);
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_REMUW: begin
                middle[31:0] = src1[31:0] % src2[31:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            default: begin
                middle = 128'b0;
                EXE_out = 64'b0;
            end
        endcase
    end
end


endmodule
