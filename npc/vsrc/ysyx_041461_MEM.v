`include "ysyx_041461_macro.v"
module ysyx_041461_MEM(

    input   wire [0:0]    clk             ,
    input   wire [0:0]    rst             ,
      
    input   wire [0:0]    MEM_valid_in    ,
    input   wire [63:0]   MEM_EXE_in      ,
    input   wire [63:0]   MEM_rs2_data    ,
    input   wire [3:0]    MEM_ctrl        ,  
    input   wire [3:0]    MEM_trap_in     ,
    input   wire [0:0]    MEM_WB_ready    ,
    input   wire [0:0]    MEM_CD_trap     ,
    input   wire [0:0]    MEM_conflict    ,

    output  reg  [0:0]    MEM_valid_out   ,
    output  reg  [0:0]    MEM_ready       ,
    output  reg  [63:0]   MEM_out         ,
    output  reg  [3:0]    MEM_trap_out    ,
      
    input   wire [0:0]    MEM_awready     ,
    output  wire [0:0]    MEM_awvalid     ,
    output  reg  [31:0]   MEM_awaddr      ,
    output  wire [3:0]    MEM_awid        ,
    output  wire [7:0]    MEM_awlen       ,
    output  wire [2:0]    MEM_awsize      ,
    output  wire [1:0]    MEM_awburst     ,
             
    input   wire [0:0]    MEM_wready      ,
    output  wire [0:0]    MEM_wvalid      ,
    output  wire [63:0]   MEM_wdata       ,
    output  wire [7:0]    MEM_wstrb       ,
    output  wire [0:0]    MEM_wlast       ,
             
    output  wire [0:0]    MEM_bready      ,
    input   wire [0:0]    MEM_bvalid      ,
    input   wire [1:0]    MEM_bresp       ,
    input   wire [3:0]    MEM_bid         ,
            
    input   wire [0:0]    MEM_arready     ,
    output  wire [0:0]    MEM_arvalid     ,
    output  wire [31:0]   MEM_araddr      ,
    output  wire [3:0]    MEM_arid        ,
    output  wire [7:0]    MEM_arlen       ,
    output  wire [2:0]    MEM_arsize      ,
    output  wire [1:0]    MEM_arburst     ,
             
    output  wire [0:0]    MEM_rready      ,
    input   wire [0:0]    MEM_rvalid      ,
    input   wire [1:0]    MEM_rresp       ,
    input   wire [63:0]   MEM_rdata       ,
    input   wire [0:0]    MEM_rlast       ,
    input   wire [3:0]    MEM_rid         ,
       
    output  wire [5:0]    MEM_sram4_addr  , 
    output  wire [0:0]    MEM_sram4_cen   , 
    output  wire [0:0]    MEM_sram4_wen   , 
    output  wire [127:0]  MEM_sram4_wmask , 
    output  wire [127:0]  MEM_sram4_wdata , 
    input   wire [127:0]  MEM_sram4_rdata ,
       
    output  wire [5:0]    MEM_sram5_addr  , 
    output  wire [0:0]    MEM_sram5_cen   , 
    output  wire [0:0]    MEM_sram5_wen   , 
    output  wire [127:0]  MEM_sram5_wmask , 
    output  wire [127:0]  MEM_sram5_wdata , 
    input   wire [127:0]  MEM_sram5_rdata ,
       
    output  wire [5:0]    MEM_sram6_addr  , 
    output  wire [0:0]    MEM_sram6_cen   , 
    output  wire [0:0]    MEM_sram6_wen   , 
    output  wire [127:0]  MEM_sram6_wmask , 
    output  wire [127:0]  MEM_sram6_wdata , 
    input   wire [127:0]  MEM_sram6_rdata ,
       
    output  wire [5:0]    MEM_sram7_addr  , 
    output  wire [0:0]    MEM_sram7_cen   , 
    output  wire [0:0]    MEM_sram7_wen   , 
    output  wire [127:0]  MEM_sram7_wmask , 
    output  wire [127:0]  MEM_sram7_wdata , 
    input   wire [127:0]  MEM_sram7_rdata ,

    output  reg  [0:0]    MEM_skip_difftest
);

parameter MEM_AXI_id = 4'b0001;

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
parameter SLVERR = 2'b10;
parameter DECERR = 2'b11;

parameter FIXED = 2'b00;
parameter INCR = 2'b01;
parameter WRAP = 2'b10;
parameter Rserved = 2'b11;


wire [0:0]   load;
wire [0:0]   store;
reg  [0:0]   uncached;
reg  [3:0]   state;

reg  [63:0]  AXI_rdata;
reg  [63:0]  AXI_rdata_next;

reg  [0:0]   V1        [63:0];
reg  [0:0]   V1_next   [63:0];
reg  [54:0]  tag1      [63:0];
reg  [54:0]  tag1_next [63:0];
reg  [0:0]   V2        [63:0];
reg  [0:0]   V2_next   [63:0];
reg  [54:0]  tag2      [63:0];
reg  [54:0]  tag2_next [63:0];
reg  [0:0]   V3        [63:0];
reg  [0:0]   V3_next   [63:0];
reg  [54:0]  tag3      [63:0];
reg  [54:0]  tag3_next [63:0];
reg  [0:0]   V4        [63:0];
reg  [0:0]   V4_next   [63:0];
reg  [54:0]  tag4      [63:0];
reg  [54:0]  tag4_next [63:0];
reg  [0:0]   V5        [63:0];
reg  [0:0]   V5_next   [63:0];
reg  [54:0]  tag5      [63:0];
reg  [54:0]  tag5_next [63:0];
reg  [0:0]   V6        [63:0];
reg  [0:0]   V6_next   [63:0];
reg  [54:0]  tag6      [63:0];
reg  [54:0]  tag6_next [63:0];
reg  [0:0]   V7        [63:0];
reg  [0:0]   V7_next   [63:0];
reg  [54:0]  tag7      [63:0];
reg  [54:0]  tag7_next [63:0];
reg  [0:0]   V8        [63:0];
reg  [0:0]   V8_next   [63:0];
reg  [54:0]  tag8      [63:0];
reg  [54:0]  tag8_next [63:0];

reg  [0:0]   hit1;
reg  [0:0]   hit2;
reg  [0:0]   hit3;
reg  [0:0]   hit4;
reg  [0:0]   hit5;
reg  [0:0]   hit6;
reg  [0:0]   hit7;
reg  [0:0]   hit8;

wire [0:0]   hit;

wire [5:0]   index;
wire [2:0]   offset;
wire [54:0]  tag;

reg  [6:0]   PLRU_tree       [63:0];
reg  [6:0]   PLRU_tree_next  [63:0];
reg  [2:0]   replace_line;

reg [0:0]  align;

assign index = MEM_EXE_in[8:3];
assign offset = MEM_EXE_in[2:0];
assign tag = MEM_EXE_in[63:9];

assign hit = hit1 || hit2 || hit3 || hit4 || hit5 || hit6 || hit7 || hit8;

assign load = MEM_ctrl == `ysyx_041461_MEM_LB || MEM_ctrl == `ysyx_041461_MEM_LH || MEM_ctrl == `ysyx_041461_MEM_LBU || MEM_ctrl == `ysyx_041461_MEM_LHU || MEM_ctrl == `ysyx_041461_MEM_LW || MEM_ctrl == `ysyx_041461_MEM_LWU || MEM_ctrl == `ysyx_041461_MEM_LD;
assign store = MEM_ctrl == `ysyx_041461_MEM_SB || MEM_ctrl == `ysyx_041461_MEM_SH || MEM_ctrl == `ysyx_041461_MEM_SW || MEM_ctrl == `ysyx_041461_MEM_SD;

//在运行pa程序时，需判断地址大小，运行soc程序时只需判断一位
//SOC
/*
always@(*) begin
    if(MEM_EXE_in[31:31] == 1'b1) begin
        uncached = 1'b0;
    end
    else begin
        uncached = 1'b1;
    end
end
*/

//PA
always@(*) begin
    if(MEM_EXE_in[31:0] >= 32'h8000_0000 && MEM_EXE_in[31:0] < 32'h8800_0000) begin
        uncached = 1'b0;
    end
    else begin
        uncached = 1'b1;
    end
end


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
    if(V3[index] == 1'b1) begin
        if(tag3[index] == tag) begin
            hit3 = 1'b1;
        end
        else begin
            hit3 = 1'b0;
        end
    end
    else begin
        hit3 = 1'b0;
    end
end

always@(*) begin
    if(V4[index] == 1'b1) begin
        if(tag4[index] == tag) begin
            hit4 = 1'b1;
        end
        else begin
            hit4 = 1'b0;
        end
    end
    else begin
        hit4 = 1'b0;
    end
end

always@(*) begin
    if(V5[index] == 1'b1) begin
        if(tag5[index] == tag) begin
            hit5 = 1'b1;
        end
        else begin
            hit5 = 1'b0;
        end
    end
    else begin
        hit5 = 1'b0;
    end
end

always@(*) begin
    if(V6[index] == 1'b1) begin
        if(tag6[index] == tag) begin
            hit6 = 1'b1;
        end
        else begin
            hit6 = 1'b0;
        end
    end
    else begin
        hit6 = 1'b0;
    end
end

always@(*) begin
    if(V7[index] == 1'b1) begin
        if(tag7[index] == tag) begin
            hit7 = 1'b1;
        end
        else begin
            hit7 = 1'b0;
        end
    end
    else begin
        hit7 = 1'b0;
    end
end

always@(*) begin
    if(V8[index] == 1'b1) begin
        if(tag8[index] == tag) begin
            hit8 = 1'b1;
        end
        else begin
            hit8 = 1'b0;
        end
    end
    else begin
        hit8 = 1'b0;
    end
end

always@(*) begin
    case(MEM_ctrl)
        `ysyx_041461_MEM_SD: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_SW: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_SH: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b010: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                3'b110: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_SB: begin
            align = 1'b1;
        end
        `ysyx_041461_MEM_LB: begin
            align = 1'b1;
        end
        `ysyx_041461_MEM_LH: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b010: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                3'b110: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_LBU: begin
            align = 1'b1;
        end
        `ysyx_041461_MEM_LHU: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b010: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                3'b110: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_LW: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_LWU: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                3'b100: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        `ysyx_041461_MEM_LD: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    align = 1'b1;
                end
                default: begin
                    align = 1'b0;
                end
            endcase
        end
        default: begin
            align = 1'b1;
        end
    endcase
end

always@(*) begin
    if(MEM_valid_in == 1'b1 && MEM_trap_in == `ysyx_041461_TRAP_NOP && align == 1'b0) begin
        if(load == 1'b1) begin
            MEM_trap_out = `ysyx_041461_MEM_LOAD_MISALIGN;
        end
        else if(store == 1'b1) begin
            MEM_trap_out = `ysyx_041461_MEM_STORE_MISALIGN;
        end
        else begin
            MEM_trap_out = MEM_trap_in;
        end
    end
    else begin
        MEM_trap_out = MEM_trap_in;
    end
end

always@(*) begin
    if(uncached == 1'b1) begin
        MEM_araddr = MEM_EXE_in[31:0];
    end
    else begin
        MEM_araddr = {MEM_EXE_in[31:3], 3'b000};
    end
end

always@(*) begin
    if(uncached == 1'b1) begin
        MEM_awaddr = MEM_EXE_in[31:0];
    end
    else begin
        MEM_awaddr = {MEM_EXE_in[31:3], 3'b000};
    end
end

always@(*) begin
    if(uncached == 1'b1) begin
        case(MEM_ctrl)
            `ysyx_041461_MEM_LB: begin
                MEM_arsize = 3'b000;
            end
            `ysyx_041461_MEM_LH: begin
                MEM_arsize = 3'b001;
            end
            `ysyx_041461_MEM_LBU: begin
                MEM_arsize = 3'b000;
            end
            `ysyx_041461_MEM_LHU: begin
                MEM_arsize = 3'b001;
            end
            `ysyx_041461_MEM_LW: begin
                MEM_arsize = 3'b010;
            end
            `ysyx_041461_MEM_LWU: begin
                MEM_arsize = 3'b010;
            end
            `ysyx_041461_MEM_LD: begin
                MEM_arsize = 3'b011;
            end
            default: begin
                MEM_arsize = 3'b000;
            end
        endcase
    end
    else begin
        MEM_arsize = 3'b011;
    end
end

always@(*) begin
    if(uncached == 1'b1) begin
        case(MEM_ctrl)
            `ysyx_041461_MEM_SD: begin
                MEM_awsize = 3'b011;
            end
            `ysyx_041461_MEM_SW: begin
                MEM_awsize = 3'b010;
            end
            `ysyx_041461_MEM_SH: begin
                MEM_awsize = 3'b001;
            end
            `ysyx_041461_MEM_SB: begin
                MEM_awsize = 3'b000;
            end
            default: begin
                MEM_awsize = 3'b000;
            end
        endcase
    end
    else begin
        MEM_awsize = 3'b011;
    end
end

assign MEM_arid = MEM_AXI_id;
assign MEM_arlen = 8'd0;
assign MEM_arburst = FIXED;

assign MEM_awid = MEM_AXI_id;
assign MEM_awlen = 8'd0;
assign MEM_awburst = FIXED;

always@(*) begin
    case(MEM_ctrl)
        `ysyx_041461_MEM_SD: begin
            MEM_wstrb = 8'b1111_1111;
            MEM_wdata = MEM_rs2_data;
        end
        `ysyx_041461_MEM_SW: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    MEM_wstrb = 8'b0000_1111;
                    MEM_wdata = MEM_rs2_data;
                end
                3'b100: begin
                    MEM_wstrb = 8'b1111_0000;
                    MEM_wdata = MEM_rs2_data << 6'd32;
                end
                default: begin
                    MEM_wstrb = 8'b0000_0000;
                    MEM_wdata = MEM_rs2_data;
                end
            endcase
        end
        `ysyx_041461_MEM_SH: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    MEM_wstrb = 8'b0000_0011;
                    MEM_wdata = MEM_rs2_data;
                end
                3'b010: begin
                    MEM_wstrb = 8'b0000_1100;
                    MEM_wdata = MEM_rs2_data << 6'd16;
                end
                3'b100: begin
                    MEM_wstrb = 8'b0011_0000;
                    MEM_wdata = MEM_rs2_data << 6'd32;
                end
                3'b110: begin
                    MEM_wstrb = 8'b1100_0000;
                    MEM_wdata = MEM_rs2_data << 6'd48;
                end
                default: begin
                    MEM_wstrb = 8'b0000_0000;
                    MEM_wdata = MEM_rs2_data;
                end
            endcase
        end
        `ysyx_041461_MEM_SB: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    MEM_wstrb = 8'b0000_0001;
                    MEM_wdata = MEM_rs2_data;
                end
                3'b001: begin
                    MEM_wstrb = 8'b0000_0010;
                    MEM_wdata = MEM_rs2_data << 6'd8;
                end
                3'b010: begin
                    MEM_wstrb = 8'b0000_0100;
                    MEM_wdata = MEM_rs2_data << 6'd16;
                end
                3'b011: begin
                    MEM_wstrb = 8'b0000_1000;
                    MEM_wdata = MEM_rs2_data << 6'd24;
                end
                3'b100: begin
                    MEM_wstrb = 8'b0001_0000;
                    MEM_wdata = MEM_rs2_data << 6'd32;
                end
                3'b101: begin
                    MEM_wstrb = 8'b0010_0000;
                    MEM_wdata = MEM_rs2_data << 6'd40;
                end
                3'b110: begin
                    MEM_wstrb = 8'b0100_0000;
                    MEM_wdata = MEM_rs2_data << 6'd48;
                end
                3'b111: begin
                    MEM_wstrb = 8'b1000_0000;
                    MEM_wdata = MEM_rs2_data << 6'd56;
                end
            endcase
        end
        default: begin
            MEM_wstrb = 8'b0000_0000;
            MEM_wdata = MEM_rs2_data;
        end
    endcase
end


always@(*) begin
    if(state == `ysyx_041461_MEM_RAXI_AR) begin
        MEM_arvalid = 1'b1;
    end
    else begin
        MEM_arvalid = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_RAXI_R) begin
        MEM_rready = 1'b1;
    end
    else begin
        MEM_rready = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_RAXI_R) begin
        AXI_rdata_next = MEM_rdata;
    end
    else begin
        AXI_rdata_next = AXI_rdata;
    end 
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        AXI_rdata <= 64'b0;
    end
    else begin
        AXI_rdata <= AXI_rdata_next;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_WAXI_AW) begin
        MEM_awvalid = 1'b1;
    end
    else begin
        MEM_awvalid = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_WAXI_W) begin
        MEM_wvalid = 1'b1;
        MEM_wlast = 1'b1;
    end
    else begin
        MEM_wvalid = 1'b0;
        MEM_wlast = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_WAXI_B) begin
        MEM_bready = 1'b1;
    end
    else begin
        MEM_bready = 1'b0;
    end
end

integer n;
always@(*) begin
    for(n = 0; n < 64; n = n + 1) begin
        PLRU_tree_next[n] = PLRU_tree[n];
    end
    if(state == `ysyx_041461_MEM_RCACHE) begin
        if(hit1 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b1;
            PLRU_tree_next[index][1:1] = 1'b1;
            PLRU_tree_next[index][3:3] = 1'b1;
        end
        else if(hit2 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b1;
            PLRU_tree_next[index][1:1] = 1'b1;
            PLRU_tree_next[index][3:3] = 1'b0;
        end
        else if(hit3 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b1;
            PLRU_tree_next[index][1:1] = 1'b0;
            PLRU_tree_next[index][4:4] = 1'b1;
        end
        else if(hit4 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b1;
            PLRU_tree_next[index][1:1] = 1'b0;
            PLRU_tree_next[index][4:4] = 1'b0;
        end
        else if(hit5 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b0;
            PLRU_tree_next[index][2:2] = 1'b1;
            PLRU_tree_next[index][5:5] = 1'b1;
        end
        else if(hit6 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b0;
            PLRU_tree_next[index][2:2] = 1'b1;
            PLRU_tree_next[index][5:5] = 1'b0;
        end
        else if(hit7 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b0;
            PLRU_tree_next[index][2:2] = 1'b0;
            PLRU_tree_next[index][6:6] = 1'b1;
        end
        else if(hit8 == 1'b1) begin
            PLRU_tree_next[index][0:0] = 1'b0;
            PLRU_tree_next[index][2:2] = 1'b0;
            PLRU_tree_next[index][6:6] = 1'b0;
        end
    end
end

integer r;
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        for(r = 0; r < 64; r = r + 1) begin
            PLRU_tree[r] <= 7'b0;
        end
    end
    else begin
        for(r = 0; r < 64; r = r + 1) begin
            PLRU_tree[r] <= PLRU_tree_next[r];
        end
    end
end

always@(*) begin
    if(PLRU_tree[index][0:0] == 1'b0) begin
        if(PLRU_tree[index][1:1] == 1'b0) begin
            if(PLRU_tree[index][3:3] == 1'b0) begin
                replace_line = 3'b000;
            end
            else begin
                replace_line = 3'b001;
            end
        end
        else begin
            if(PLRU_tree[index][4:4] == 1'b0) begin 
                replace_line = 3'b010;
            end
            else begin
                replace_line = 3'b011;
            end
        end
    end
    else begin
        if(PLRU_tree[index][2:2] == 1'b0) begin
            if(PLRU_tree[index][5:5] == 1'b0) begin
                replace_line = 3'b100;
            end
            else begin
                replace_line = 3'b101;
            end
        end
        else begin
            if(PLRU_tree[index][6:6] == 1'b0) begin 
                replace_line = 3'b110;
            end
            else begin
                replace_line = 3'b111;
            end
        end
    end
end

integer i;
always@(*) begin
    for(i = 0; i < 64; i = i + 1) begin
        V1_next[i] = V1[i];
        V2_next[i] = V2[i];
        V3_next[i] = V3[i];
        V4_next[i] = V4[i];
        V5_next[i] = V5[i];
        V6_next[i] = V6[i];
        V7_next[i] = V7[i];
        V8_next[i] = V8[i];
        tag1_next[i] = tag1[i];
        tag2_next[i] = tag2[i];
        tag3_next[i] = tag3[i];
        tag4_next[i] = tag4[i];
        tag5_next[i] = tag5[i];
        tag6_next[i] = tag6[i];
        tag7_next[i] = tag7[i];
        tag8_next[i] = tag8[i];
    end
    if(state == `ysyx_041461_MEM_WCACHE) begin
        if(load == 1'b1) begin
            if(V1[index] == 1'b0) begin
                V1_next[index] = 1'b1;
                tag1_next[index] = tag;
            end
            else if(V2[index] == 1'b0) begin
                V2_next[index] = 1'b1;
                tag2_next[index] = tag;
            end
            else if(V3[index] == 1'b0) begin
                V3_next[index] = 1'b1;
                tag3_next[index] = tag;
            end
            else if(V4[index] == 1'b0) begin
                V4_next[index] = 1'b1;
                tag4_next[index] = tag;
            end
            else if(V5[index] == 1'b0) begin
                V5_next[index] = 1'b1;
                tag5_next[index] = tag;
            end
            else if(V6[index] == 1'b0) begin
                V6_next[index] = 1'b1;
                tag6_next[index] = tag;
            end
            else if(V7[index] == 1'b0) begin
                V7_next[index] = 1'b1;
                tag7_next[index] = tag;
            end
            else if(V8[index] == 1'b0) begin
                V8_next[index] = 1'b1;
                tag8_next[index] = tag;
            end
            else begin
                case(replace_line)
                3'b000: begin
                    tag1_next[index] = tag;
                end
                3'b001: begin
                    tag2_next[index] = tag;
                end
                3'b010: begin
                    tag3_next[index] = tag;
                end
                3'b011: begin
                    tag4_next[index] = tag;
                end
                3'b100: begin
                    tag5_next[index] = tag;
                end
                3'b101: begin
                    tag6_next[index] = tag;
                end
                3'b110: begin
                    tag7_next[index] = tag;
                end
                3'b111: begin
                    tag8_next[index] = tag;
                end
            endcase
            end
        end
    end
end

integer k;
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        for(k = 0; k < 64; k = k + 1) begin
            V1[k] <= 1'b0;
            V2[k] <= 1'b0;
            V3[k] <= 1'b0;
            V4[k] <= 1'b0;
            V5[k] <= 1'b0;
            V6[k] <= 1'b0;
            V7[k] <= 1'b0;
            V8[k] <= 1'b0;
            tag1[k] <= 55'b0;
            tag2[k] <= 55'b0;
            tag3[k] <= 55'b0;
            tag4[k] <= 55'b0;
            tag5[k] <= 55'b0;
            tag6[k] <= 55'b0;
            tag7[k] <= 55'b0;
            tag8[k] <= 55'b0;
        end
    end
    else begin
        for(k = 0; k < 64; k = k + 1) begin
           V1[k] <= V1_next[k];
           V2[k] <= V2_next[k];
           V3[k] <= V3_next[k];
           V4[k] <= V4_next[k];
           V5[k] <= V5_next[k];
           V6[k] <= V6_next[k];
           V7[k] <= V7_next[k];
           V8[k] <= V8_next[k];
           tag1[k] <= tag1_next[k];
           tag2[k] <= tag2_next[k];
           tag3[k] <= tag3_next[k];
           tag4[k] <= tag4_next[k];
           tag5[k] <= tag5_next[k];
           tag6[k] <= tag6_next[k];
           tag7[k] <= tag7_next[k];
           tag8[k] <= tag8_next[k];
        end
    end
end

assign MEM_sram4_addr = index;
assign MEM_sram5_addr = index;
assign MEM_sram6_addr = index;
assign MEM_sram7_addr = index;

assign MEM_sram4_cen = 1'b0;
assign MEM_sram5_cen = 1'b0;
assign MEM_sram6_cen = 1'b0;
assign MEM_sram7_cen = 1'b0;

reg [63:0]  cache_wmask;

always@(*) begin
    case(MEM_ctrl)
        `ysyx_041461_MEM_SD: begin
            cache_wmask = 64'h0000_0000_0000_0000;
        end
        `ysyx_041461_MEM_SW: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    cache_wmask = 64'hffff_ffff_0000_0000;
                end
                3'b100: begin
                    cache_wmask = 64'h0000_0000_ffff_ffff;
                end
                default: begin
                    cache_wmask = 64'hffff_ffff_ffff_ffff;
                end
            endcase
        end
        `ysyx_041461_MEM_SH: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    cache_wmask = 64'hffff_ffff_ffff_0000;
                end
                3'b010: begin
                    cache_wmask = 64'hffff_ffff_0000_ffff;
                end
                3'b100: begin
                    cache_wmask = 64'hffff_0000_ffff_ffff;
                end
                3'b110: begin
                    cache_wmask = 64'h0000_ffff_ffff_ffff;
                end
                default: begin
                    cache_wmask = 64'hffff_ffff_ffff_ffff;
                end
            endcase
        end
        `ysyx_041461_MEM_SB: begin
            case(MEM_EXE_in[2:0])
                3'b000: begin
                    cache_wmask = 64'hffff_ffff_ffff_ff00;
                end
                3'b001: begin
                    cache_wmask = 64'hffff_ffff_ffff_00ff;
                end
                3'b010: begin
                    cache_wmask = 64'hffff_ffff_ff00_ffff;
                end
                3'b011: begin
                    cache_wmask = 64'hffff_ffff_00ff_ffff;
                end
                3'b100: begin
                    cache_wmask = 64'hffff_ff00_ffff_ffff;
                end
                3'b101: begin
                    cache_wmask = 64'hffff_00ff_ffff_ffff;
                end
                3'b110: begin
                    cache_wmask = 64'hff00_ffff_ffff_ffff;
                end
                3'b111: begin
                    cache_wmask = 64'h00ff_ffff_ffff_ffff;
                end
            endcase
        end
        default: begin
            cache_wmask = 64'hffff_ffff_ffff_ffff;
        end
    endcase
end

reg [63:0]  cache_wdata;

always@(*) begin
    if(load == 1'b1) begin
        cache_wdata = AXI_rdata;
    end
    else if(store == 1'b1) begin
        case(MEM_ctrl)
            `ysyx_041461_MEM_SD: begin
                cache_wdata = MEM_rs2_data;
            end
            `ysyx_041461_MEM_SW: begin
                case(MEM_EXE_in[2:0])
                    3'b000: begin
                        cache_wdata = MEM_rs2_data;
                    end
                    3'b100: begin
                        cache_wdata = MEM_rs2_data << 6'd32;
                    end
                    default: begin
                        cache_wdata = MEM_rs2_data;
                    end
                endcase
            end
            `ysyx_041461_MEM_SH: begin
                case(MEM_EXE_in[2:0])
                    3'b000: begin
                        cache_wdata = MEM_rs2_data;
                    end
                    3'b010: begin
                        cache_wdata = MEM_rs2_data << 6'd16;
                    end
                    3'b100: begin
                        cache_wdata = MEM_rs2_data << 6'd32;
                    end
                    3'b110: begin
                        cache_wdata = MEM_rs2_data << 6'd48;
                    end
                    default: begin
                        cache_wdata = MEM_rs2_data;
                    end
                endcase
            end
            `ysyx_041461_MEM_SB: begin
                case(MEM_EXE_in[2:0])
                    3'b000: begin
                        cache_wdata = MEM_rs2_data;
                    end
                    3'b001: begin
                        cache_wdata = MEM_rs2_data << 6'd8;
                    end
                    3'b010: begin
                        cache_wdata = MEM_rs2_data << 6'd16;
                    end
                    3'b011: begin
                        cache_wdata = MEM_rs2_data << 6'd24;
                    end
                    3'b100: begin
                        cache_wdata = MEM_rs2_data << 6'd32;
                    end
                    3'b101: begin
                        cache_wdata = MEM_rs2_data << 6'd40;
                    end
                    3'b110: begin
                        cache_wdata = MEM_rs2_data << 6'd48;
                    end
                    3'b111: begin
                        cache_wdata = MEM_rs2_data << 6'd56;
                    end
                endcase
            end
            default: begin
                cache_wdata = MEM_rs2_data;
            end
        endcase
    end
    else begin
        cache_wdata = 64'b0;
    end
end


always@(*) begin
    MEM_sram4_wen = 1'b1;
    MEM_sram4_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    MEM_sram4_wdata = 128'b0;
    MEM_sram5_wen = 1'b1;
    MEM_sram5_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    MEM_sram5_wdata = 128'b0;
    MEM_sram6_wen = 1'b1;
    MEM_sram6_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    MEM_sram6_wdata = 128'b0;
    MEM_sram7_wen = 1'b1;
    MEM_sram7_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    MEM_sram7_wdata = 128'b0;
    if(state == `ysyx_041461_MEM_WCACHE) begin
        if(load == 1'b1) begin
            if(V1[index] == 1'b0) begin
                MEM_sram4_wen = 1'b0;
                MEM_sram4_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                MEM_sram4_wdata = {64'b0, cache_wdata};
            end
            else if(V2[index] == 1'b0) begin
                MEM_sram4_wen = 1'b0;
                MEM_sram4_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                MEM_sram4_wdata = {cache_wdata, 64'b0};
            end
            else if(V3[index] == 1'b0) begin
                MEM_sram5_wen = 1'b0;
                MEM_sram5_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                MEM_sram5_wdata = {64'b0, cache_wdata};
            end
            else if(V4[index] == 1'b0) begin
                MEM_sram5_wen = 1'b0;
                MEM_sram5_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                MEM_sram5_wdata = {cache_wdata, 64'b0};
            end
            else if(V5[index] == 1'b0) begin
                MEM_sram6_wen = 1'b0;
                MEM_sram6_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                MEM_sram6_wdata = {64'b0, cache_wdata};
            end
            else if(V6[index] == 1'b0) begin
                MEM_sram6_wen = 1'b0;
                MEM_sram6_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                MEM_sram6_wdata = {cache_wdata, 64'b0};
            end
            else if(V7[index] == 1'b0) begin
                MEM_sram7_wen = 1'b0;
                MEM_sram7_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                MEM_sram7_wdata = {64'b0, cache_wdata};
            end
            else if(V8[index] == 1'b0) begin
                MEM_sram7_wen = 1'b0;
                MEM_sram7_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                MEM_sram7_wdata = {cache_wdata, 64'b0};
            end
            else begin
                case(replace_line)
                    3'b000: begin
                        MEM_sram4_wen = 1'b0;
                        MEM_sram4_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                        MEM_sram4_wdata = {64'b0, cache_wdata};
                    end
                    3'b001: begin
                        MEM_sram4_wen = 1'b0;
                        MEM_sram4_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                        MEM_sram4_wdata = {cache_wdata, 64'b0};
                    end
                    3'b010: begin
                        MEM_sram5_wen = 1'b0;
                        MEM_sram5_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                        MEM_sram5_wdata = {64'b0, cache_wdata};
                    end
                    3'b011: begin
                        MEM_sram5_wen = 1'b0;
                        MEM_sram5_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                        MEM_sram5_wdata = {cache_wdata, 64'b0};
                    end
                    3'b100: begin
                        MEM_sram6_wen = 1'b0;
                        MEM_sram6_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                        MEM_sram6_wdata = {64'b0, cache_wdata};
                    end
                    3'b101: begin
                        MEM_sram6_wen = 1'b0;
                        MEM_sram6_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                        MEM_sram6_wdata = {cache_wdata, 64'b0};
                    end
                    3'b110: begin
                        MEM_sram7_wen = 1'b0;
                        MEM_sram7_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                        MEM_sram7_wdata = {64'b0, cache_wdata};
                    end
                    3'b111: begin
                        MEM_sram7_wen = 1'b0;
                        MEM_sram7_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                        MEM_sram7_wdata = {cache_wdata, 64'b0};
                    end
                endcase
            end
        end
        else if(store == 1'b1) begin
            if(hit1 == 1'b1) begin
                MEM_sram4_wen = 1'b0;
                MEM_sram4_wmask = {64'hffff_ffff_ffff_ffff, cache_wmask};
                MEM_sram4_wdata = {64'b0, cache_wdata};
            end
            else if(hit2 == 1'b1) begin
                MEM_sram4_wen = 1'b0;
                MEM_sram4_wmask = {cache_wmask, 64'hffff_ffff_ffff_ffff};
                MEM_sram4_wdata = {cache_wdata, 64'b0};
            end
            else if(hit3 == 1'b1) begin
                MEM_sram5_wen = 1'b0;
                MEM_sram5_wmask = {64'hffff_ffff_ffff_ffff, cache_wmask};
                MEM_sram5_wdata = {64'b0, cache_wdata};
            end
            else if(hit4 == 1'b1) begin
                MEM_sram5_wen = 1'b0;
                MEM_sram5_wmask = {cache_wmask, 64'hffff_ffff_ffff_ffff};
                MEM_sram5_wdata = {cache_wdata, 64'b0};
            end
            else if(hit5 == 1'b1) begin
                MEM_sram6_wen = 1'b0;
                MEM_sram6_wmask = {64'hffff_ffff_ffff_ffff, cache_wmask};
                MEM_sram6_wdata = {64'b0, cache_wdata};
            end
            else if(hit6 == 1'b1) begin
                MEM_sram6_wen = 1'b0;
                MEM_sram6_wmask = {cache_wmask, 64'hffff_ffff_ffff_ffff};
                MEM_sram6_wdata = {cache_wdata, 64'b0};
            end
            else if(hit7 == 1'b1) begin
                MEM_sram7_wen = 1'b0;
                MEM_sram7_wmask = {64'hffff_ffff_ffff_ffff, cache_wmask};
                MEM_sram7_wdata = {64'b0, cache_wdata};
            end
            else if(hit8 == 1'b1) begin
                MEM_sram7_wen = 1'b0;
                MEM_sram7_wmask = {cache_wmask, 64'hffff_ffff_ffff_ffff};
                MEM_sram7_wdata = {cache_wdata, 64'b0};
            end
        end
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_START) begin
        if(MEM_valid_in == 1'b1 && MEM_trap_out == `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0 && MEM_conflict == 1'b0) begin
            if(MEM_ctrl == `ysyx_041461_MEM_NOP) begin
                if(MEM_WB_ready == 1'b1) begin
                    MEM_ready = 1'b1;
                end
                else begin
                    MEM_ready = 1'b0;
                end
            end
            else begin
                MEM_ready = 1'b0;
            end
        end
        else if(MEM_valid_in == 1'b1 && MEM_trap_out == `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0 && MEM_conflict == 1'b1) begin
            MEM_ready = 1'b0;
        end
        else if(MEM_valid_in == 1'b1 && MEM_trap_out != `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0) begin
            if(MEM_WB_ready == 1'b1) begin
                MEM_ready = 1'b1;
            end
            else begin
                MEM_ready = 1'b0;
            end
        end
        else begin
            MEM_ready = 1'b1;
        end
    end
    else if(state == `ysyx_041461_MEM_FINISH) begin
        if(MEM_WB_ready == 1'b1) begin
            MEM_ready = 1'b1;
        end
        else begin
            MEM_ready = 1'b0;
        end
    end
    else begin
        MEM_ready = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_MEM_START) begin
        if(MEM_valid_in == 1'b1 && MEM_trap_out == `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0 && MEM_conflict == 1'b0) begin
            if(MEM_ctrl == `ysyx_041461_MEM_NOP) begin
                MEM_valid_out = 1'b1;
            end
            else begin
                MEM_valid_out = 1'b0;
            end
        end
        else if(MEM_valid_in == 1'b1 && MEM_trap_out == `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0 && MEM_conflict == 1'b1) begin
            MEM_valid_out = 1'b0;
        end
        else if(MEM_valid_in == 1'b1 && MEM_trap_out != `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0) begin
            MEM_valid_out = 1'b1;
        end
        else begin
            MEM_valid_out = 1'b0;
        end
    end
    else if(state == `ysyx_041461_MEM_FINISH) begin
        if(MEM_CD_trap == 1'b1) begin
            MEM_valid_out = 1'b0;
        end
        else begin
            MEM_valid_out = 1'b1;
        end
    end
    else begin
        MEM_valid_out = 1'b0;
    end
end


reg [63:0]  rdata;
reg [63:0]  rrdata;

always@(*) begin
    if(uncached == 1'b1) begin
        rdata = AXI_rdata;
    end
    else begin
        if(hit1 == 1'b1) begin
            rdata = MEM_sram4_rdata[63:0];
        end
        else if(hit2 == 1'b1) begin
            rdata = MEM_sram4_rdata[127:64];
        end
        else if(hit3 == 1'b1) begin
            rdata = MEM_sram5_rdata[63:0];
        end
        else if(hit4 == 1'b1) begin
            rdata = MEM_sram5_rdata[127:64];
        end
        else if(hit5 == 1'b1) begin
            rdata = MEM_sram6_rdata[63:0];
        end
        else if(hit6 == 1'b1) begin
            rdata = MEM_sram6_rdata[127:64];
        end
        else if(hit7 == 1'b1) begin
            rdata = MEM_sram7_rdata[63:0];
        end
        else if(hit8 == 1'b1) begin
            rdata = MEM_sram7_rdata[127:64];
        end
        else begin
            rdata = 64'd0;
        end
    end
end

always@(*) begin
    case(MEM_EXE_in[2:0])
        3'b000: begin
            rrdata = rdata;
        end
        3'b001: begin
            rrdata = rdata >> 6'd8;
        end
        3'b010: begin
            rrdata = rdata >> 6'd16;
        end
        3'b011: begin
            rrdata = rdata >> 6'd24;
        end
        3'b100: begin
            rrdata = rdata >> 6'd32;
        end
        3'b101: begin
            rrdata = rdata >> 6'd40;
        end
        3'b110: begin
            rrdata = rdata >> 6'd48;
        end
        3'b111: begin
            rrdata = rdata >> 6'd56;
        end
    endcase
end

 
always@(*) begin
    case(MEM_ctrl)
        `ysyx_041461_MEM_LB: begin
            MEM_out = {{56{rrdata[7:7]}}, rrdata[7:0]};
        end
        `ysyx_041461_MEM_LH: begin
            MEM_out = {{48{rrdata[15:15]}}, rrdata[15:0]};
        end
        `ysyx_041461_MEM_LBU: begin
            MEM_out = {56'b0, rrdata[7:0]};
        end
        `ysyx_041461_MEM_LHU: begin
            MEM_out = {48'b0, rrdata[15:0]};
        end
        `ysyx_041461_MEM_LW: begin
            MEM_out = {{32{rrdata[31:31]}}, rrdata[31:0]};
        end
        `ysyx_041461_MEM_LWU: begin
            MEM_out = {32'b0, rrdata[31:0]};
        end
        `ysyx_041461_MEM_LD: begin
            MEM_out = rrdata;
        end
        default: begin
            MEM_out = 64'b0;
        end
    endcase
end




always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= `ysyx_041461_MEM_START;
    end
    else begin
        case(state)
            `ysyx_041461_MEM_START: begin
                if(MEM_valid_in == 1'b1 && MEM_trap_out == `ysyx_041461_TRAP_NOP && MEM_CD_trap == 1'b0 && MEM_conflict == 1'b0) begin
                    if(load == 1'b1) begin
                        if(uncached == 1'b1) begin
                            state <= `ysyx_041461_MEM_RAXI_AR;
                        end
                        else begin
                            if(hit == 1'b1) begin
                                state <= `ysyx_041461_MEM_RCACHE;
                            end
                            else begin
                                state <= `ysyx_041461_MEM_RAXI_AR;
                            end
                        end
                    end
                    else if(store == 1'b1) begin
                        state <= `ysyx_041461_MEM_WAXI_AW;
                    end
                    else begin
                        state <= state;
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_RCACHE: begin
                state <= `ysyx_041461_MEM_FINISH;
            end
            `ysyx_041461_MEM_RAXI_AR: begin
                if(MEM_arready == 1'b1) begin
                    state <= `ysyx_041461_MEM_RAXI_R;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_RAXI_R: begin
                if(MEM_rvalid == 1'b1 && MEM_rid == MEM_AXI_id && MEM_rlast == 1'b1 && (MEM_rresp == OKAY || MEM_rresp == EXOKAY)) begin
                    if(uncached == 1'b1) begin
                        state <= `ysyx_041461_MEM_FINISH;
                    end
                    else begin
                        state <= `ysyx_041461_MEM_WCACHE;
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_WCACHE: begin
                if(store == 1'b1) begin
                    state <= `ysyx_041461_MEM_FINISH;
                end
                else if(load == 1'b1) begin
                    state <= `ysyx_041461_MEM_RCACHE;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_WAXI_AW: begin
                if(MEM_awready == 1'b1) begin
                    state <= `ysyx_041461_MEM_WAXI_W;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_WAXI_W: begin
                if(MEM_wready == 1'b1) begin
                    state <= `ysyx_041461_MEM_WAXI_B;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_WAXI_B: begin
                if(MEM_bvalid == 1'b1 && (MEM_bresp == OKAY || MEM_bresp == EXOKAY) && MEM_bid == MEM_AXI_id) begin
                    if(hit == 1'b1) begin
                        state <= `ysyx_041461_MEM_WCACHE;
                    end
                    else begin
                        state <= `ysyx_041461_MEM_FINISH;
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_MEM_FINISH: begin
                if(MEM_WB_ready == 1'b1 || MEM_CD_trap == 1'b1) begin
                    state <= `ysyx_041461_MEM_START;
                end
                else begin
                    state <= state;
                end
            end
            default: begin
                state <= `ysyx_041461_MEM_START;
            end
        endcase
    end      
end

//difftest
always@(*) begin
    if(uncached == 1'b1 && state == `ysyx_041461_MEM_FINISH) begin
        MEM_skip_difftest = 1'b1;
    end
    else begin
        MEM_skip_difftest = 1'b0;
    end
end

endmodule
