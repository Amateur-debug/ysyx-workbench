//opcode
`define ysyx_041461_RV32_R 7'b0110011
`define ysyx_041461_RV64_R 7'b0111011
`define ysyx_041461_RV32_I 7'b0010011
`define ysyx_041461_RV64_I 7'b0011011
`define ysyx_041461_Stores 7'b0100011
`define ysyx_041461_Loads 7'b0000011
`define ysyx_041461_Branches 7'b1100011
`define ysyx_041461_Jal 7'b1101111
`define ysyx_041461_Jalr 7'b1100111
`define ysyx_041461_Lui 7'b0110111
`define ysyx_041461_Auipc 7'b0010111
`define ysyx_041461_Privileged 7'b1110011
`define ysyx_041461_FENCE 7'b0001111

//{funct7, funct3} RV32_R
`define ysyx_041461_SLL 10'b0000000_001
`define ysyx_041461_SRL 10'b0000000_101
`define ysyx_041461_SRA 10'b0100000_101
`define ysyx_041461_ADD 10'b0000000_000
`define ysyx_041461_SUB 10'b0100000_000
`define ysyx_041461_XOR 10'b0000000_100
`define ysyx_041461_OR 10'b0000000_110
`define ysyx_041461_AND 10'b0000000_111
`define ysyx_041461_SLT 10'b0000000_010
`define ysyx_041461_SLTU 10'b0000000_011
`define ysyx_041461_MUL 10'b0000001_000
`define ysyx_041461_MULH 10'b0000001_001
`define ysyx_041461_MULHSU 10'b0000001_010
`define ysyx_041461_MULHU 10'b0000001_011
`define ysyx_041461_DIV 10'b0000001_100
`define ysyx_041461_DIVU 10'b0000001_101
`define ysyx_041461_REM 10'b0000001_110
`define ysyx_041461_REMU 10'b0000001_111

//{funct7, funct3} RV64_R
`define ysyx_041461_SLLW 10'b0000000_001
`define ysyx_041461_SRLW 10'b0000000_101
`define ysyx_041461_SRAW 10'b0100000_101
`define ysyx_041461_ADDW 10'b0000000_000
`define ysyx_041461_SUBW 10'b0100000_000
`define ysyx_041461_MULW 10'b0000001_000
`define ysyx_041461_DIVW 10'b0000001_100
`define ysyx_041461_DIVUW 10'b0000001_101
`define ysyx_041461_REMW 10'b0000001_110
`define ysyx_041461_REMUW 10'b0000001_111

//funct3 RV32_I
`define ysyx_041461_FUN3_SLLI 3'b001
`define ysyx_041461_FUN3_SRI 3'b101
`define ysyx_041461_ADDI 3'b000
`define ysyx_041461_XORI 3'b100
`define ysyx_041461_ORI 3'b110
`define ysyx_041461_ANDI 3'b111
`define ysyx_041461_SLTI 3'b010
`define ysyx_041461_SLTIU 3'b011

//funct6 RV32_I
`define ysyx_041461_FUN6_SLLI 6'b000000
`define ysyx_041461_FUN6_SRLI 6'b000000
`define ysyx_041461_FUN6_SRAI 6'b010000

//funct3ysyx_041461_ RV64_I
`define ysyx_041461_FUN3_SLLIW 3'b001
`define ysyx_041461_FUN3_SRIW 3'b101
`define ysyx_041461_ADDIW 3'b000

//funct6 RV64_I
`define ysyx_041461_FUN6_SLLIW 6'b000000
`define ysyx_041461_FUN6_SRLIW 6'b000000
`define ysyx_041461_FUN6_SRAIW 6'b010000

//funct3 Stores
`define ysyx_041461_SB 3'b000
`define ysyx_041461_SH 3'b001
`define ysyx_041461_SW 3'b010
`define ysyx_041461_SD 3'b011

//funct3 Loads
`define ysyx_041461_LB 3'b000
`define ysyx_041461_LH 3'b001
`define ysyx_041461_LBU 3'b100
`define ysyx_041461_LHU 3'b101
`define ysyx_041461_LW 3'b010
`define ysyx_041461_LWU 3'b110
`define ysyx_041461_LD 3'b011

//funct3 Branches
`define ysyx_041461_BEQ 3'b000
`define ysyx_041461_BNE 3'b001
`define ysyx_041461_BLT 3'b100
`define ysyx_041461_BGE 3'b101
`define ysyx_041461_BLTU 3'b110
`define ysyx_041461_BGEU 3'b111

//funct3 Jalr
`define ysyx_041461_JALR 3'b000

//funct3 Zicsr
`define ysyx_041461_CSRRW 3'b001
`define ysyx_041461_CSRRS 3'b010
`define ysyx_041461_CSRRC 3'b011
`define ysyx_041461_CSRRWI 3'b101
`define ysyx_041461_CSRRSI 3'b110
`define ysyx_041461_CSRRCI 3'b111

`define ysyx_041461_ECALL 25'b00000_00000_00000_00000_00000
`define ysyx_041461_MRET 25'b0011000_00010_00000_000_00000
`define ysyx_041461_EBREAK 25'b0000000_00001_00000_000_00000
`define ysyx_041461_FENCE_I 25'b0000000_00000_00000_001_00000

//ID_TYPE
`define ysyx_041461_TYPE_NOP 3'b000
`define ysyx_041461_TYPE_BRANCHES 3'b001
`define ysyx_041461_TYPE_JAL 3'b010
`define ysyx_041461_TYPE_JALR 3'b011
`define ysyx_041461_TYPE_FENCE_I 3'b100


//EXE_ctrl
`define ysyx_041461_EXE_NOP 5'b00000
`define ysyx_041461_EXE_SLL 5'b00001
`define ysyx_041461_EXE_SRL 5'b00010
`define ysyx_041461_EXE_SRA 5'b00011
`define ysyx_041461_EXE_ADD 5'b00100
`define ysyx_041461_EXE_SUB 5'b00101
`define ysyx_041461_EXE_XOR 5'b00110
`define ysyx_041461_EXE_OR 5'b00111
`define ysyx_041461_EXE_AND 5'b01000
`define ysyx_041461_EXE_SLT 5'b01001
`define ysyx_041461_EXE_SLTU 5'b01010
`define ysyx_041461_EXE_MUL 5'b01011
`define ysyx_041461_EXE_MULH 5'b01100
`define ysyx_041461_EXE_MULHSU 5'b01101
`define ysyx_041461_EXE_MULHU 5'b01110
`define ysyx_041461_EXE_DIV 5'b01111
`define ysyx_041461_EXE_DIVU 5'b10000
`define ysyx_041461_EXE_REM 5'b10001
`define ysyx_041461_EXE_REMU 5'b10010
`define ysyx_041461_EXE_SLLW 5'b10011
`define ysyx_041461_EXE_SRLW 5'b10100
`define ysyx_041461_EXE_SRAW 5'b10101
`define ysyx_041461_EXE_ADDW 5'b10110
`define ysyx_041461_EXE_SUBW 5'b10111
`define ysyx_041461_EXE_MULW 5'b11000
`define ysyx_041461_EXE_DIVW 5'b11001
`define ysyx_041461_EXE_DIVUW 5'b11010
`define ysyx_041461_EXE_REMW  5'b11011
`define ysyx_041461_EXE_REMUW 5'b11100

//EXE_src
`define ysyx_041461_EXE_src_NOP 3'b000
`define ysyx_041461_EXE_R_R 3'b001
`define ysyx_041461_EXE_R_I 3'b010
`define ysyx_041461_EXE_PC_I 3'b011
`define ysyx_041461_EXE_R_CSR 3'b100
`define ysyx_041461_EXE_NOTR_CSR 3'b101
`define ysyx_041461_EXE_CSR_ZIMM 3'b110
`define ysyx_041461_EXE_CSR_NOTZIMM 3'b111

//MUL_signed
`define ysyx_041461_MUL_unsigned_x_unsigned 2'b00
`define ysyx_041461_MUL_signed_x_unsigned 2'b10
`define ysyx_041461_MUL_signed_x_signed 2'b11

//MEM_ctrl
`define ysyx_041461_MEM_NOP 4'b0000
`define ysyx_041461_MEM_LB 4'b0001
`define ysyx_041461_MEM_LH 4'b0010
`define ysyx_041461_MEM_LBU 4'b0011
`define ysyx_041461_MEM_LHU 4'b0100
`define ysyx_041461_MEM_LW 4'b0101
`define ysyx_041461_MEM_LWU 4'b0110
`define ysyx_041461_MEM_LD 4'b0111
`define ysyx_041461_MEM_SB 4'b1000
`define ysyx_041461_MEM_SH 4'b1001
`define ysyx_041461_MEM_SW 4'b1010
`define ysyx_041461_MEM_SD 4'b1011
`define ysyx_041461_MEM_FENCE_I 4'b1100

//WB_ctrl
`define ysyx_041461_WB_NOP 4'b0000
`define ysyx_041461_WB_EXE 4'b0001
`define ysyx_041461_WB_MEM 4'b0010
`define ysyx_041461_WB_IMM 4'b0011
`define ysyx_041461_WB_SNPC 4'b0100
`define ysyx_041461_WB_CSR_RS1 4'b0101
`define ysyx_041461_WB_CSR_EXE 4'b0110
`define ysyx_041461_WB_CSR_ZIMM 4'b0111
`define ysyx_041461_WB_CSR_RO 4'b1000

//csr
`define ysyx_041461_MVENDORID 12'hf11
`define ysyx_041461_MARCHID 12'hf12
`define ysyx_041461_MIMPID 12'hf13
`define ysyx_041461_MHARTID 12'hf14
`define ysyx_041461_MSTATUS 12'h300
`define ysyx_041461_MISA 12'h301
`define ysyx_041461_MIE 12'h304
`define ysyx_041461_MTVEC 12'h305
`define ysyx_041461_MSCRATCH 12'h340
`define ysyx_041461_MEPC 12'h341
`define ysyx_041461_MCAUSE 12'h342
`define ysyx_041461_MTVAL 12'h343
`define ysyx_041461_MIP 12'h344
`define ysyx_041461_MCYCLE 12'hb00
`define ysyx_041461_MINSTRET 12'hb02

//IF state
`define ysyx_041461_IF_START 3'b000
`define ysyx_041461_IF_RCACHE 3'b001
`define ysyx_041461_IF_RAXI_AR 3'b010
`define ysyx_041461_IF_RAXI_R 3'b011
`define ysyx_041461_IF_WCACHE 3'b100
`define ysyx_041461_IF_FINISH 3'b101

//IF2 state
`define ysyx_041461_IF2_START 1'b0
`define ysyx_041461_IF2_FINISH 1'b1

//EXE state
`define ysyx_041461_EXE_START 2'b00
`define ysyx_041461_EXE_STATE_MUL 2'b01
`define ysyx_041461_EXE_STATE_DIV 2'b10
`define ysyx_041461_EXE_FINISH 2'b11

//MEM state
`define ysyx_041461_MEM_START 4'b0000
`define ysyx_041461_MEM_RCACHE 4'b0001
`define ysyx_041461_MEM_RAXI_AR 4'b0010
`define ysyx_041461_MEM_RAXI_R 4'b0011
`define ysyx_041461_MEM_WCACHE 4'b0100
`define ysyx_041461_MEM_WAXI_AW 4'b0101
`define ysyx_041461_MEM_WAXI_W 4'b0110
`define ysyx_041461_MEM_WAXI_B 4'b0111
`define ysyx_041461_MEM_FINISH 4'b1000

//ARBITER rstate
`define ysyx_041461_ARBITER_RSTART 2'b00
`define ysyx_041461_ARBITER_IF_RAXI 2'b01
`define ysyx_041461_ARBITER_MEM_RAXI 2'b10
`define ysyx_041461_ARBITER_MEM_RCLINT 2'b11

//ARBITER wstate
`define ysyx_041461_ARBITER_WSTART 2'b00
`define ysyx_041461_ARBITER_WAXI 2'b01
`define ysyx_041461_ARBITER_WCLINT 2'b10

//CLINT state
`define ysyx_041461_CLINT_START 2'b00
`define ysyx_041461_CLINT_W 2'b01
`define ysyx_041461_CLINT_WFINISH 2'b10
`define ysyx_041461_CLINT_R 2'b11

//TRAP
`define ysyx_041461_TRAP_NOP 4'b0000
`define ysyx_041461_IF_MISALIGN 4'b0001
`define ysyx_041461_ID_ECALL 4'b0010
`define ysyx_041461_ID_MRET 4'b0011
`define ysyx_041461_ID_EBREAK 4'b0100
`define ysyx_041461_ID_ILLEGAL_INST 4'b0101
`define ysyx_041461_MEM_LOAD_MISALIGN 4'b0110
`define ysyx_041461_MEM_STORE_MISALIGN 4'b0111
`define ysyx_041461_TIMER_INTERRUPT 4'b1000

//ID_IFreg_ctrl
`define ysyx_041461_ID_IFreg_ctrl_NOP 1'b0
`define ysyx_041461_ID_IFreg_ctrl_IDpc 1'b1

//WB_IFreg_ctrl
`define ysyx_041461_WB_IFreg_ctrl_NOP 2'b00
`define ysyx_041461_WB_IFreg_ctrl_MTVEC 2'b01
`define ysyx_041461_WB_IFreg_ctrl_MEPC 2'b10

