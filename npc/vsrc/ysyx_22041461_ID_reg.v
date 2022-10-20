`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_ID_reg(

    input   wire [0:0]   clk               ,
    input   wire [0:0]   flush             ,
    input   wire [0:0]   IDreg_enable      ,

    input   wire [0:0]   IDreg_valid_fromIF,
    input   wire [0:0]   IDreg_valid_fromCD,
    input   wire [31:0]  IDreg_inst_in     ,
    input   wire [63:0]  IDreg_pc_in       ,

    output  reg  [0:0]   IDreg_valid_out   ,  
    output  reg  [31:0]  IDreg_inst_out    ,   
    output  reg  [63:0]  IDreg_pc_out      
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
        IDreg_valid_out <= 1'b0;
    end
    else if(IDreg_enable == 1'b0) begin
        IDreg_valid_out <= IDreg_valid_out;
    end
    else if(IDreg_valid_fromCD == 1'b0 || IDreg_valid_fromIF == 1'b0) begin
        IDreg_valid_out <= 1'b0;
    end
    else begin
        IDreg_valid_out <= 1'b1;
    end
end

always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        IDreg_inst_out <= 32'b0;
        IDreg_pc_out <= 64'h0000_0000_8000_0000;
    end
    else if(IDreg_enable == 1'b0) begin
        IDreg_inst_out <= IDreg_inst_out;
        IDreg_pc_out <= IDreg_pc_out;
    end
    else begin
        IDreg_inst_out <= IDreg_inst_in;
        IDreg_pc_out <= IDreg_pc_in;
    end
end

endmodule

