`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_041461_macro.v"

//conflict detector
module ysyx_041461_CD(  
    
    input   wire  [2:0]  CD_ctrl             ,
 
    input   wire  [0:0]  CD_IFreg_ctrl_fromID,
    input   wire  [1:0]  CD_IFreg_ctrl_fromWB,
    input   wire  [0:0]  CD_IF_ok            ,
          
    input   wire  [0:0]  CD_ID_valid_in      ,
    input   wire  [4:0]  CD_ID_rs1           ,
    input   wire  [4:0]  CD_ID_rs2           ,
    input   wire  [3:0]  CD_ID_trap          ,

    input   wire  [0:0]  CD_EXE_valid_in     ,
    input   wire  [4:0]  CD_EXE_ctrl         ,
    input   wire  [2:0]  CD_EXE_src          ,
    input   wire  [2:0]  CD_EXE_WB_ctrl      ,
    input   wire  [4:0]  CD_EXE_rd           ,
    input   wire  [4:0]  CD_EXE_rs1          ,
    input   wire  [4:0]  CD_EXE_rs2          ,
    input   wire  [11:0] CD_EXE_csr          ,
    input   wire  [3:0]  CD_EXE_trap         ,

    input   wire  [0:0]  CD_MEM_valid_in     ,
    input   wire  [0:0]  CD_MEM_ok           ,
    input   wire  [3:0]  CD_MEM_ctrl         ,   
    input   wire  [2:0]  CD_MEM_WB_ctrl      ,
    input   wire  [4:0]  CD_MEM_rd           ,
    input   wire  [4:0]  CD_MEM_rs2          ,
    input   wire  [11:0] CD_MEM_csr          ,
    input   wire  [3:0]  CD_MEM_trap         ,
 
    input   wire  [0:0]  CD_WB_valid_in      ,
    input   wire  [2:0]  CD_WB_ctrl          ,
    input   wire  [4:0]  CD_WB_rd            ,
    input   wire  [11:0] CD_WB_csr           ,
    input   wire  [3:0]  CD_WB_trap          ,

    output  reg   [0:0]  CD_IFreg_enable     ,
    output  reg   [0:0]  CD_IF_valid         ,
    output  reg   [0:0]  CD_IDreg_valid      ,
    output  reg   [0:0]  CD_IDreg_enable     ,
    output  reg   [0:0]  CD_EXEreg_valid     ,
    output  reg   [0:0]  CD_EXEreg_enable    ,
    output  reg   [0:0]  CD_MEMreg_valid     ,
    output  reg   [0:0]  CD_MEM_valid        ,
    output  reg   [0:0]  CD_MEMreg_enable    ,
    output  reg   [0:0]  CD_WBreg_valid    
);


reg [0:0] ID_rs1_read;
reg [0:0] ID_rs2_read;
reg [0:0] ID_trap;
reg [0:0] ID_conflict;

reg [0:0] EXE_rd_write;
reg [0:0] EXE_csr_write;
reg [0:0] EXE_rs1_read;
reg [0:0] EXE_rs2_read;
reg [0:0] EXE_csr_read;
reg [0:0] EXE_trap;
reg [0:0] EXE_conflict;

reg [0:0] MEM_rd_write;
reg [0:0] MEM_csr_write;
reg [0:0] MEM_rs2_read;
reg [0:0] MEM_trap;
reg [0:0] MEM_conflict;

reg [0:0] WB_rd_write;
reg [0:0] WB_csr_write;
reg [0:0] WB_trap;


always@(*) begin
    if(CD_ID_valid_in == 1'b1) begin
        if(CD_ctrl == `ysyx_041461_CD_BRANCHES || CD_ctrl == `ysyx_041461_CD_JALR) begin
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
        if(CD_ctrl == `ysyx_041461_CD_BRANCHES) begin
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
    if(CD_ID_valid_in == 1'b1 && CD_ID_trap != `ysyx_041461_TRAP_NOP) begin
        ID_trap = 1'b1;
    end
    else begin
        ID_trap = 1'b0;
    end
end

always@(*) begin
    ID_conflict = 1'b0;
    if(ID_rs1_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_EXE_rd) begin
                ID_conflict = 1'b1;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_MEM_rd) begin
                ID_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs1 == CD_WB_rd) begin
                ID_conflict = 1'b1;
            end
        end
    end
    if(ID_rs2_read == 1'b1) begin
        if(EXE_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_EXE_rd) begin
                ID_conflict = 1'b1;
            end
        end
        if(MEM_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_MEM_rd) begin
                ID_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_ID_rs2 == CD_WB_rd) begin
                ID_conflict = 1'b1;
            end
        end
    end
end


always@(*) begin
    if(CD_EXE_valid_in == 1'b1) begin
        if(CD_EXE_WB_ctrl == `ysyx_041461_WB_EXE || CD_EXE_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_IMM || CD_EXE_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_EXE_WB_ctrl == 3'b110 || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
        if(CD_EXE_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_EXE_WB_ctrl == 3'b110 || 
        CD_EXE_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
    if(CD_EXE_valid_in == 1'b1 && CD_EXE_trap != `ysyx_041461_TRAP_NOP) begin
        EXE_trap = 1'b1;
    end
    else begin
        EXE_trap = 1'b0;
    end
end

always@(*) begin
    EXE_conflict = 1'b0;
    if(EXE_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_MEM_rd) begin
                EXE_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs1 == CD_WB_rd) begin
                EXE_conflict = 1'b1;
            end
        end
    end
    if(EXE_rs2_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_MEM_rd) begin
                EXE_conflict = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(CD_EXE_rs2 == CD_WB_rd) begin
                EXE_conflict = 1'b1;
            end
        end
    end
    if(EXE_csr_read == 1'b1) begin
        if(MEM_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_MEM_csr) begin
                EXE_conflict = 1'b1;
            end
        end
        if(WB_csr_write == 1'b1) begin
            if(CD_EXE_csr == CD_WB_csr) begin
                EXE_conflict = 1'b1;
            end
        end
    end
end


always@(*) begin
    if(CD_MEM_valid_in == 1'b1) begin
        if(CD_MEM_WB_ctrl == `ysyx_041461_WB_EXE || CD_MEM_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_IMM || CD_MEM_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_MEM_WB_ctrl == 3'b110 || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
        if(CD_MEM_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_MEM_WB_ctrl == 3'b110 || 
        CD_MEM_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
    if(CD_MEM_valid_in == 1'b1 && CD_MEM_trap != `ysyx_041461_TRAP_NOP) begin
        MEM_trap = 1'b1;
    end
    else begin
        MEM_trap = 1'b0;
    end
end

always@(*) begin
    MEM_conflict = 1'b0;
    if(MEM_rs2_read == 1'b1) begin
        if(WB_rd_write == 1'b1) begin
            if(CD_MEM_rs2 == CD_WB_rd) begin
                MEM_conflict = 1'b1;
            end
        end
    end
end

always@(*) begin
    if(CD_WB_valid_in == 1'b1) begin
        if(CD_WB_ctrl == `ysyx_041461_WB_EXE || CD_WB_ctrl == `ysyx_041461_WB_MEM || 
        CD_WB_ctrl == `ysyx_041461_WB_IMM || CD_WB_ctrl == `ysyx_041461_WB_SNPC || 
        CD_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_WB_ctrl == 3'b110 || 
        CD_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
        if(CD_WB_ctrl == `ysyx_041461_WB_CSRRW || CD_WB_ctrl == 3'b110 || 
        CD_WB_ctrl == `ysyx_041461_WB_CSRRWI) begin
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
    if(CD_WB_valid_in == 1'b1 && CD_WB_trap != `ysyx_041461_TRAP_NOP) begin
        WB_trap = 1'b1;
    end
    else begin
        WB_trap = 1'b0;
    end
end

always@(*) begin
    CD_IFreg_enable = 1'b1;
    if(CD_ctrl == `ysyx_041461_CD_FENCE_I) begin
        if(CD_EXE_valid_in == 1'b1 || CD_MEM_valid_in == 1'b1) begin
            CD_IFreg_enable = 1'b0;
        end
    end
    if(CD_MEM_ok == 1'b0 || CD_IF_ok == 1'b0) begin
        CD_IFreg_enable = 1'b0;
    end
    if(ID_conflict == 1'b1 || EXE_conflict == 1'b1 || MEM_conflict == 1'b1) begin
        CD_IFreg_enable = 1'b0;
    end
end

always@(*) begin
    CD_IF_valid = 1'b1;
    if(CD_ctrl == `ysyx_041461_CD_FENCE_I) begin
        if(CD_EXE_valid_in == 1'b1 || CD_MEM_valid_in == 1'b1) begin
            CD_IF_valid = 1'b0;
        end
    end
    if(CD_IFreg_ctrl_fromID == `ysyx_041461_ID_IFreg_ctrl_IDpc || CD_IFreg_ctrl_fromWB != `ysyx_041461_WB_IFreg_ctrl_NOP) begin
        CD_IF_valid = 1'b0;
    end
    if(ID_trap == 1'b1 || EXE_trap == 1'b1 || MEM_trap == 1'b1 || WB_trap == 1'b1) begin
        CD_IF_valid = 1'b0;
    end
    if(ID_conflict == 1'b1) begin
        CD_IF_valid = 1'b0;
    end
end


always@(*) begin
    CD_IDreg_valid = 1'b1;
    if(CD_IFreg_ctrl_fromID == `ysyx_041461_ID_IFreg_ctrl_IDpc || CD_IFreg_ctrl_fromWB != `ysyx_041461_WB_IFreg_ctrl_NOP) begin
        CD_IDreg_valid = 1'b0;
    end
    if(ID_trap == 1'b1 || EXE_trap == 1'b1 || MEM_trap == 1'b1 || WB_trap == 1'b1) begin
        CD_IDreg_valid = 1'b0;
    end
    if(CD_ctrl == `ysyx_041461_CD_FENCE_I) begin
        CD_IDreg_valid = 1'b0;
    end
end

always@(*) begin
    CD_IDreg_enable = 1'b1;
    if(CD_ctrl == `ysyx_041461_CD_FENCE_I) begin
        if(CD_EXE_valid_in == 1'b1 || CD_MEM_valid_in == 1'b1) begin
            CD_IDreg_enable = 1'b0;
        end
    end
    if(CD_MEM_ok == 1'b0) begin
        CD_IDreg_enable = 1'b0;
    end
    if(ID_conflict == 1'b1 || EXE_conflict == 1'b1 || MEM_conflict == 1'b1) begin
        CD_IDreg_enable = 1'b0;
    end
end

always@(*) begin
    CD_EXEreg_valid = 1'b1;
    if(CD_ctrl == `ysyx_041461_CD_FENCE_I) begin
        CD_EXEreg_valid = 1'b0;
    end
    if(EXE_trap == 1'b1 || MEM_trap == 1'b1 || WB_trap == 1'b1) begin
        CD_EXEreg_valid = 1'b0;
    end
    if(ID_conflict == 1'b1) begin
        CD_EXEreg_valid = 1'b0;
    end
end

always@(*) begin
    CD_EXEreg_enable = 1'b1;
    if(CD_MEM_ok == 1'b0) begin
        CD_EXEreg_enable = 1'b0;
    end
    if(EXE_conflict == 1'b1 || MEM_conflict == 1'b1) begin
        CD_EXEreg_enable = 1'b0;
    end
end

always@(*) begin
    CD_MEMreg_valid = 1'b1;
    if(MEM_trap == 1'b1 || WB_trap == 1'b1) begin
        CD_MEMreg_valid = 1'b0;
    end
    if(EXE_conflict == 1'b1) begin
        CD_MEMreg_valid = 1'b0;
    end
end

always@(*) begin
    CD_MEM_valid = 1'b1;
    if(MEM_conflict == 1'b1) begin
        CD_MEM_valid = 1'b0;
    end
    if(WB_trap == 1'b1) begin
        CD_MEM_valid = 1'b0;
    end
end

always@(*) begin
    CD_MEMreg_enable = 1'b1;
    if(CD_MEM_ok == 1'b0) begin
        CD_MEMreg_enable = 1'b0;
    end
    if(MEM_conflict == 1'b1) begin
        CD_MEMreg_enable = 1'b0;
    end
end

always@(*) begin
    CD_WBreg_valid = 1'b1;
    if(MEM_conflict == 1'b1) begin
        CD_WBreg_valid = 1'b0;
    end
    if(WB_trap == 1'b1) begin
        CD_WBreg_valid = 1'b0;
    end
end


endmodule
