module  ysyx_22041461_EXE_reg(

  input  wire [0:0]  clk             ,
  input  wire [0:0]  flush           ,
  input  wire [0:0]  enable          ,

  input  wire [0:0]  valid_in        ,
  input  wire [4:0]  rs1_in          ,
  input  wire [4:0]  rs2_in          ,
  input  wire [4:0]  rd_in           ,
  input  wire [63:0] imm_in          ,
  input  wire [63:0] zimm_in         ,
  input  wire [63:0] pc_in           ,
  input  wire [63:0] ctrl_ALU_in     , 
  input  wire [63:0] sel_ALU_in      ,
  input  wire [63:0] sel_MEM_addr_in ,
  input  wire [63:0] sel_MEM_data_in ,
  input  wire [63:0] ctrl_MEM_in     ,

  output  reg [0:0]  valid_out       ,
  output  reg [4:0]  rs1_out         ,
  output  reg [4:0]  rs2_out         ,
  output  reg [4:0]  rd_out          ,
  output  reg [63:0] imm_out         ,
  output  reg [63:0] zimm_out        ,
  output  reg [63:0] pc_out          ,
  output  reg [63:0] ctrl_ALU_out    , 
  output  reg [63:0] sel_ALU_out     ,
  output  reg [63:0] sel_MEM_addr_out,
  output  reg [63:0] sel_MEM_data_out,
  output  reg [63:0] ctrl_MEM_out    ,
);

//异步复位同步释放
reg  [0:0]   rst_r1;
reg  [0:0]   rst_r2;
wire [0:0]   rst;

assign rst = rst_r2;

always@(posedge clk or negedge flush) begin
    if(flush == 1'b0) begin
        rst_r1 <= 1'b0;
        rst_r2 <= 1'b0;
    end
    else begin
        rst_r1 <= 1'b1;
        rst_r2 <= rst_r1;
    end
end


//流水线寄存器功能实现
always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
      valid_out <= 1'b0;

    end
    else if(enable == 1'b0) begin
      valid_out <= valid_out;

    else begin
        valid_out <= valid_in;

    end
end