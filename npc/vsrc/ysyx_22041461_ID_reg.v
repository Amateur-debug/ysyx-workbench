module ysyx_22041461_ID_reg(

    input   wire [0:0]   clk      ,
    input   wire [0:0]   flush    ,
    input   wire [0:0]   enable   ,

    input   wire [0:0]   valid_in ,
    input   wire [31:0]  inst_in  ,
    input   wire [63:0]  pc_in    ,

    output  reg  [0:0]   valid_out,  
    output  reg  [31:0]  inst_out ,   
    output  reg  [63:0]  pc_out    
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
        inst_out <= 32'b0;
        pc_out <= 64'b0;
    end
    else if(enable == 1'b0) begin
        valid_out <= valid_out;
        inst_out <= inst_out;
        pc_out <= pc_out;
    else begin
        valid_out <= valid_in;
        inst_out <= inst_in;
        pc_out <= pc_in;
    end
end

