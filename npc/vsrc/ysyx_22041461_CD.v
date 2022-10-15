`include "ysyx_22041461_macro"

//conflict detector
module ysyx_22041461_CD( 
    input   wire  [63:0] IF_pc        ,
    input   wire  [0:0]  IF_ctrl      ,
 
    input   wire  [0:0]  ID_rs1_read  ,
    input   wire  [0:0]  ID_rs2_read  ,
    input   wire  [0:0]  ID_csr_read  ,
    input   wire  [0:0]  ID_rs1       ,
    input   wire  [0:0]  ID_rs2       ,
    input   wire  [0:0]  ID_csr       ,

    input   wire  [0:0]  EXE_rd_write ,
    input   wire  [0:0]  EXE_rs1_read ,
    input   wire  [0:0]  EXE_rs2_read ,
    input   wire  [0:0]  EXE_csr_write,
    input   wire  [0:0]  EXE_csr_read ,
    input   wire  [0:0]  EXE_rd       ,
    input   wire  [0:0]  EXE_rs1      ,
    input   wire  [0:0]  EXE_rs2      ,
    input   wire  [0:0]  EXE_csr      ,

    input   wire  [0:0]  MEM_rd_write ,
    input   wire  [0:0]  MEM_rs1_read ,
    input   wire  [0:0]  MEM_rs2_read ,
    input   wire  [0:0]  MEM_csr_write,   
    input   wire  [0:0]  MEM_csr_read ,
    input   wire  [0:0]  MEM_rd       ,
    input   wire  [0:0]  MEM_rs1      ,
    input   wire  [0:0]  MEM_rs2      ,
    input   wire  [0:0]  MEM_csr      ,

    input   wire  [0:0]  WB_rd_write ,
    input   wire  [0:0]  WB_rs1_read ,
    input   wire  [0:0]  WB_rs2_read ,
    input   wire  [0:0]  WB_csr_write,   
    input   wire  [0:0]  WB_csr_read ,
    input   wire  [0:0]  WB_rd       ,
    input   wire  [0:0]  WB_rs1      ,
    input   wire  [0:0]  WB_rs2      ,
    input   wire  [0:0]  WB_csr      ,

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
):

always@(*) begin
    if(ID_rs1_read == 1'b1) begin
        if(MEM_rd_write == 1'b1) begin
            if(ID_rs1 == MEM_rd) begin
                IF_valid = 1'b0;
                IF_enable = 1'b0;
                ID_enable = 1'b0;
            end
            else begin
                IF_valid = 1'b1;
                IF_enable = 1'b1;
                ID_enable = 1'b1;
            end
        end
        if(WB_rd_write == 1'b1) begin
            if(ID_rs1 == WB_rd) begin
                IF_valid = 1'b0;
                IF_enable = 1'b0;
                ID_enable = 1'b0;
            end
            else begin
                IF_valid = 1'b1;
                IF_enable = 1'b1;
                ID_enable = 1'b1;
            end
        end






endmodule
