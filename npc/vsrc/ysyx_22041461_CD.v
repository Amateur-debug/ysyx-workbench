`include "ysyx_22041461_macro"

//conflict detector
module ysyx_22041461_CD(  
    
    input   wire  [2:0]  CD_ctrl     ,

    input   wire  [0:0]  CD_IF_valid_in ,

    input   wire  [0:0]  CD_ID_valid_in ,
    input   wire  [3:0]  CD_ID_rs1      ,
    input   wire  [3:0]  CD_ID_rs2      ,
    input   wire  [3:0]  CD_ID_csr      ,

    input   wire  [4:0]  CD_EXE_valid_in,
    input   wire  [4:0]  CD_EXE_ctrl    ,
    input   wire  [4:0]  CD_EXE_src     ,
    input   wire  [3:0]  CD_EXE_WB_ctrl ,
    input   wire  [3:0]  CD_EXE_rd      ,
    input   wire  [3:0]  CD_EXE_rs1     ,
    input   wire  [3:0]  CD_EXE_rs2     ,
    input   wire  [3:0]  CD_EXE_csr     ,

    input   wire  [4:0]  CD_MEM_valid_in,
    input   wire  [4:0]  CD_MEM_ctrl    ,   
    input   wire  [3:0]  CD_MEM_WB_ctrl ,
    input   wire  [3:0]  CD_MEM_rd      ,
    input   wire  [3:0]  CD_MEM_rs2     ,
    input   wire  [3:0]  CD_MEM_csr     ,
 
    input   wire  [4:0]  CD_WB_valid_in ,
    input   wire  [3:0]  CD_WB_ctrl     ,
    input   wire  [3:0]  CD_WB_rd       ,
    input   wire  [3:0]  CD_WB_csr      ,

    output  reg   [0:0]  CD_IF_valid    ,
    output  reg   [0:0]  CD_IF_enable   ,
    output  reg   [0:0]  CD_ID_valid    ,
    output  reg   [0:0]  CD_ID_enable   ,
    output  reg   [0:0]  CD_EXE_valid   ,
    output  reg   [0:0]  CD_EXE_enable  ,
    output  reg   [0:0]  CD_MEM_valid   ,
    output  reg   [0:0]  CD_MEM_enable  ,
    output  reg   [0:0]  CD_WB_valid    
);


reg [0:0] ID_mem_write;
reg [0:0] ID_rs1_read;
reg [0:0] ID_rs2_read;
reg [0:0] ID_mtvec_read;
reg [0:0] ID_mepc_read;

reg [0:0] EXE_rd_write;
reg [0:0] EXE_csr_write;
reg [0:0] EXE_ecall_write;
reg [0:0] EXE_rs1_read;
reg [0:0] EXE_rs2_read;
reg [0:0] EXE_csr_read;

reg [0:0] MEM_rd_write;
reg [0:0] MEM_csr_write;
reg [0:0] MEM_ecall_write;
reg [0:0] MEM_rs2_read;

reg [0:0] WB_rd_write;
reg [0:0] WB_csr_write;
reg [0:0] WB_ecall_write;


always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ctrl == CD_BRANCHES || CD_ctrl == CD_JALR) begin
            ID_rs1_read = 1'b1;
        end
        else begin
            ID_rs1_read = 1'b0;
        end
    end
    else begin
        ID_rs1_read = 1'b0;
    end
end

always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ctrl == CD_BRANCHES) begin
            ID_rs2_read = 1'b1;
        end
        else begin
            ID_rs2_read = 1'b0;
        end
    end
    else begin
        ID_rs2_read = 1'b0;
    end
end

always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ctrl == CD_ECALL) begin
            ID_mtvec_read = 1'b1;
        end
        else begin
            ID_mtvec_read = 1'b0;
        end
    end
    else begin
        ID_mtvec_read = 1'b0;
    end
end

always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ctrl == CD_MRET) begin
            ID_mepc_read = 1'b1;
        end
        else begin
            ID_mepc_read = 1'b0;
        end
    end
    else begin
        ID_mepc_read = 1'b0;
    end
end

always@(*) begin
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_WB_ctrl == WB_EXE || CD_EXE_WB_ctrl == WB_MEM || 
        CD_EXE_WB_ctrl == WB_IMM || CD_EXE_WB_ctrl == WB_SNPC || 
        CD_EXE_WB_ctrl == WB_CSRRW || CD_EXE_WB_ctrl == 4'b0110 || 
        CD_EXE_WB_ctrl == WB_CSRRWI) begin
            EXE_rd_write = 1'b1;
        end
        else begin
            EXE_rd_write = 1'b0;
        end
    end
    else begin
        EXE_rd_write = 1'b0;
    end
end

always@(*) begin
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_WB_ctrl == WB_CSRRW || CD_EXE_WB_ctrl == 4'b0110 || 
        CD_EXE_WB_ctrl == WB_CSRRWI) begin
            EXE_csr_write = 1'b1;
        end
        else begin
            EXE_csr_write = 1'b0;
        end
    end
    else begin
        EXE_csr_write = 1'b0;
    end
end

always@(*) begin
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_WB_ctrl == WB_ECALL) begin
            EXE_ecall_write = 1'b1;
        end
        else begin
            EXE_ecall_write = 1'b0;
        end
    end
    else begin
        EXE_ecall_write = 1'b0;
    end
end

always@(*) begin
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_ctrl != EXE_NOP)begin
            case(CD_EXE_src)
                EXE_src_NOP: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                EXE_R_R: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b1;
                    EXE_csr_read = 1'b0;
                end
                EXE_R_I: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                EXE_PC_I: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                EXE_R_CSR: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                EXE_~R_CSR: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                EXE_CSR_ZIMM: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                EXE_CSR_~ZIMM: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                default: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
            endcase
        end
        else begin
            EXE_rs1_read = 1'b0;
            EXE_rs2_read = 1'b0;
            EXE_csr_read = 1'b0;
        end
    end
    else begin
        EXE_rs1_read = 1'b0;
        EXE_rs2_read = 1'b0;
        EXE_csr_read = 1'b0;
    end
end

always@(*) begin
    if(CD_MEM_valid_in == 1'b1) begin
        if(CD_MEM_WB_ctrl == WB_EXE || CD_MEM_WB_ctrl == WB_MEM || 
        CD_MEM_WB_ctrl == WB_IMM || CD_MEM_WB_ctrl == WB_SNPC || 
        CD_MEM_WB_ctrl == WB_CSRRW || CD_MEM_WB_ctrl == 4'b0110 || 
        CD_MEM_WB_ctrl == WB_CSRRWI) begin
            MEM_rd_write = 1'b1;
        end
        else begin
            MEM_rd_write = 1'b0;
        end
    end
    else begin
        MEM_rd_write = 1'b0;
    end
end

always@(*) begin
    if(CD_MEM_valid_in == 1'b1) begin
        if(CD_MEM_WB_ctrl == WB_CSRRW || CD_MEM_WB_ctrl == 4'b0110 || 
        CD_MEM_WB_ctrl == WB_CSRRWI) begin
            MEM_csr_write = 1'b1;
        end
        else begin
            MEM_csr_write = 1'b0;
        end
    end
    else begin
        MEM_csr_write = 1'b0;
    end
end

always@(*) begin
    if(CD_MEM_valid_in == 1'b1) begin
        if(CD_MEM_WB_ctrl == WB_ECALL) begin
            MEM_ecall_write = 1'b1;
        end
        else begin
            MEM_ecall_write = 1'b0;
        end
    end
    else begin
        MEM_ecall_write = 1'b0;
    end
end

always@(*) begin
    if(CD_MEM_valid_in == 1'b1) begin
        case(CD_MEM_ctrl)
            MEM_SB: begin
                MEM_rs2_read = 1'b1;
            end
            MEM_SH: begin
                MEM_rs2_read = 1'b1;
            end
            MEM_SW: begin
                MEM_rs2_read = 1'b1;
            end
            MEM_SD: begin
                MEM_rs2_read = 1'b1;
            end
            default: begin
                MEM_rs2_read = 1'b0;
            end
        endcase 
    end
    else begin
        MEM_rs2_read = 1'b0;
    end
end

always@(*) begin
    if(CD_WB_valid_in == 1'b1) begin
        if(CD_WB_ctrl == WB_EXE || CD_WB_ctrl == WB_MEM || 
        CD_WB_ctrl == WB_IMM || CD_WB_ctrl == WB_SNPC || 
        CD_WB_ctrl == WB_CSRRW || CD_WB_ctrl == 4'b0110 || 
        CD_WB_ctrl == WB_CSRRWI) begin
            WB_rd_write = 1'b1;
        end
        else begin
            WB_rd_write = 1'b0;
        end
    end
    else begin
        WB_rd_write = 1'b0;
    end
end

always@(*) begin
    if(CD_WB_valid_in == 1'b1) begin
        if(CD_WB_ctrl == WB_CSRRW || CD_WB_ctrl == 4'b0110 || 
        CD_WB_ctrl == WB_CSRRWI) begin
            WB_csr_write = 1'b1;
        end
        else begin
            WB_csr_write = 1'b0;
        end
    end
    else begin
        WB_csr_write = 1'b0;
    end
end

always@(*) begin
    if(CD_WB_valid_in == 1'b1) begin
        if(CD_WB_ctrl == WB_ECALL) begin
            WB_ecall_write = 1'b1;
        end
        else begin
            WB_ecall_write = 1'b0;
        end
    end
    else begin
        WB_ecall_write = 1'b0;
    end
end


always@(*) begin
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_MEM_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_WB_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_MEM_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_WB_rd) begin
                CD_IF_valid = 1'b0;
            end
        end
    end
    if(ID_mtvec_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MTVEC) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(MEM_csr_write == 1'b1) begin
            if(CD_MEM_csr == MTVEC) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MTVEC) begin
                CD_IF_valid = 1'b0;
            end
        end
    end
    if(ID_mepc_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MEPC) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(EXE_ecall_write == 1'b1) begin
            CD_IF_valid = 1'b0;
        end
        if(MEM_csr_write == 1'b1) begin
            if(CD_MEM_csr == MEPC) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            CD_IF_valid = 1'b0;
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MEPC) begin
                CD_IF_valid = 1'b0;
            end
        end
        if(WB_ecall_write == 1'b1) begin
            CD_IF_valid = 1'b0;
        end
    end
    if(CD_ctrl == CD_FENCE.I && CD_MEM_ctrl != MEM_FENCE.I) begin
        CD_IF_valid = 1'b0;
    end
    else begin
        CD_IF_valid = 1'b1;
    end
end



always@(*) begin
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(CD_MEM_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_MEM_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(ID_rs1 == WB_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_MEM_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_WB_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(ID_mtvec_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MTVEC) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(MEM_csr_write == 1'b1) begin
            if(CD_MEM_csr == MTVEC) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MTVEC) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(ID_mepc_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MEPC) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(EXE_ecall_write == 1'b1) begin
            CD_IF_enable = 1'b0;
        end
        if(MEM_csr_write == 1'b1) begin
            if(MEM_csr == mepc) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            CD_IF_enable = 1'b0;
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MEPC) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_ecall_write == 1'b1) begin
            CD_IF_enable = 1'b0;
        end
    end
    if(EXE_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_MEM_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_WB_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(EXE_rs2_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_MEM_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_WB_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(EXE_csr_read == 1'b1) begin
        if(MEM_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_MEM_csr) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            if(CD_EXE_csr == MEPC || CD_EXE_csr == MCAUSE) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_WB_csr) begin
                CD_IF_enable = 1'b0;
            end
        end
        if(WB_ecall_write == 1'b1) begin
            if(CD_EXE_csr == MEPC || CD_EXE_csr == MCAUSE) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_IF_enable = 1'b0;
            end
        end
    end
        
    else begin
        CD_IF_enable = 1'b1;
    end
end

always@(*) begin
    if(IF_mem_read == 1'b1) begin
        if(ID_mem_write == 1'b1 || EXE_mem_write == 1'b1 || MEM_mem_write == 1'b1) begin
            CD_ID_valid = 1'b0;
        end
    end
    else begin
        CD_ID_valid = 1'b1;
    end
end

always@(*) begin
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_MEM_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_WB_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_MEM_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_WB_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(ID_mtvec_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MTVEC) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(MEM_csr_write == 1'b1) begin
            if(CD_MEM_csr == MTVEC) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MTVEC) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(ID_mepc_read == 1'b1) begin
        if(CD_EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MEPC) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(EXE_ecall_write == 1'b1) begin
            CD_ID_enable = 1'b0;
        end
        if(MEM_csr_write == 1'b1) begin
            if(CD_MEM_csr == MEPC) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            CD_ID_enable = 1'b0;
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_WB_csr == MEPC) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_ecall_write == 1'b1) begin
            CD_ID_enable = 1'b0;
        end
    end
    if(EXE_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_MEM_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_WB_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(EXE_rs2_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_MEM_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_WB_rd) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(EXE_csr_read == 1'b1) begin
        if(MEM_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_MEM_csr) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            if(CD_EXE_csr == MEPC || CD_EXE_csr == MCAUSE) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_EXE_csr ==CD_ WB_csr) begin
                CD_ID_enable = 1'b0;
            end
        end
        if(WB_ecall_write == 1'b1) begin
            if(CD_EXE_csr == MEPC || CD_EXE_csr == MCAUSE) begin
                CD_ID_enable = 1'b0;
            end
        end
    end
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_ID_enabled = 1'b0;
            end
        end
    end
    else begin
        CD_ID_enable = 1'b1;
    end
end

always@(*) begin
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                CD_EXE_valid = 1'b0;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                CD_EXE_valid = 1'b0;
            end
        end
    end
    if(ID_mtvec_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MTVEC) begin
                CD_EXE_valid = 1'b0;
            end
        end
    end
    if(ID_mepc_read == 1'b1) begin
        if(EXE_csr_write == 1'b1) begin
            if(CD_EXE_csr == MEPC) begin
                CD_EXE_valid = 1'b0;
            end
        end
        if(EXE_ecall_write == 1'b1) begin
            CD_EXE_valid = 1'b0;
        end
    else begin
        CD_EXE_valid = 1'b1;
    end
end

always@(*) begin
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_EXE_enable = 1'b0;
            end
        end
    end
    else begin
        CD_EXE_enable = 1'b1;
    end
end

always@(*) begin
    if(EXE_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_MEM_rd) begin
                CD_MEM_valid = 1'b0;
            end
        end
    end
    if(EXE_rs2_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_MEM_rd) begin
                CD_MEM_valid = 1'b0;
            end
        end
    end
    if(EXE_csr_read == 1'b1) begin
        if(MEM_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_MEM_csr) begin
                CD_MEM_valid = 1'b0;
            end
        end
        if(MEM_ecall_write == 1'b1) begin
            if(CD_MEM_csr == MEPC || CD_MEM_csr == MCAUSE) begin
                CD_MEM_valid = 1'b0;
            end
        end
    end
    else begin
        CD_MEM_valid = 1'b1;
    end
end


always@(*) begin
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_MEM_enable = 1'b0;
            end
        end
    end
    else begin
        CD_MEM_enable = 1'b1;
    end
end

always@(*) begin
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_WB_valid = 1'b0;
            end
        end
    end
    else begin
        CD_WB_valid = 1'b1;
    end
end






endmodule




