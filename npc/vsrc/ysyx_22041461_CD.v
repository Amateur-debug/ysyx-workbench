`include "ysyx_22041461_macro"

//conflict detector
module ysyx_22041461_CD(  
    input   wire  [3:0]  IF_ctrl     ,

    input   wire  [3:0]  ID_ctrl     ,
    input   wire  [3:0]  ID_rs1      ,
    input   wire  [3:0]  ID_rs2      ,
    input   wire  [3:0]  ID_csr      ,

    input   wire  [4:0]  EXE_ctrl ,
    input   wire  [4:0]  EXE_src  ,
    input   wire  [3:0]  EXE_WB_ctrl  ,
    input   wire  [3:0]  EXE_rd       ,
    input   wire  [3:0]  EXE_rs1      ,
    input   wire  [3:0]  EXE_rs2      ,
    input   wire  [3:0]  EXE_csr      ,

    input   wire  [4:0]  MEM_ctrl     ,   
    input   wire  [3:0]  MEM_WB_ctrl  ,
    input   wire  [3:0]  MEM_rd       ,
    input   wire  [3:0]  MEM_rs1      ,
    input   wire  [3:0]  MEM_rs2      ,
    input   wire  [3:0]  MEM_csr      ,
 
    input   wire  [3:0]  WB_ctrl     ,
    input   wire  [3:0]  WB_rd       ,
    input   wire  [3:0]  WB_csr      ,

    output  reg   [0:0]  IF_valid     ,
    output  reg   [0:0]  IF_enable    ,
    output  reg   [0:0]  ID_valid     ,
    output  reg   [0:0]  ID_enable    ,
    output  reg   [0:0]  EXE_valid    ,
    output  reg   [0:0]  EXE_enable   ,
    output  reg   [0:0]  MEM_valid    ,
    output  reg   [0:0]  MEM_enable   ,
    output  reg   [0:0]  WB_valid     ,
    output  reg   [0:0]  WB_enable    ,
);

reg [0:0] EXE_rd_write;
reg [0:0] MEM_rd_write;
reg [0:0] WB_rd_write;
reg [0:0] EXE_csr_write;
reg [0:0] MEM_csr_write;
reg [0:0] WB_csr_write;

always@(*) begin
    if(EXE_WB_ctrl == WB_EXE || EXE_WB_ctrl == WB_MEM || 
    EXE_WB_ctrl == WB_IMM || EXE_WB_ctrl == WB_SNPC || 
    EXE_WB_ctrl == WB_CSRRW || EXE_WB_ctrl == 4'b0110 || 
    EXE_WB_ctrl == WB_CSRRWI) begin
        EXE_rd_write = 1'b1;
    end
    else begin
        EXE_rd_write = 1'b0;
    end
end

always@(*) begin
    if(MEM_WB_ctrl == WB_EXE || MEM_WB_ctrl == WB_MEM || 
    MEM_WB_ctrl == WB_IMM || MEM_WB_ctrl == WB_SNPC || 
    MEM_WB_ctrl == WB_CSRRW || MEM_WB_ctrl == 4'b0110 || 
    MEM_WB_ctrl == WB_CSRRWI) begin
        MEM_rd_write = 1'b1;
    end
    else begin
        MEM_rd_write = 1'b0;
    end
end

always@(*) begin
    if(WB_ctrl == WB_EXE || WB_ctrl == WB_MEM || 
    WB_ctrl == WB_IMM || WB_ctrl == WB_SNPC || 
    WB_ctrl == WB_CSRRW || WB_ctrl == 4'b0110 || 
    WB_ctrl == WB_CSRRWI) begin
        WB_rd_write = 1'b1;
    end
    else begin
        WB_rd_write = 1'b0;
    end
end

always@(*) begin
    if(EXE_WB_ctrl == WB_CSRRW || EXE_WB_ctrl == 4'b0110 || 
    EXE_WB_ctrl == WB_CSRRWI) begin
        EXE_csr_write = 1'b1;
    end
    else begin
        EXE_csr_write = 1'b0;
    end
end

always@(*) begin
    if(MEM_WB_ctrl == WB_CSRRW || MEM_WB_ctrl == 4'b0110 || 
    MEM_WB_ctrl == WB_CSRRWI) begin
        MEM_csr_write = 1'b1;
    end
    else begin
        MEM_csr_write = 1'b0;
    end
end

always@(*) begin
    if(WB_ctrl == WB_CSRRW || WB_ctrl == 4'b0110 || 
    WB_ctrl == WB_CSRRWI) begin
        WB_csr_write = 1'b1;
    end
    else begin
        WB_csr_write = 1'b0;
    end
end
        
always@(*) begin









endmodule
