module ysyx_041461_ID( 
    
    input   wire [31:0] ID_inst              ,
    input   wire [0:0]  ID_valid_in          ,
    input   wire [63:0] ID_pc                ,
    input   wire [63:0] ID_rs1_data          ,
    input   wire [63:0] ID_rs2_data          ,
    input   wire [2:0]  ID_exception_in      ,
    input   wire [0:0]  ID_interrupt_ret_inst,

    output  wire [4:0]  ID_rd                ,
    output  wire [4:0]  ID_rs1               ,
    output  wire [4:0]  ID_rs2               ,
    output  wire [11:0] ID_csr               ,
    output  reg  [63:0] ID_imm               ,
    output  wire [63:0] ID_zimm              ,
    output  reg  [63:0] ID_next_pc           ,
    output  reg  [0:0]  ID_valid_out         ,
    output  reg  [0:0]  ID_IFreg_ctrl        ,
    output  reg  [0:0]  ID_FENCE_I           ,
    output  reg  [2:0]  ID_CD_ctrl           ,
    output  reg  [4:0]  ID_EXE_ctrl          ,
    output  reg  [2:0]  ID_EXE_src           ,
    output  reg  [3:0]  ID_MEM_ctrl          ,   
    output  reg  [2:0]  ID_WB_ctrl           ,
    output  reg  [2:0]  ID_exception_out  
); 

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
        ID_IFreg_ctrl  = `ysyx_041461_ID_IFreg_ctrl_NOP;
        ID_CD_ctrl  = `ysyx_041461_CD_NOP;
        ID_EXE_ctrl = `ysyx_041461_EXE_NOP;
        ID_EXE_src  = `ysyx_041461_EXE_src_NOP;
        ID_MEM_ctrl = `ysyx_041461_MEM_NOP;
        ID_WB_ctrl  = `ysyx_041461_WB_NOP;
        ID_FENCE_I = 1'b0;
        ID_exception_out = ID_exception_in;
    end
    else begin
        ID_next_pc  = 64'b0;
        ID_valid_out = 1'b1;
        ID_IFreg_ctrl  = `ysyx_041461_ID_IFreg_ctrl_NOP;
        ID_CD_ctrl  = `ysyx_041461_CD_NOP;
        ID_EXE_ctrl = `ysyx_041461_EXE_NOP;
        ID_EXE_src  = `ysyx_041461_EXE_src_NOP;
        ID_MEM_ctrl = `ysyx_041461_MEM_NOP;
        ID_WB_ctrl  = `ysyx_041461_WB_NOP;
        ID_FENCE_I = 1'b0;
        ID_exception_out = ID_exception_in;
        if(ID_exception_in == `ysyx_041461_exception_NOP && ID_interrupt_ret_inst == 1'b0) begin
            case(opcode)
                `ysyx_041461_RV32_R: begin
                    ID_imm = ID_imm;
                    ID_EXE_src = `ysyx_041461_EXE_R_R;
                    ID_WB_ctrl = `ysyx_041461_WB_EXE;
                    case({funct7, funct3})
                        `ysyx_041461_SLL: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLL;
                        end
                        `ysyx_041461_SRL: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SRL;
                        end
                        `ysyx_041461_SRA: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SRA;
                        end
                        `ysyx_041461_ADD: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                        end
                        `ysyx_041461_SUB: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SUB;
                        end
                        `ysyx_041461_XOR: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_XOR;
                        end
                        `ysyx_041461_OR: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_OR;
                        end
                        `ysyx_041461_AND: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_AND;
                        end
                        `ysyx_041461_SLT: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLT;
                        end
                        `ysyx_041461_SLTU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLTU;
                        end
                        `ysyx_041461_MUL: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_MUL;
                        end
                        `ysyx_041461_MULH: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_MULH;
                        end
                        `ysyx_041461_MULHSU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_MULHSU;
                        end
                        `ysyx_041461_MULHU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_MULHU;
                        end
                        `ysyx_041461_DIV: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_DIV;
                        end
                        `ysyx_041461_DIVU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_DIVU;
                        end
                        `ysyx_041461_REM: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_REM;
                        end
                        `ysyx_041461_REMU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_REMU;
                        end
                        default: begin
                            ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_RV64_R: begin
                    ID_imm = ID_imm;
                    ID_EXE_src = `ysyx_041461_EXE_R_R;
                    ID_WB_ctrl = `ysyx_041461_WB_EXE;
                    case({funct7, funct3})
                        `ysyx_041461_SLLW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLLW;
                        end
                        `ysyx_041461_SRLW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SRLW;
                        end
                        `ysyx_041461_SRAW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SRAW;
                        end
                        `ysyx_041461_ADDW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_ADDW;
                        end
                        `ysyx_041461_SUBW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SUBW;
                        end
                        `ysyx_041461_MULW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_MULW;
                        end
                        `ysyx_041461_DIVW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_DIVW;
                        end
                        `ysyx_041461_DIVUW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_DIVUW;
                        end
                        `ysyx_041461_REMW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_REMW;
                        end
                        `ysyx_041461_REMUW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_REMUW;
                        end
                        default: begin
                            ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_RV32_I: begin
                    ID_imm = immI(ID_inst);
                    ID_EXE_src = `ysyx_041461_EXE_R_I;
                    ID_WB_ctrl = `ysyx_041461_WB_EXE;
                    case(funct3)
                        `ysyx_041461_FUN3_SLLI: begin
                            case(funct6)
                                `ysyx_041461_FUN6_SLLI: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SLL;
                                end
                                default: begin
                                    ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                                    end
                                end
                            endcase
                        end
                        `ysyx_041461_FUN3_SRI: begin
                            case(funct6)
                                `ysyx_041461_FUN6_SRLI: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SRL;
                                end
                                `ysyx_041461_FUN6_SRAI: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SRA;
                                end
                                default: begin
                                    ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                                    end
                                end
                            endcase
                        end
                        `ysyx_041461_ADDI: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                        end
                        `ysyx_041461_XORI: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_XOR;
                        end
                        `ysyx_041461_ORI: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_OR;
                        end
                        `ysyx_041461_ANDI: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_AND;
                        end
                        `ysyx_041461_SLTI: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLT;
                        end
                        `ysyx_041461_SLTIU: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_SLTU;
                        end
                    endcase
                end
                `ysyx_041461_RV64_I: begin
                    ID_imm = immI(ID_inst);
                    ID_EXE_src = `ysyx_041461_EXE_R_I;
                    ID_WB_ctrl = `ysyx_041461_WB_EXE;
                    case(funct3)
                        `ysyx_041461_FUN3_SLLIW: begin
                            case(funct6)
                                `ysyx_041461_FUN6_SLLIW: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SLLW;
                                    case(shamt[5:5])
                                        1'b0: begin
                                            ID_valid_out = 1'b1;
                                        end
                                        default: begin
                                            ID_valid_out = 1'b0;
                                        end
                                    endcase
                                end
                                default: begin
                                    ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                                    end
                                end
                            endcase
                        end
                        `ysyx_041461_FUN3_SRIW: begin
                            case(funct6)
                                `ysyx_041461_FUN6_SRLIW: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SRLW;
                                    case(shamt[5:5])
                                        1'b0: begin
                                            ID_valid_out = 1'b1;
                                        end
                                        default: begin
                                            ID_valid_out = 1'b0;
                                        end
                                    endcase
                                end
                                `ysyx_041461_FUN6_SRAIW: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_SRAW;
                                    case(shamt[5:5])
                                        1'b0: begin
                                            ID_valid_out = 1'b1;
                                        end
                                        default: begin
                                            ID_valid_out = 1'b0;
                                        end
                                    endcase
                                end
                                default: begin
                                    ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                                    end
                                end
                            endcase
                        end
                        `ysyx_041461_ADDIW: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_ADDW;
                        end
                        default: begin
                            ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_Stores: begin
                    ID_imm = immS(ID_inst);
                    ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                    ID_EXE_src = `ysyx_041461_EXE_R_I;
                    case(funct3)
                        `ysyx_041461_SB: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_SB;
                        end
                        `ysyx_041461_SH: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_SH;
                        end
                        `ysyx_041461_SW: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_SW;
                        end
                        `ysyx_041461_SD: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_SD;
                        end
                        default: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_NOP;
                            ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_Loads: begin
                    ID_imm = immI(ID_inst);
                    ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                    ID_EXE_src = `ysyx_041461_EXE_R_I;
                    ID_WB_ctrl = `ysyx_041461_WB_MEM;
                    case(funct3)
                        `ysyx_041461_LB: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LB;
                        end
                        `ysyx_041461_LH: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LH;
                        end
                        `ysyx_041461_LBU: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LBU;
                        end
                        `ysyx_041461_LHU: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LHU;
                        end
                        `ysyx_041461_LW: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LW;
                        end
                        `ysyx_041461_LWU: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LWU;
                        end
                        `ysyx_041461_LD: begin
                            ID_MEM_ctrl = `ysyx_041461_MEM_LD;
                        end
                        default: begin
                            ID_EXE_ctrl = `ysyx_041461_EXE_NOP;
                            ID_EXE_src = `ysyx_041461_EXE_src_NOP;
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_Branches: begin
                    ID_imm = immB(ID_inst);
                    ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_NOP;
                    ID_CD_ctrl = `ysyx_041461_CD_BRANCHES;
                    case(funct3)
                        `ysyx_041461_BEQ: begin
                            if(ID_rs1_data == ID_rs2_data) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        `ysyx_041461_BNE: begin
                            if(ID_rs1_data != ID_rs2_data) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        `ysyx_041461_BLT: begin
                            if($signed(ID_rs1_data) < $signed(ID_rs2_data)) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        `ysyx_041461_BGE: begin
                            if($signed(ID_rs1_data) >= $signed(ID_rs2_data)) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        `ysyx_041461_BLTU: begin
                            if(ID_rs1_data < ID_rs2_data) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        `ysyx_041461_BGEU: begin
                            if(ID_rs1_data >= ID_rs2_data) begin
                                ID_next_pc = ID_pc + ID_imm;
                                ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            end
                        end
                        default: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_Jal: begin
                    ID_imm = immJ(ID_inst);
                    ID_next_pc = ID_pc + ID_imm;
                    ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                    ID_CD_ctrl = `ysyx_041461_CD_JAL;
                    ID_WB_ctrl = `ysyx_041461_WB_SNPC;
                end
                `ysyx_041461_Jalr: begin
                    ID_imm = immI(ID_inst);
                    case(funct3)
                        `ysyx_041461_JALR: begin
                            ID_next_pc = (ID_rs1_data + ID_imm) & ~64'b1;
                            ID_IFreg_ctrl = `ysyx_041461_ID_IFreg_ctrl_IDpc;
                            ID_CD_ctrl = `ysyx_041461_CD_JALR;
                            ID_WB_ctrl = `ysyx_041461_WB_SNPC;
                        end
                        default: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                `ysyx_041461_Lui: begin
                    ID_imm = immU(ID_inst);
                    ID_WB_ctrl = `ysyx_041461_WB_IMM;
                end
                `ysyx_041461_Auipc: begin
                    ID_imm = immU(ID_inst);
                    ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                    ID_EXE_src = `ysyx_041461_EXE_PC_I;
                    ID_WB_ctrl = `ysyx_041461_WB_EXE;
                end
                `ysyx_041461_Privileged: begin
                    ID_imm = ID_imm;
                    case(ID_inst[31:7])
                        `ysyx_041461_ECALL: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ECALL;
                            end
                        end
                        `ysyx_041461_MRET: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_MRET;
                            end
                        end
                        `ysyx_041461_EBREAK: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_EBREAK;
                            end
                        end
                        default: begin
                            case(funct3)
                                `ysyx_041461_CSRRW: begin
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRW;
                                end
                                `ysyx_041461_CSRRS: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_OR;
                                    ID_EXE_src = `ysyx_041461_EXE_R_CSR;
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRS;
                                end
                                `ysyx_041461_CSRRC: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_ADD;
                                    ID_EXE_src = `ysyx_041461_EXE_NOTR_CSR;
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRC;
                                end
                                `ysyx_041461_CSRRWI: begin
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRWI;
                                end
                                `ysyx_041461_CSRRSI: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_OR;
                                    ID_EXE_src = `ysyx_041461_EXE_CSR_ZIMM;
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRSI;
                                end
                                `ysyx_041461_CSRRCI: begin
                                    ID_EXE_ctrl = `ysyx_041461_EXE_AND;
                                    ID_EXE_src = `ysyx_041461_EXE_CSR_NOTZIMM;
                                    ID_WB_ctrl = `ysyx_041461_WB_CSRRCI;
                                end
                                default: begin
                                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                                    end
                                end
                            endcase
                        end
                    endcase
                end
                `ysyx_041461_FENCE: begin
                    case(ID_inst[31:7])
                        `ysyx_041461_FENCE_I: begin
                            ID_FENCE_I = 1'b1;
                            ID_CD_ctrl = `ysyx_041461_CD_FENCE_I;
                        end
                        default: begin
                            if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                                ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                            end
                        end
                    endcase
                end
                default: begin
                    if(ID_exception_in == `ysyx_041461_exception_NOP) begin
                        ID_exception_out = `ysyx_041461_ID_ILLEGAL_INST;
                    end
                end
            endcase
        end
    end
end


endmodule