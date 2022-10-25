module  ysyx_22041461_ICACHE(

    input   wire [0:0]   clk             ,
    input   wire [0:0]   flush           ,
    input   wire [0:0]   ICACHE_valid_in ,

    input   wire [63:0]  ICACHE_pc       ,

    output  reg  [0:0]   ICACHE_valid_out,
    output  reg  [31:0]  ICACHE_inst
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);


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
reg  [0:0]  num ;

reg  [63:0]  AXI_rdata;

reg  [127:0] SRAM_data_in;
wire [127:0] SRAM_data_out;
reg  [0:0]   SRAM_WEN;
reg  [127:0] SRAM_BWEN;
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

always@(posedge clk or posedge rst) begin
    if(rst == 1'b0) begin
        num <= 1'b0;
    end
    else begin
        if(ICACHE_valid_in == 1'b1) begin
            if(hit1 == 1'b1 || hit2 == 1'b1) begin
                num <= ~num;
            end
            else begin
                num <= num;
            end
        end
        else begin
            num <= num;
        end
    end
end

always@(*) begin
    ICACHE_valid_out =1'b0;
    if(ICACHE_valid_in == 1'b1) begin
        if(num == 1'b1) begin
            if(hit1 == 1'b1 || hit2 == 1'b1) begin
                ICACHE_valid_out =1'b1;
            end
        end
    end
end

always@(*) begin
    if(ICACHE_valid_in == 1'b1) begin
        if(num == 1'b1) begin
            if(hit1 == 1'b1) begin
                case(offset)
                    3'b000: begin
                        ICACHE_inst = CacheLine1_data[31:0];
                    end
                    3'b100: begin
                        ICACHE_inst = CacheLine1_data[63:32];
                    end
                    default: begin
                        ICACHE_inst = 32'b0000000_00001_00000_000_00000_1110011;
                    end
                endcase
            end
            if(hit2 == 1'b1) begin
                case(offset)
                    3'b000: begin
                        ICACHE_inst = CacheLine2_data[31:0];
                    end
                    3'b100: begin
                        ICACHE_inst = CacheLine2_data[63:32];
                    end
                    default: begin
                        ICACHE_inst = 32'b0000000_00001_00000_000_00000_1110011;
                    end
                endcase
            end
        end
        else begin
            ICACHE_inst = 32'b0;
        end
    end
    else begin
        ICACHE_inst = 32'b0;
    end
end

always@(*) begin
    if(ICACHE_valid_in == 1'b1) begin
        if(hit1 == 1'b0 && hit2 == 1'b0) begin
            pmem_read(ICACHE_pc, AXI_rdata);
        end
        else begin
            AXI_rdata = 64'b0;
        end
    end
    else begin
        AXI_rdata = 64'b0;
    end
end

integer i;
always@(*) begin
    for(i = 0; i < 64; i = i + 1) begin
        V1_next[i] = V1[i];
        V2_next[i] = V2[i];
        tag1_next[i] = tag1[i];
        tag2_next[i] = tag2[i];
    end
    SRAM_BWEN = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    SRAM_data_in = 128'b0;
    if(ICACHE_valid_in == 1'b1) begin
        if(hit1 == 1'b0 && hit2 == 1'b0) begin
            if(V1[index] == 1'b0) begin
                V1_next[index] = 1'b1;
                tag1_next[index] = tag;
                SRAM_BWEN = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                SRAM_data_in = {64'b0, AXI_rdata};
            end
            else if(V2[index] == 1'b0) begin 
                V2_next[index] = 1'b1;
                tag2_next[index] = tag;
                SRAM_BWEN = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                SRAM_data_in = {AXI_rdata, 64'b0};
            end
            else begin
                V1_next[index] = 1'b1;
                tag1_next[index] = tag;
                SRAM_BWEN = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                SRAM_data_in = {64'b0, AXI_rdata};
            end
        end
    end
end

always@(*) begin
    if(ICACHE_valid_in == 1'b1) begin
        if(hit1 == 1'b0 && hit2 == 1'b0) begin
            SRAM_WEN = 1'b0;
        end
        else begin
            SRAM_WEN = 1'b1;
        end
    end
    else begin
        SRAM_WEN = 1'b1;
    end
end

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

integer k;
always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        for(k = 0; k < 64; k = k + 1) begin
            V1[k] <= 1'b0;
            V2[k] <= 1'b0;
            tag1[k] <= 55'b0;
            tag2[k] <= 55'b0;
        end
    end
    else begin
        for(k = 0; k < 64; k = k + 1) begin
            V1[k] <= V1_next[k];
            V2[k] <= V2_next[k];
            tag1[k] <= tag1_next[k];
            tag2[k] <= tag2_next[k];
        end
    end
end


ysyx_22041461_SRAM #(
    .Bits       (128),
    .Word_Depth (64),
    .Add_Width  (6),
    .Wen_Width  (128)
)
SRAM
(
    .CLK   (clk),
    .CEN   (1'b0),
    .WEN   (SRAM_WEN),
    .BWEN  (SRAM_BWEN),
    .A     (index),
    .D     (SRAM_data_in),

    .Q     (SRAM_data_out)
);

endmodule
