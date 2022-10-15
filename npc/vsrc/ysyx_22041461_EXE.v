module ysyx_22041461_EXE(

  input  wire [31:0] inst        ,
  input  wire [4:0]  rs1         ,
  input  wire [4:0]  rs2         ,
  input  wire [4:0]  rd          ,
  input  wire [63:0] imm         ,
  input  wire [63:0] zimm        ,
  input  wire [63:0] pc          ,
  input  wire [63:0] ctrl_ALU    , 
  input  wire [63:0] sel_ALU     ,
  input  wire [63:0] sel_MEM_addr,
  input  wire [63:0] sel_MEM_data,
  input  wire [63:0] ctrl_MEM    ,


  output wire [31:0] inst
);