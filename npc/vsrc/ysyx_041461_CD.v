//conflict detector
module ysyx_041461_CD(  

    input   wire  [0:0]  CD_IF2_valid_in ,
    input   wire  [3:0]  CD_IF2_trap_in  ,

    input   wire  [0:0]  CD_ID_valid_in ,
    input   wire  [2:0]  CD_ID_TYPE     ,
    input   wire  [4:0]  CD_ID_rs1      ,
    input   wire  [4:0]  CD_ID_rs2      ,
    input   wire  [3:0]  CD_ID_trap_in  ,

    input   wire  [0:0]  CD_EXE_valid_in,
    input   wire  [4:0]  CD_EXE_ctrl    ,
    input   wire  [2:0]  CD_EXE_src     ,
    input   wire  [3:0]  CD_EXE_WB_ctrl ,
    input   wire  [4:0]  CD_EXE_rd      ,
    input   wire  [4:0]  CD_EXE_rs1     ,
    input   wire  [4:0]  CD_EXE_rs2     ,
    input   wire  [11:0] CD_EXE_csr     ,
    input   wire  [3:0]  CD_EXE_trap_in ,

    input   wire  [0:0]  CD_MEM_valid_in,
    input   wire  [3:0]  CD_MEM_ctrl    ,   
    input   wire  [3:0]  CD_MEM_WB_ctrl ,
    input   wire  [4:0]  CD_MEM_rd      ,
    input   wire  [4:0]  CD_MEM_rs2     ,
    input   wire  [11:0] CD_MEM_csr     ,
    input   wire  [3:0]  CD_MEM_trap_in ,
 
    input   wire  [0:0]  CD_WB_valid_in ,
    input   wire  [3:0]  CD_WB_ctrl     ,
    input   wire  [4:0]  CD_WB_rd       ,
    input   wire  [11:0] CD_WB_csr      ,
    input   wire  [3:0]  CD_WB_trap_in  ,

    output  reg   [0:0]  CD_IF_trap     ,
    output  reg   [0:0]  CD_IF2_trap    ,
    output  reg   [0:0]  CD_ID_conflict ,
    output  reg   [0:0]  CD_ID_trap     ,
    output  reg   [0:0]  CD_EXE_conflict,
    output  reg   [0:0]  CD_EXE_trap    ,
    output  reg   [0:0]  CD_MEM_conflict,
    output  reg   [0:0]  CD_MEM_trap
);


reg [0:0] ID_rs1_read;
reg [0:0] ID_rs2_read;

reg [0:0] EXE_rd_write;
reg [0:0] EXE_csr_write;
reg [0:0] EXE_rs1_read;
reg [0:0] EXE_rs2_read;
reg [0:0] EXE_csr_read;

reg [0:0] MEM_rd_write;
reg [0:0] MEM_csr_write;
reg [0:0] MEM_rs2_read;

reg [0:0] WB_rd_write;
reg [0:0] WB_csr_write;

always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ID_TYPE == `ysyx_041461_TYPE_BRANCHES || CD_ID_TYPE == `ysyx_041461_TYPE_JALR) begin
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
        if(CD_ID_TYPE == `ysyx_041461_TYPE_BRANCHES) begin
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
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_WB_ctrl == `ysyx_041461_WB_EXE || CD_EXE_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_IMM || CD_EXE_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM || CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_RO) begin
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
        if(CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM) begin
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
        if(CD_EXE_ctrl != `ysyx_041461_EXE_NOP)begin
            case(CD_EXE_src)
                `ysyx_041461_EXE_src_NOP: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                `ysyx_041461_EXE_R_R: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b1;
                    EXE_csr_read = 1'b0;
                end
                `ysyx_041461_EXE_R_I: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                `ysyx_041461_EXE_PC_I: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
                `ysyx_041461_EXE_R_CSR: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                `ysyx_041461_EXE_NOTR_CSR: begin
                    EXE_rs1_read = 1'b1;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                `ysyx_041461_EXE_CSR_ZIMM: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                `ysyx_041461_EXE_CSR_NOTZIMM: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b1;
                end
                default: begin
                    EXE_rs1_read = 1'b0;
                    EXE_rs2_read = 1'b0;
                    EXE_csr_read = 1'b0;
                end
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
        if(CD_MEM_WB_ctrl == `ysyx_041461_WB_EXE || CD_MEM_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_IMM || CD_MEM_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM || CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_RO) begin
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
        if(CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM) begin
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
        case(CD_MEM_ctrl)
            `ysyx_041461_MEM_SB: begin
                MEM_rs2_read = 1'b1;
            end
            `ysyx_041461_MEM_SH: begin
                MEM_rs2_read = 1'b1;
            end
            `ysyx_041461_MEM_SW: begin
                MEM_rs2_read = 1'b1;
            end
            `ysyx_041461_MEM_SD: begin
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
        if(CD_WB_ctrl == `ysyx_041461_WB_EXE || CD_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_WB_ctrl == `ysyx_041461_WB_IMM || CD_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM || CD_WB_ctrl == `ysyx_041461_WB_CSR_RO) begin
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
        if(CD_WB_ctrl == `ysyx_041461_WB_CSR_RS1 || CD_WB_ctrl == `ysyx_041461_WB_CSR_EXE || 
        CD_WB_ctrl == `ysyx_041461_WB_CSR_ZIMM) begin
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
    CD_ID_conflict = 1'b0;
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_MEM_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_WB_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_MEM_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_WB_rd) begin
                CD_ID_conflict = 1'b1;
            end
        end
    end
end

always@(*) begin
    CD_EXE_conflict = 1'b0;
    if(EXE_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_MEM_rd) begin
                CD_EXE_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_WB_rd) begin
                CD_EXE_conflict = 1'b1;
            end
        end
    end
    if(EXE_rs2_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_MEM_rd) begin
                CD_EXE_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_WB_rd) begin
                CD_EXE_conflict = 1'b1;
            end
        end
    end
    if(EXE_csr_read == 1'b1) begin
        if(MEM_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_MEM_csr) begin
                CD_EXE_conflict = 1'b1;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_WB_csr) begin
                CD_EXE_conflict = 1'b1;
            end
        end
    end
end

always@(*) begin
    CD_MEM_conflict = 1'b0;
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                CD_MEM_conflict = 1'b1;
            end
        end
    end
end

always@(*) begin
    if((CD_IF2_valid_in == 1'b1 && CD_IF2_trap_in != `ysyx_041461_TRAP_NOP) || (CD_ID_valid_in == 1'b1 && CD_ID_trap_in != `ysyx_041461_TRAP_NOP) || (CD_EXE_valid_in == 1'b1 && CD_EXE_trap_in != `ysyx_041461_TRAP_NOP) || (CD_MEM_valid_in == 1'b1 && CD_MEM_trap_in != `ysyx_041461_TRAP_NOP) || (CD_WB_valid_in == 1'b1 && CD_WB_trap_in != `ysyx_041461_TRAP_NOP)) begin
        CD_IF_trap = 1'b1;
    end
    else begin
        CD_IF_trap = 1'b0;
    end
end

always@(*) begin
    if((CD_ID_valid_in == 1'b1 && CD_ID_trap_in != `ysyx_041461_TRAP_NOP) || (CD_EXE_valid_in == 1'b1 && CD_EXE_trap_in != `ysyx_041461_TRAP_NOP) || (CD_MEM_valid_in == 1'b1 && CD_MEM_trap_in != `ysyx_041461_TRAP_NOP) || (CD_WB_valid_in == 1'b1 && CD_WB_trap_in != `ysyx_041461_TRAP_NOP)) begin
        CD_IF2_trap = 1'b1;
    end
    else begin
        CD_IF2_trap = 1'b0;
    end
end


always@(*) begin
    if((CD_EXE_valid_in == 1'b1 && CD_EXE_trap_in != `ysyx_041461_TRAP_NOP) || (CD_MEM_valid_in == 1'b1 && CD_MEM_trap_in != `ysyx_041461_TRAP_NOP) || (CD_WB_valid_in == 1'b1 && CD_WB_trap_in != `ysyx_041461_TRAP_NOP)) begin
        CD_ID_trap = 1'b1;
    end
    else begin
        CD_ID_trap = 1'b0;
    end
end

always@(*) begin
    if((CD_MEM_valid_in == 1'b1 && CD_MEM_trap_in != `ysyx_041461_TRAP_NOP) || (CD_WB_valid_in == 1'b1 && CD_WB_trap_in != `ysyx_041461_TRAP_NOP)) begin
        CD_EXE_trap = 1'b1;
    end
    else begin
        CD_EXE_trap = 1'b0;
    end
end

always@(*) begin
    if(CD_WB_valid_in == 1'b1 && CD_WB_trap_in != `ysyx_041461_TRAP_NOP) begin
        CD_MEM_trap = 1'b1;
    end
    else begin
        CD_MEM_trap = 1'b0;
    end
end


endmodule
