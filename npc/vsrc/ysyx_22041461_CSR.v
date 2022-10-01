module ysyx_22041461_CSR(

    input   wire [0:0]  clk       ,
    input   wire [0:0]  rst       ,
    input   wire [1:0]  ctrl_CSRS ,
    input   wire [63:0] imm       ,
    input   wire [63:0] dest      ,
    input   wire [63:0] pc        ,

    output  wire [63:0] rs1_data  , 
    output  wire [63:0] csr_data  
);

reg [63:0] mtvec;    //0x305
reg [63:0] mepc;     //0x341
reg [63:0] mcause;   //0x342
reg [63:0] mstatus;  //0x300



