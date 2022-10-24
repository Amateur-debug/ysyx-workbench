module  ysyx_22041461_ICACHE(

    input   wire [0:0]   clk             ,
    input   wire [0:0]   flush           ,
    input   wire [0:0]   ICACHE_valid_in ,

    input   wire [63:0]  ICACHE_pc       ,

    output  reg  [0:0]   ICACHE_valid_out,
    output  reg  [31:0]  ICACHE_inst,
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

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


wire [5:0]  index;
wire [2:0]  offset;
wire [54:0] tag;

assign index = ICACHE_pc[8:3];
assign offset = ICACHE_pc[2:0];
assign tag = ICACHE_pc[63:9];

reg  [0:0]  V1        [63:0];
reg  [0:0]  V1_next   [63:0];
reg  [54:0] tag1      [63:0];
reg  [54:0] tag1_next [63:0];
reg  [0:0]  V2        [63:0];
reg  [0:0]  V2_next   [63:0];
reg  [54:0] tag2      [63:0];
reg  [54:0] tag2_next [63:0];

reg  [0:0]  hit1;
reg  [0:0]  hit2;

wire [127:0] SRAM_data_in;
wire [127:0] SRAM_data_out;
wire [127:0] SRAM_WEN;
wire [127:0] SRAM_BWEN;
wire [63:0]  CacheLine1_data;
wire [63:0]  CacheLine2_data;

assign {CacheLine2_data, CacheLine1_data} = SRAM_data_out;

always@(*) begin
    if(V1[index] == 1'b1) begin
        if(tag1[index] == tag) begin
            hit1 = 1'b1;
        end
        else begin
            hit1 = 1'b0;
        end
    end
    else begin
        hit1 = 1'b0;
    end
end

always@(*) begin
    if(V2[index] == 1'b1) begin
        if(tag2[index] == tag) begin
            hit2 = 1'b1;
        end
        else begin
            hit2 = 1'b0;
        end
    end
    else begin
        hit2 = 1'b0;
    end
end

always@(*) begin
    if(hit1 == 1'b0) begin


ysyx_22041461_SRAM SRAM
(
    .CLK   (clk),
    .CEN   (1'b1),
    .WEN   (1'b0),
    .BWEN  (),
    .A     (index),
    .D     (SRAM_data_in),

    .Q     (SRAM_data_out)
);
