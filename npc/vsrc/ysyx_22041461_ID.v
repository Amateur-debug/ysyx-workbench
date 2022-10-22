`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_ID( 
    
    input   wire [31:0] ID_inst     ,
    input   wire [0:0]  ID_valid_in ,
    input   wire [63:0] ID_pc       ,
    input   wire [63:0] ID_rs1_data ,
    input   wire [63:0] ID_rs2_data ,
    input   wire [63:0] ID_csr_mtvec,
    input   wire [63:0] ID_csr_mepc ,

    output  wire [4:0]  ID_rd       ,
    output  wire [4:0]  ID_rs1      ,
    output  wire [4:0]  ID_rs2      ,
    output  wire [11:0] ID_csr      ,
    output  reg  [63:0] ID_imm      ,
    output  wire [63:0] ID_zimm     ,
    output  wire [63:0] ID_next_pc  ,
    output  wire [0:0]  ID_valid_out,
    output  reg  [0:0]  ID_PC_ctrl  ,
    output  reg  [2:0]  ID_CD_ctrl  ,
    output  reg  [4:0]  ID_EXE_ctrl ,
    output  reg  [2:0]  ID_EXE_src  ,
    output  reg  [3:0]  ID_MEM_ctrl ,   
    output  reg  [3:0]  ID_WB_ctrl      
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
wire  [5:0]  shamt;

assign ID_rd   = ID_inst[11:7] ;
assign ID_rs1  = ID_inst[19:15];
assign ID_rs2  = ID_inst[24:20];
assign ID_csr  = ID_inst[31:20];
assign shamt   = ID_inst[25:20];
assign ID_zimm = {59'b0, ID_inst[19:15]};
assign opcode = ID_inst[6:0]  ;
assign funct3 = ID_inst[14:12];
assign funct6 = ID_inst[31:26];
assign funct7 = ID_inst[31:25];


//指令译码
always@(*) begin  
    if(ID_valid_in == 1'b0) begin
        ID_next_pc  = 64'b0;
        ID_valid_out = 1'b0;
        ID_PC_ctrl  = 1'b0;
        ID_CD_ctrl  = `CD_NOP;
        ID_EXE_ctrl = `EXE_NOP;
        ID_EXE_src  = `EXE_src_NOP;
        ID_MEM_ctrl = `MEM_NOP;
        ID_WB_ctrl  = `WB_NOP;
    end
    else begin
        ID_next_pc  = 64'b0;
        ID_valid_out = 1'b1;
        ID_PC_ctrl  = 1'b0;
        ID_CD_ctrl  = `CD_NOP;
        ID_EXE_ctrl = `EXE_NOP;
        ID_EXE_src  = `EXE_src_NOP;
        ID_MEM_ctrl = `MEM_NOP;
        ID_WB_ctrl  = `WB_NOP;
        case(opcode)
            `RV32_R: begin
                ID_imm = ID_imm;
                ID_EXE_src = `EXE_R_R;
                ID_WB_ctrl = `WB_EXE;
                case({funct7, funct3})
                    `SLL: begin
                        ID_EXE_ctrl = `EXE_SLL;
                    end
                    `SRL: begin
                        ID_EXE_ctrl = `EXE_SRL;
                    end
                    `SRA: begin
                        ID_EXE_ctrl = `EXE_SRA;
                    end
                    `ADD: begin
                        ID_EXE_ctrl = `EXE_ADD;
                    end
                    `SUB: begin
                        ID_EXE_ctrl = `EXE_SUB;
                    end
                    `XOR: begin
                        ID_EXE_ctrl = `EXE_XOR;
                    end
                    `OR: begin
                        ID_EXE_ctrl = `EXE_OR;
                    end
                    `AND: begin
                        ID_EXE_ctrl = `EXE_AND;
                    end
                    `SLT: begin
                        ID_EXE_ctrl = `EXE_SLT;
                    end
                    `SLTU: begin
                        ID_EXE_ctrl = `EXE_SLTU;
                    end
                    `MUL: begin
                        ID_EXE_ctrl = `EXE_MUL;
                    end
                    `MULH: begin
                        ID_EXE_ctrl = `EXE_MULH;
                    end
                    `MULHSU: begin
                        ID_EXE_ctrl = `EXE_MULHSU;
                    end
                    `MULHU: begin
                        ID_EXE_ctrl = `EXE_MULHU;
                    end
                    `DIV: begin
                        ID_EXE_ctrl = `EXE_DIV;
                    end
                    `DIVU: begin
                        ID_EXE_ctrl = `EXE_DIVU;
                    end
                    `REM: begin
                        ID_EXE_ctrl = `EXE_REM;
                    end
                    `REMU: begin
                        ID_EXE_ctrl = `EXE_REMU;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `RV64_R: begin
                ID_imm = ID_imm;
                ID_EXE_src = `EXE_R_R;
                ID_WB_ctrl = `WB_EXE;
                case({funct7, funct3})
                    `SLLW: begin
                        ID_EXE_ctrl = `EXE_SLLW;
                    end
                    `SRLW: begin
                        ID_EXE_ctrl = `EXE_SRLW;
                    end
                    `SRAW: begin
                        ID_EXE_ctrl = `EXE_SRAW;
                    end
                    `ADDW: begin
                        ID_EXE_ctrl = `EXE_ADDW;
                    end
                    `SUBW: begin
                        ID_EXE_ctrl = `EXE_SUBW;
                    end
                    `MULW: begin
                        ID_EXE_ctrl = `EXE_MULW;
                    end
                    `DIVW: begin
                        ID_EXE_ctrl = `EXE_DIVW;
                    end
                    `DIVUW: begin
                        ID_EXE_ctrl = `EXE_DIVUW;
                    end
                    `REMW: begin
                        ID_EXE_ctrl = `EXE_REMW;
                    end
                    `REMUW: begin
                        ID_EXE_ctrl = `EXE_REMUW;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `RV32_I: begin
                ID_imm = immI(ID_inst);
                ID_EXE_src = `EXE_R_I;
                ID_WB_ctrl = `WB_EXE;
                case(funct3)
                    `FUN3_SLLI: begin
                        case(funct6)
                            `FUN6_SLLI: begin
                                ID_EXE_ctrl = `EXE_SLL;
                            end
                            default: begin
                                ID_valid_out = 1'b0;
                                invalid_inst();
                            end
                        endcase
                    end
                    `FUN3_SRI: begin
                        case(funct6)
                            `FUN6_SRLI: begin
                                ID_EXE_ctrl = `EXE_SRL;
                            end
                            `FUN6_SRAI: begin
                                ID_EXE_ctrl = `EXE_SRA;
                            end
                            default: begin
                                invalid_inst();
                            end
                        endcase
                    end
                    `ADDI: begin
                        ID_EXE_ctrl = `EXE_ADD;
                    end
                    `XORI: begin
                        ID_EXE_ctrl = `EXE_XOR;
                    end
                    `ORI: begin
                        ID_EXE_ctrl = `EXE_OR;
                    end
                    `ANDI: begin
                        ID_EXE_ctrl = `EXE_AND;
                    end
                    `SLTI: begin
                        ID_EXE_ctrl = `EXE_SLT;
                    end
                    `SLTIU: begin
                        ID_EXE_ctrl = `EXE_SLTU;
                    end
                endcase
            end
            `RV64_I: begin
                ID_imm = immI(ID_inst);
                ID_EXE_src = `EXE_R_I;
                ID_WB_ctrl = `WB_EXE;
                case(funct3)
                    `FUN3_SLLIW: begin
                        case(funct6)
                            `FUN6_SLLIW: begin
                                ID_EXE_ctrl = `EXE_SLLW;
                                case(shamt[5:5])
                                    1'b0: begin
                                        ID_valid_out = 1'b0;
                                    end
                                    default: begin
                                        ID_valid_out = 1'b1;
                                    end
                                endcase
                            end
                            default: begin
                                ID_valid_out = 1'b0;
                                invalid_inst();
                            end
                        endcase
                    end
                    `FUN3_SRIW: begin
                        case(funct6)
                            `FUN6_SRLIW: begin
                                ID_EXE_ctrl = `EXE_SRLW;
                                case(shamt[5:5])
                                    1'b0: begin
                                        ID_valid_out = 1'b0;
                                    end
                                    default: begin
                                        ID_valid_out = 1'b1;
                                    end
                                endcase
                            end
                            `FUN6_SRAIW: begin
                                ID_EXE_ctrl = `EXE_SRAW;
                                case(shamt[5:5])
                                    1'b0: begin
                                        ID_valid_out = 1'b0;
                                    end
                                    default: begin
                                        ID_valid_out = 1'b1;
                                    end
                                endcase
                            end
                            default: begin
                                ID_valid_out = 1'b0;
                                invalid_inst();
                            end
                        endcase
                    end
                    `ADDIW: begin
                        ID_EXE_ctrl = `EXE_ADDW;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `Stores: begin
                ID_imm = immS(ID_inst);
                ID_EXE_ctrl = `EXE_ADD;
                ID_EXE_src = `EXE_R_I;
                case(funct3)
                    `SB: begin
                        ID_MEM_ctrl = `MEM_SB;
                    end
                    `SH: begin
                        ID_MEM_ctrl = `MEM_SH;
                    end
                    `SW: begin
                        ID_MEM_ctrl = `MEM_SW;
                    end
                    `SD: begin
                        ID_MEM_ctrl = `MEM_SD;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `Loads: begin
                ID_imm = immI(ID_inst);
                ID_EXE_ctrl = `EXE_ADD;
                ID_EXE_src = `EXE_R_I;
                ID_WB_ctrl = `WB_MEM;
                case(funct3)
                    `LB: begin
                        ID_MEM_ctrl = `MEM_LB;
                    end
                    `LH: begin
                        ID_MEM_ctrl = `MEM_LH;
                    end
                    `LBU: begin
                        ID_MEM_ctrl = `MEM_LBU;
                    end
                    `LHU: begin
                        ID_MEM_ctrl = `MEM_LHU;
                    end
                    `LW: begin
                        ID_MEM_ctrl = `MEM_LW;
                    end
                    `LWU: begin
                        ID_MEM_ctrl = `MEM_LWU;
                    end
                    `LD: begin
                        ID_MEM_ctrl = `MEM_LD;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `Branches: begin
                ID_imm = immB(ID_inst);
                ID_PC_ctrl = 1'b1;
                ID_CD_ctrl = `CD_BRANCHES;
                case(funct3)
                    `BEQ: begin
                        if(ID_rs1_data == ID_rs2_data) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    `BNE: begin
                        if(ID_rs1_data != ID_rs2_data) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    `BLT: begin
                        if($signed(ID_rs1_data) < $signed(ID_rs2_data)) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    `BGE: begin
                        if($signed(ID_rs1_data) >= $signed(ID_rs2_data)) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    `BLTU: begin
                        if(ID_rs1_data < ID_rs2_data) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    `BGEU: begin
                        if(ID_rs1_data >= ID_rs2_data) begin
                            ID_next_pc = ID_pc + ID_imm;
                        end
                        else begin
                            ID_PC_ctrl = 1'b0;
                        end
                    end
                    default: begin
                        ID_CD_ctrl = `CD_NOP;
                        ID_PC_ctrl = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `Jal: begin
                ID_imm = immJ(ID_inst);
                ID_next_pc = ID_pc + ID_imm;
                ID_PC_ctrl = 1'b1;
                ID_CD_ctrl = `CD_JAL;
                ID_WB_ctrl = `WB_SNPC;
            end
            `Jalr: begin
                ID_imm = immI(ID_inst);
                case(funct3)
                    `JALR: begin
                        ID_next_pc = ID_rs1_data + ID_imm;
                        ID_PC_ctrl = 1'b1;
                        ID_CD_ctrl = `CD_JALR;
                        ID_WB_ctrl = `WB_SNPC;
                    end
                    default: begin
                        ID_valid_out = 1'b0;
                        invalid_inst();
                    end
                endcase
            end
            `Lui: begin
                ID_imm = immU(ID_inst);
                ID_WB_ctrl = `WB_IMM;
            end
            `Auipc: begin
                ID_imm = immU(ID_inst);
                ID_EXE_ctrl = `EXE_ADD;
                ID_EXE_src = `EXE_PC_I;
                ID_WB_ctrl = `WB_EXE;
            end
            `Privileged: begin
                ID_imm = ID_imm;
                case(ID_inst[31:7])
                    `ECALL: begin
                        ID_next_pc = ID_csr_mtvec;
                        ID_PC_ctrl = 1'b1;
                        ID_CD_ctrl = `CD_ECALL;
                        ID_WB_ctrl = `WB_ECALL;
                    end
                    `MRET: begin
                        ID_next_pc = ID_csr_mepc;
                        ID_PC_ctrl = 1'b1;
                        ID_CD_ctrl = `CD_MRET;
                    end
                    `EBREAK: begin
                        ID_CD_ctrl = `CD_EBREAK;
                    end
                    default: begin
                        case(funct3)
                            `CSRRW: begin
                                ID_WB_ctrl = `WB_CSRRW;
                            end
                            `CSRRS: begin
                                ID_EXE_ctrl = `EXE_OR;
                                ID_EXE_src = `EXE_R_CSR;
                                ID_WB_ctrl = `WB_CSRRS;
                            end
                            `CSRRC: begin
                                ID_EXE_ctrl = `EXE_ADD;
                                ID_EXE_src = `EXE_NOTR_CSR;
                                ID_WB_ctrl = `WB_CSRRC;
                            end
                            `CSRRWI: begin
                                ID_WB_ctrl = `WB_CSRRWI;
                            end
                            `CSRRSI: begin
                                ID_EXE_ctrl = `EXE_OR;
                                ID_EXE_src = `EXE_CSR_ZIMM;
                                ID_WB_ctrl = `WB_CSRRSI;
                            end
                            `CSRRCI: begin
                                ID_EXE_ctrl = `EXE_AND;
                                ID_EXE_src = `EXE_CSR_NOTZIMM;
                                ID_WB_ctrl = `WB_CSRRCI;
                            end
                            default: begin
                                ID_valid_out = 1'b0;
                                invalid_inst();
                            end
                        endcase
                    end
                endcase
            end
            default: begin
                ID_valid_out = 1'b0;
                invalid_inst();
            end
        endcase
    end
end


endmodule
