`include "ysyx_22041461_macro"

module ysyx_22041461_ID( 
    
    input   wire [31:0] inst         ,
    input   wire [0:0]  IF_valid_in  ,
    input   wire [0:0]  CD_valid_in  ,
    input   wire [63:0] pc           ,
    input   wire [63:0] rs1_data     ,
    input   wire [63:0] rs2_data     ,
    input   wire [63:0] csr_mtvec    ,
    input   wire [63:0] csr_mepc     ,
    
    output  reg  [0:0]  ID_ID_valid_out ,
    output  wire [4:0]  rd           ,
    output  wire [4:0]  rs1          ,
    output  wire [4:0]  rs2          ,
    output  wire [11:0] csr          ,
    output  reg  [63:0] imm          ,
    output  wire [5:0]  shamt        ,
    output  wire [63:0] zimm         ,
    output  wire [0:0]  ecall        ,
    output  wire [0:0]  mret         ,
    output  reg  [0:0]  IF_ctrl      ,
    output  reg  [4:0]  EXE_ctrl     ,
    output  reg  [4:0]  EXE_src      ,
    output  reg  [4:0]  MEM_ctrl     ,   
    output  reg  [1:0]  WB_ctrl      
); 

import "DPI-C" function void ebreak();
import "DPI-C" function void invalid_inst();

function [63:0] immI(
    input  [31:0] INST
);

immI = {{52{INST[31:31]}}, INST[31:20]};
endfunction

function [63:0] immS(
    input  [31:0] INST
);

immS = {{52{INST[31:31]}}, INST[31:25], INST[11:7]};
endfunction

function [63:0] immB(
    input  [31:0] INST
);

immB = {{51{INST[31:31]}}, INST[31:31], INST[7:7], INST[30:25], INST[11:8],1'b0};
endfunction

function [63:0] immU(
    input  [31:0] INST
);

immU = {{32{INST[31:31]}}, INST[31:12], 12'b0};
endfunction

function [63:0] immJ(
    input  [31:0] INST
);

immJ = {{43{INST[31:31]}}, INST[31:31], INST[19:12], INST[20:20], INST[30:21], 1'b0};
endfunction

wire  [6:0]  opcode;
wire  [2:0]  funct3;
wire  [5:0]  funct6;
wire  [6:0]  funct7;
reg   [63:0] next_pc;

assign rd     = inst[11:7] ;
assign rs1    = inst[19:15];
assign rs2    = inst[24:20];
assign csr    = inst[31:20];
assign shamt  = inst[25:20];
assign zimm   = {59'b0, inst[19:15]};
assign opcode = inst[6:0]  ;
assign funct3 = inst[14:12];
assign funct6 = inst[31:26];
assign funct7 = inst[31:25];


//指令译码
always@(*) begin  
    ID_ID_valid_out = 1'b1;
    next_pc   = 64'b0;
    ecall = 1'b0;
    mret = 1'b0;
    IF_ctrl  = 1'b0;
    EXE_ctrl  = EXE_NOP;
    EXE_src   = EXE_src_NOP;
    MEM_ctrl  = MEM_NOP;
    WB_ctrl  = WB_NOP;
    case(opcode)
        RV32_R: begin
            imm = imm;
            EXE_src = EXE_R_R;
            WB_ctrl = WB_EXE;
            case({funct7, funct3})
                SLL: begin
                    EXE_ctrl = EXE_SLL;
                end
                SRL: begin
                    EXE_ctrl = EXE_SRL;
                end
                SRA: begin
                    EXE_ctrl = EXE_SRA;
                end
                ADD: begin
                    EXE_ctrl = EXE_ADD;
                end
                SUB: begin
                    EXE_ctrl = EXE_SUB;
                end
                XOR: begin
                    EXE_ctrl = EXE_XOR;
                end
                OR: begin
                    EXE_ctrl = EXE_OR;
                end
                AND: begin
                    EXE_ctrl = EXE_AND;
                end
                SLT: begin
                    EXE_ctrl = EXE_SLT;
                end
                SLTU: begin
                    EXE_ctrl = EXE_SLTU;
                end
                MUL: begin
                    EXE_ctrl = EXE_MUL;
                end
                MULH: begin
                    EXE_ctrl = EXE_MULH;
                end
                MULHSU: begin
                    EXE_ctrl = EXE_MULHSU;
                end
                MULHU: begin
                    EXE_ctrl = EXE_MULHU;
                end
                DIV: begin
                    EXE_ctrl = EXE_DIV;
                end
                DIVU: begin
                    EXE_ctrl = EXE_DIVU;
                end
                REM: begin
                    EXE_ctrl = EXE_REM;
                end
                REMU: begin
                    EXE_ctrl = EXE_REMU;
                end
                default: begin
                    ID_valid_out = 1'b0;
                end
            endcase
        end
        RV64_R: begin
            imm = imm;
            EXE_src = EXE_R_R;
            WB_ctrl = WB_EXE;
            case({funct7, funct3})
                SLLW: begin
                    EXE_ctrl = EXE_SLLW;
                end
                SRLW: begin
                    EXE_ctrl = EXE_SRLW;
                end
                SRAW: begin
                    EXE_ctrl = EXE_SRAW;
                end
                ADDW: begin
                    EXE_ctrl = EXE_ADDW;
                end
                SUBW: begin
                    EXE_ctrl = EXE_SUBW;
                end
                MULW: begin
                    EXE_ctrl = EXE_MULW;
                end
                DIVW: begin
                    EXE_ctrl = EXE_DIVW;
                end
                DIVUW: begin
                    EXE_ctrl = EXE_DIVUW;
                end
                REMW: begin
                    EXE_ctrl = EXE_REMW;
                end
                REMUW: begin
                    EXE_ctrl = EXE_REMUW;
                end
                default: begin
                    ID_valid_out = 1'b0;
                end
            endcase
        end
        RV32_I: begin
            imm = immI(inst);
            EXE_src = EXE_R_I;
            WB_ctrl = WB_EXE;
            case(funct3)
                FUN3_SLLI:begin
                    case(funct6)
                        FUN6_SLLI: begin
                            EXE_ctrl = EXE_SLL;
                        end
                        default: begin
                            ID_valid_out = 1'b0;
                        end
                    endcase
                FUN3_SRI:begin
                    case(funct6)
                        FUN6_SRLI: begin
                            EXE_ctrl = EXE_SRL;
                        end
                        FUN6_SRAI: begin
                            EXE_ctrl = EXE_SRA;
                        end
                        default: begin
                            ID_valid_out = 1'b0;
                        end
                    endcase
                ADDI: begin
                    EXE_ctrl = EXE_ADD;
                end
                XORI: begin
                    EXE_ctrl = EXE_XOR;
                end
                ORI: begin
                    EXE_ctrl = EXE_ORI;
                end
                ANDI: begin
                    EXE_ctrl = EXE_AND;
                end
                ANDI: begin
                    EXE_ctrl = EXE_AND;
                end
                default: begin
                    ID_valid_out = 1'b0;
                end
            endcase
        end
        RV64_I: begin
            imm = immI(inst);
            EXE_src = EXE_R_I;
            WB_ctrl = WB_EXE;
            case(funct3)
                FUN3_SLLIW: begin
                    case(funct6)
                        FUN6_SLLIW: begin
                            EXE_ctrl = EXE_SLL;
                            case(shamt[5:5])
                                1'b0: begin
                                    ID_valid_out = 1'b0;
                                default: begin
                                    ID_valid_out = 1'b1;
                                end
                            endcase
                        end
                        default: begin
                            ID_valid_out = 1'b0;
                        end
                    endcase
                FUN3_SRIW: begin
                    case(funct6)
                        FUN6_SRLIW: begin
                            EXE_ctrl = EXE_SRL;
                            case(shamt[5:5])
                                1'b0: begin
                                    ID_valid_out = 1'b0;
                                default: begin
                                    ID_valid_out = 1'b1;
                                end
                            endcase
                        end
                        FUN6_SRAIW: begin
                            EXE_ctrl = EXE_SRA;
                            case(shamt[5:5])
                                1'b0: begin
                                    ID_valid_out = 1'b0;
                                default: begin
                                    ID_valid_out = 1'b1;
                                end
                            endcase
                        end
                        default: begin
                            ID_valid_out = 1'b0;
                        end
                    endcase
                ADDIW: begin
                    EXE_ctrl = EXE_ADD;
                end
                default: begin
                    ID_valid_out = 1'b0;
                end
            endcase
        end
        Stores: begin
            imm = immS(inst);
            EXE_ctrl = EXE_ADD;
            EXE_src = EXE_R_I;
            case(funct3)
                SB: begin
                    MEM_ctrl = MEM_SB;
                end
                SH: begin
                    MEM_ctrl = MEM_SH;
                end
                SW: begin
                    MEM_ctrl = MEM_SW;
                end
                SD: begin
                    MEM_ctrl = MEM_SD;
                end
                default: begin
                    ID_valid_out 1'b0;
                end
            endcase
        end
        Loads: begin
            imm = immI(inst);
            EXE_ctrl = EXE_ADD;
            EXE_src = EXE_R_I;
            WB_ctrl = WB_MEM;
            case(funct3)
                LB: begin
                    MEM_ctrl = MEM_LB;
                end
                LH: begin
                    MEM_ctrl = MEM_LH;
                end
                LBU: begin
                    MEM_ctrl = MEM_LBU;
                end
                LHU: begin
                    MEM_ctrl = MEM_LHU;
                end
                LW: begin
                    MEM_ctrl = MEM_LW;
                end
                LWU: begin
                    MEM_ctrl = MEM_LWU;
                end
                LD: begin
                    MEM_ctrl = MEM_LD;
                end
                default: begin
                    ID_valid_out 1'b0;
                end
            endcase
        end
        Branches: begin
            imm = immB(inst);
            ID_valid_out = 1'b0;
            IF_ctrl = 1'b1;
            case(funct3)
                BEQ: begin
                    if(rs1_data == rs2_data) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                BNE: begin
                    if(rs1_data != rs2_data) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                BLT: begin
                    if($signed(rs1_data) < $signed(rs2_data)) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                BGE: begin
                    if($signed(rs1_data) >= $signed(rs2_data)) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                BLTU: begin
                    if(rs1_data < rs2_data) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                BGEU: begin
                    if(rs1_data >= rs2_data) begin
                        next_pc = pc + imm;
                    end
                    else begin
                        next_pc = 64'b0;
                    end
                end
                default: begin
                    IF_ctrl = 1'b0;
                end
            endcase
        end
        Jal: begin
            imm = immJ(inst);
            ID_valid_out = 1'b0;
            next_pc = pc + imm;
            IF_ctrl = 1'b1;
            WB_ctrl = WB_SNPC;
        end
        Jalr: begin
            imm = immI(inst);
            case(funct3)
                JALR: begin
                    next_pc = rs1_data + imm;
                    IF_ctrl = 1'b1;
                    WB_ctrl = WB_SNPC;
                end
                default: begin
                    ID_valid_out = 1'b0;
                end
            endcase
        end
        Lui: begin
            imm = immU(inst);
            WB_ctrl = WB_IMM;
        end
        Auipc: begin
            imm = immU(inst);
            EXE_ctrl = EXE_ADD;
            EXE_src = EXE_PC_I;
            WB_ctrl = WB_EXE;
        end
        Privileged: begin
            imm = imm;
            case(inst[31:7])
                Ecall: begin
                    ecall = 1'b1;
                    next_pc = csr_mtvec;
                    IF_ctrl = 1'b1;
                    WB_ctrl = WB_ECALL;
                end
                Mret: begin
                    mret = 1'b1;
                    next_pc = csr_mepc;
                    IF_ctrl = 1'b1;
                end
                default: begin
                    case(funct3)
                        CSRRW: begin
                            rs1_read = 1'b1;
                            WB_ctrl = WB_CSRRW;
                        end
                        CSRRS: begin
                            rs1_read = 1'b1;
                            EXE_ctrl = EXE_OR;
                            EXE_src = EXE_CSRRS;
                            WB_ctrl = WB_CSRRS;
                        end
                        CSRRC: begin
                            rs1_read = 1'b1;
                            EXE_ctrl = EXE_ADD;
                            EXE_src = EXE_~R_CSR;
                            WB_ctrl = WB_CSRRC;
                        end
                        CSRRWI: begin
                            imm = zimm;
                            WB_ctrl = WB_CSRRWI;
                        end
                        CSRRSI: begin
                            imm = zimm;
                            EXE_ctrl = EXE_OR;
                            EXE_src = EXE_CSR_ZIMM;
                            WB_ctrl = WB_CSRRSI;
                        end
                        CSRRCI: begin
                            imm = zimm;
                            EXE_ctrl = EXE_AND;
                            EXE_src = EXE_CSR_~ZIMM;
                            WB_ctrl = WB_CSRRCI;
                        end
                        default: begin
                            ID_ID_valid_out = 1'b0;
                        end
                    endcase
                end
            endcase
        end
        default: begin
            invalid_inst();
        end
    endcase
    if(IF_valid_in == 1'b0 || CD_valid_in == 1'b0) begin
        ID_valid_out = 1'b0;
    end
end


endmodule
