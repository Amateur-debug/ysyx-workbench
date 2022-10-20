//opcode
`define RV32_R 7'b0110011
`define RV64_R 7'b0111011
`define RV32_I 7'b0010011
`define RV64_I 7'b0011011
`define Stores 7'b0100011
`define Loads 7'b0000011
`define Branches 7'b1100011
`define Jal 7'b1101111
`define Jalr 7'b1100111
`define Lui 7'b0110111
`define Auipc 7'b0010111
`define Privileged 7'b1110011

//{funct7, funct3} RV32_R
`define SLL 10'b0000000_001
`define SRL 10'b0000000_101
`define SRA 10'b0100000_101
`define ADD 10'b0000000_000
`define SUB 10'b0100000_000
`define XOR 10'b0000000_100
`define OR 10'b0000000_110
`define AND 10'b0000000_111
`define SLT 10'b0000000_010
`define SLTU 10'b0000000_011
`define MUL 10'b0000001_000
`define MULH 10'b0000001_001
`define MULHSU 10'b0000001_010
`define MULHU 10'b0000001_011
`define DIV 10'b0000001_100
`define DIVU 10'b0000001_101
`define REM 10'b0000001_110
`define REMU 10'b0000001_111

//{funct7, funct3} RV64_R
`define SLLW 10'b0000000_001
`define SRLW 10'b0000000_101
`define SRAW 10'b0100000_101
`define ADDW 10'b0000000_000
`define SUBW 10'b0100000_000
`define MULW 10'b0000001_000
`define DIVW 10'b0000001_100
`define DIVUW 10'b0000001_101
`define REMW 10'b0000001_110
`define REMUW 10'b0000001_111

//funct3 RV32_I
`define FUN3_SLLI 3'b001
`define FUN3_SRI 3'b101
`define ADDI 3'b000
`define XORI 3'b100
`define ORI 3'b110
`define ANDI 3'b111
`define SLTI 3'b010
`define SLTIU 3'b011

//funct6 RV32_I
`define FUN6_SLLI 6'b000000
`define FUN6_SRLI 6'b000000
`define FUN6_SRAI 6'b010000

//funct3 RV64_I
`define FUN3_SLLIW 3'b001
`define FUN3_SRIW 3'b101
`define ADDIW 3'b000

//funct6 RV64_I
`define FUN6_SLLIW 6'b000000
`define FUN6_SRLIW 6'b000000
`define FUN6_SRAIW 6'b010000

//funct3 Stores
`define SB 3'b000
`define SH 3'b001
`define SW 3'b010
`define SD 3'b011

//funct3 Loads
`define LB 3'b000
`define LH 3'b001
`define LBU 3'b100
`define LHU 3'b101
`define LW 3'b010
`define LWU 3'b110
`define LD 3'b011

//funct3 Branches
`define BEQ 3'b000
`define BNE 3'b001
`define BLT 3'b100
`define BGE 3'b101
`define BLTU 3'b110
`define BGEU 3'b111

//funct3 Jalr
`define JALR 3'b000

//funct3 Zicsr
`define CSRRW 3'b001
`define CSRRS 3'b010
`define CSRRC 3'b011
`define CSRRWI 3'b101
`define CSRRSI 3'b110
`define CSRRCI 3'b111

`define ECALL 25'b00000_00000_00000_00000_00000
`define MRET 25'b0011000_00010_00000_000_00000
`define EBREAK 25'b0000000_00001_00000_000_00000

//CD_ctrl
`define CD_NOP 3'b000
`define CD_BRANCHES 3'b001
`define CD_JAL 3'b010
`define CD_JALR 3'b011
`define CD_ECALL 3'b100
`define CD_MRET 3'b101
`define CD_FENCE_I 3'b110
`define CD_EBREAK 3'b111

//EXE_ctrl
`define EXE_NOP 5'b00000
`define EXE_SLL 5'b00001
`define EXE_SRL 5'b00010
`define EXE_SRA 5'b00011
`define EXE_ADD 5'b00100
`define EXE_SUB 5'b00101
`define EXE_XOR 5'b00110
`define EXE_OR 5'b00111
`define EXE_AND 5'b01000
`define EXE_SLT 5'b01001
`define EXE_SLTU 5'b01010
`define EXE_MUL 5'b01011
`define EXE_MULH 5'b01100
`define EXE_MULHSU 5'b01101
`define EXE_MULHU 5'b01110
`define EXE_DIV 5'b01111
`define EXE_DIVU 5'b10000
`define EXE_REM 5'b10001
`define EXE_REMU 5'b10010
`define EXE_SLLW 5'b10011
`define EXE_SRLW 5'b10100
`define EXE_SRAW 5'b10101
`define EXE_ADDW 5'b10110
`define EXE_SUBW 5'b10111
`define EXE_MULW 5'b11000
`define EXE_DIVW 5'b11001
`define EXE_DIVUW 5'b11010
`define EXE_REMW  5'b11011
`define EXE_REMUW 5'b11100

//EXE_src
`define EXE_src_NOP 3'b000
`define EXE_R_R 3'b001
`define EXE_R_I 3'b010
`define EXE_PC_I 3'b011
`define EXE_R_CSR 3'b100
`define EXE_NOTR_CSR 3'b101
`define EXE_CSR_ZIMM 3'b110
`define EXE_CSR_NOTZIMM 3'b111

//MEM_ctrl
`define MEM_NOP 4'b0000
`define MEM_LB 4'b0001
`define MEM_LH 4'b0010
`define MEM_LBU 4'b0011
`define MEM_LHU 4'b0100
`define MEM_LW 4'b0101
`define MEM_LWU 4'b0110
`define MEM_LD 4'b0111
`define MEM_SB 4'b1000
`define MEM_SH 4'b1001
`define MEM_SW 4'b1010
`define MEM_SD 4'b1011
`define MEM_FENCE_I 4'b1100

//WB_ctrl
`define WB_NOP 4'b0000
`define WB_EXE 4'b0001
`define WB_MEM 4'b0010
`define WB_IMM 4'b0011
`define WB_SNPC 4'b0100
`define WB_CSRRW 4'b0101
`define WB_CSRRS 4'b0110
`define WB_CSRRC 4'b0110
`define WB_CSRRSI 4'b0110
`define WB_CSRRCI 4'b0110
`define WB_CSRRWI 4'b0111
`define WB_ECALL 4'b1000

//csr
`define MTVEC 12'h305
`define MEPC 12'h341
`define MCAUSE 12'h342
`define MSTATUS 12'h300