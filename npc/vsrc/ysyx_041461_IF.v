`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_041461_macro.v"

module ysyx_041461_IF(

    input   wire [0:0]    clk                  ,
    input   wire [0:0]    rst                  ,
    input   wire [63:0]   IF_pc                ,
    input   wire [63:0]   IF_mstatus           ,
    input   wire [63:0]   IF_mie               ,
    input   wire [63:0]   IF_mip               ,
    input   wire [2:0]    IF_ID_TYPE           ,
    input   wire [0:0]    IF_ID_ready          ,
    input   wire [3:0]    IF_ID_trap           ,
    input   wire [3:0]    IF_EXE_trap          ,
    input   wire [3:0]    IF_MEM_trap          ,
    input   wire [3:0]    IF_WB_trap           ,
  
    output  reg  [3:0]    IF_trap_out          ,
    output  reg  [0:0]    IF_valid_out         ,
    output  reg  [0:0]    IF_ready             ,
    output  reg  [31:0]   IF_inst              ,
       
    input   wire [0:0]    IF_arready           ,
    output  reg  [0:0]    IF_arvalid           ,
    output  reg  [31:0]   IF_araddr            ,
    output  reg  [3:0]    IF_arid              ,
    output  reg  [7:0]    IF_arlen             ,
    output  reg  [2:0]    IF_arsize            ,
    output  reg  [1:0]    IF_arburst           ,
         
    output  reg  [0:0]    IF_rready            ,
    input   wire [0:0]    IF_rvalid            ,
    input   wire [1:0]    IF_rresp             ,
    input   wire [63:0]   IF_rdata             ,
    input   wire [0:0]    IF_rlast             ,
    input   wire [3:0]    IF_rid               ,
   
    output  wire [5:0]    IF_sram0_addr        , 
    output  reg  [0:0]    IF_sram0_cen         , 
    output  reg  [0:0]    IF_sram0_wen         , 
    output  reg  [127:0]  IF_sram0_wmask       , 
    output  reg  [127:0]  IF_sram0_wdata       , 
    input   wire [127:0]  IF_sram0_rdata       ,
   
    output  wire [5:0]    IF_sram1_addr        , 
    output  reg  [0:0]    IF_sram1_cen         , 
    output  reg  [0:0]    IF_sram1_wen         , 
    output  reg  [127:0]  IF_sram1_wmask       , 
    output  reg  [127:0]  IF_sram1_wdata       , 
    input   wire [127:0]  IF_sram1_rdata       ,
   
    output  wire [5:0]    IF_sram2_addr        , 
    output  reg  [0:0]    IF_sram2_cen         , 
    output  reg  [0:0]    IF_sram2_wen         , 
    output  reg  [127:0]  IF_sram2_wmask       , 
    output  reg  [127:0]  IF_sram2_wdata       , 
    input   wire [127:0]  IF_sram2_rdata       ,
   
    output  wire [5:0]    IF_sram3_addr        , 
    output  reg  [0:0]    IF_sram3_cen         , 
    output  reg  [0:0]    IF_sram3_wen         , 
    output  reg  [127:0]  IF_sram3_wmask       , 
    output  reg  [127:0]  IF_sram3_wdata       , 
    input   wire [127:0]  IF_sram3_rdata 
);

parameter IF_AXI_id = 4'b0000;

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
parameter SLVERR = 2'b10;
parameter DECERR = 2'b11;

parameter FIXED = 2'b00;
parameter INCR = 2'b01;
parameter WRAP = 2'b10;
parameter Rserved = 2'b11;

assign IF_sram0_addr = index;
assign IF_sram1_addr = index;
assign IF_sram2_addr = index;
assign IF_sram3_addr = index;
assign IF_sram0_cen  = 1'b0;
assign IF_sram1_cen  = 1'b0;
assign IF_sram2_cen  = 1'b0;
assign IF_sram3_cen  = 1'b0;

reg  [2:0]   state;

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

reg  [0:0]   uncached;

reg  [6:0]   PLRU_tree       [63:0];
reg  [6:0]   PLRU_tree_next  [63:0];
reg  [2:0]   replace_line;


assign index = IF_pc[8:3];
assign offset = IF_pc[2:0];
assign tag = IF_pc[63:9];

assign hit = hit1 || hit2 || hit3 || hit4 || hit5 || hit6 || hit7 || hit8;

wire [0:0]   mie_MTIE;
wire [0:0]   mip_MTIP;
wire [0:0]   mstatus_MIE;

assign mie_MTIE = IF_mie[7:7];
assign mip_MTIP = IF_mip[7:7];
assign mstatus_MIE = IF_mstatus[3:3];


always@(*) begin
    if(IF_ID_TYPE == `ysyx_041461_TYPE_NOP) begin
        if(mie_MTIE == 1'b1 && mip_MTIP == 1'b1 && mstatus_MIE == 1'b1) begin
            IF_trap_out = `ysyx_041461_TIMER_INTERRUPT;
        end
        else if(IF_pc[1:0] != 2'b00) begin
            IF_trap_out = `ysyx_041461_IF_MISALIGN;
        end
        else begin
            IF_trap_out = `ysyx_041461_TRAP_NOP;
        end
    end
    else begin
        IF_trap_out = `ysyx_041461_TRAP_NOP;
    end
end

//在运行pa程序时，需判断地址大小，运行soc程序时只需判断一位
//SOC
/*
always@(*) begin
    if(IF_pc[31:31] == 1'b1) begin
        uncached = 1'b0;
    end
    else begin
        uncached = 1'b1;
    end
end
*/

//PA
always@(*) begin
    if(IF_pc[31:0] >= 32'h8000_0000 && IF_pc[31:0] < 32'h8800_0000) begin
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

integer n;
always@(*) begin
    for(n = 0; n < 64; n = n + 1) begin
        PLRU_tree_next[n] = PLRU_tree[n];
    end
    if(state == `ysyx_041461_IF_RCACHE) begin
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

always@(*) begin
    IF_sram0_wen = 1'b1;
    IF_sram0_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    IF_sram0_wdata = 128'b0;
    IF_sram1_wen = 1'b1;
    IF_sram1_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    IF_sram1_wdata = 128'b0;
    IF_sram2_wen = 1'b1;
    IF_sram2_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    IF_sram2_wdata = 128'b0;
    IF_sram3_wen = 1'b1;
    IF_sram3_wmask = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;
    IF_sram3_wdata = 128'b0;
    if(state == `ysyx_041461_IF_WCACHE) begin
        if(V1[index] == 1'b0) begin
            IF_sram0_wen = 1'b0;
            IF_sram0_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
            IF_sram0_wdata = {64'b0, AXI_rdata};
        end
        else if(V2[index] == 1'b0) begin
            IF_sram0_wen = 1'b0;
            IF_sram0_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
            IF_sram0_wdata = {AXI_rdata, 64'b0};
        end
        else if(V3[index] == 1'b0) begin
            IF_sram1_wen = 1'b0;
            IF_sram1_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
            IF_sram1_wdata = {64'b0, AXI_rdata};
        end
        else if(V4[index] == 1'b0) begin
            IF_sram1_wen = 1'b0;
            IF_sram1_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
            IF_sram1_wdata = {AXI_rdata, 64'b0};
        end
        else if(V5[index] == 1'b0) begin
            IF_sram2_wen = 1'b0;
            IF_sram2_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
            IF_sram2_wdata = {64'b0, AXI_rdata};
        end
        else if(V6[index] == 1'b0) begin
            IF_sram2_wen = 1'b0;
            IF_sram2_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
            IF_sram2_wdata = {AXI_rdata, 64'b0};
        end
        else if(V7[index] == 1'b0) begin
            IF_sram3_wen = 1'b0;
            IF_sram3_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
            IF_sram3_wdata = {64'b0, AXI_rdata};
        end
        else if(V8[index] == 1'b0) begin
            IF_sram3_wen = 1'b0;
            IF_sram3_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
            IF_sram3_wdata = {AXI_rdata, 64'b0};
        end
        else begin
            case(replace_line)
                3'b000: begin
                    IF_sram0_wen = 1'b0;
                    IF_sram0_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                    IF_sram0_wdata = {64'b0, AXI_rdata};
                end
                3'b001: begin
                    IF_sram0_wen = 1'b0;
                    IF_sram0_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                    IF_sram0_wdata = {AXI_rdata, 64'b0};
                end
                3'b010: begin
                    IF_sram1_wen = 1'b0;
                    IF_sram1_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                    IF_sram1_wdata = {64'b0, AXI_rdata};
                end
                3'b011: begin
                    IF_sram1_wen = 1'b0;
                    IF_sram1_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                    IF_sram1_wdata = {AXI_rdata, 64'b0};
                end
                3'b100: begin
                    IF_sram2_wen = 1'b0;
                    IF_sram2_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                    IF_sram2_wdata = {64'b0, AXI_rdata};
                end
                3'b101: begin
                    IF_sram2_wen = 1'b0;
                    IF_sram2_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                    IF_sram2_wdata = {AXI_rdata, 64'b0};
                end
                3'b110: begin
                    IF_sram3_wen = 1'b0;
                    IF_sram3_wmask = 128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;
                    IF_sram3_wdata = {64'b0, AXI_rdata};
                end
                3'b111: begin
                    IF_sram3_wen = 1'b0;
                    IF_sram3_wmask = 128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
                    IF_sram3_wdata = {AXI_rdata, 64'b0};
                end
            endcase
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
    if(state == `ysyx_041461_IF_WCACHE) begin
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
    else if(IF_ID_TYPE == `ysyx_041461_TYPE_FENCE_I) begin
        for(i = 0; i < 64; i = i + 1) begin
            V1_next[i] = 1'b0;
            V2_next[i] = 1'b0;
            V3_next[i] = 1'b0;
            V4_next[i] = 1'b0;
            V5_next[i] = 1'b0;
            V6_next[i] = 1'b0;
            V7_next[i] = 1'b0;
            V8_next[i] = 1'b0;
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

always@(*) begin
    AXI_rdata_next = AXI_rdata;
    if(state == `ysyx_041461_IF_RAXI_R) begin
        AXI_rdata_next = IF_rdata;
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

assign IF_arid = IF_AXI_id;
assign IF_arlen = 8'b0;
assign IF_arburst = FIXED;

always@(*) begin
    if(uncached == 1'b1) begin
        IF_araddr = IF_pc[31:0];
    end
    else begin
        IF_araddr = {IF_pc[31:3], 3'b000};
    end
end

always@(*) begin
    if(uncached == 1'b1) begin
        IF_arsize = 3'b010;
    end
    else begin
        IF_arsize = 3'b011;
    end
end

always@(*) begin
    if(state == `ysyx_041461_IF_RAXI_AR) begin
        IF_arvalid = 1'b1;
    end
    else begin
        IF_arvalid = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_IF_RAXI_R) begin
        IF_rready = 1'b1;
    end
    else begin
        IF_rready = 1'b0;
    end
end


always@(*) begin
    if(state == `ysyx_041461_IF_START) begin
        if(IF_trap_out == `ysyx_041461_TRAP_NOP && IF_ID_TYPE == `ysyx_041461_TYPE_NOP && IF_ID_trap == `ysyx_041461_TRAP_NOP && IF_EXE_trap == `ysyx_041461_TRAP_NOP && IF_MEM_trap == `ysyx_041461_TRAP_NOP && IF_WB_trap == `ysyx_041461_TRAP_NOP) begin
            IF_ready = 1'b0;
        end
        else if(IF_trap_out != `ysyx_041461_TRAP_NOP && IF_ID_TYPE == `ysyx_041461_TYPE_NOP && IF_ID_trap == `ysyx_041461_TRAP_NOP && IF_EXE_trap == `ysyx_041461_TRAP_NOP && IF_MEM_trap == `ysyx_041461_TRAP_NOP && IF_WB_trap == `ysyx_041461_TRAP_NOP) begin
            if(IF_ID_ready == 1'b1) begin
                IF_ready = 1'b1;
            end
            else begin
                IF_ready = 1'b0;
            end
        end
        else begin
            IF_ready = 1'b1;
        end
    end
    else if(state == `ysyx_041461_IF_FINISH) begin
        if(IF_ID_trap != `ysyx_041461_TRAP_NOP || IF_EXE_trap != `ysyx_041461_TRAP_NOP || IF_MEM_trap != `ysyx_041461_TRAP_NOP || IF_WB_trap != `ysyx_041461_TRAP_NOP) begin
            IF_ready = 1'b1;
        end
        else begin
            if(IF_ID_ready == 1'b1) begin
                IF_ready = 1'b1;
            end
            else begin
                IF_ready = 1'b0;
            end
        end
    end
    else begin
        IF_ready = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_IF_START) begin
        if(IF_trap_out == `ysyx_041461_TRAP_NOP && IF_ID_TYPE == `ysyx_041461_TYPE_NOP && IF_ID_trap == `ysyx_041461_TRAP_NOP && IF_EXE_trap == `ysyx_041461_TRAP_NOP && IF_MEM_trap == `ysyx_041461_TRAP_NOP && IF_WB_trap == `ysyx_041461_TRAP_NOP) begin
            IF_valid_out = 1'b0;
        end
        else if(IF_trap_out != `ysyx_041461_TRAP_NOP && IF_ID_TYPE == `ysyx_041461_TYPE_NOP && IF_ID_trap == `ysyx_041461_TRAP_NOP && IF_EXE_trap == `ysyx_041461_TRAP_NOP && IF_MEM_trap == `ysyx_041461_TRAP_NOP && IF_WB_trap == `ysyx_041461_TRAP_NOP) begin
            IF_valid_out = 1'b1;
        end
        else begin
            IF_valid_out = 1'b0;
        end
    end
    else if(state == `ysyx_041461_IF_FINISH) begin
        if(IF_ID_trap != `ysyx_041461_TRAP_NOP || IF_EXE_trap != `ysyx_041461_TRAP_NOP || IF_MEM_trap != `ysyx_041461_TRAP_NOP || IF_WB_trap != `ysyx_041461_TRAP_NOP) begin
            IF_valid_out = 1'b0;
        end
        else begin
            IF_valid_out = 1'b1;
        end
    end
    else begin
        IF_valid_out = 1'b0;
    end
end


always@(*) begin
    if(hit1 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram0_rdata[31:0];
        end
        else begin
            IF_inst = IF_sram0_rdata[63:32];
        end
    end
    else if(hit2 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram0_rdata[95:64];
        end
        else begin
            IF_inst = IF_sram0_rdata[127:96];
        end
    end
    else if(hit3 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram1_rdata[31:0];
        end
        else begin
            IF_inst = IF_sram1_rdata[63:32];
        end
    end
    else if(hit4 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram1_rdata[95:64];
        end
        else begin
            IF_inst = IF_sram1_rdata[127:96];
        end
    end
    else if(hit5 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram2_rdata[31:0];
        end
        else begin
            IF_inst = IF_sram2_rdata[63:32];
        end
    end
    else if(hit6 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram2_rdata[95:64];
        end
        else begin
            IF_inst = IF_sram2_rdata[127:96];
        end
    end
    else if(hit7 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram3_rdata[31:0];
        end
        else begin
            IF_inst = IF_sram3_rdata[63:32];
        end
    end
    else if(hit8 == 1'b1) begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = IF_sram3_rdata[95:64];
        end
        else begin
            IF_inst = IF_sram3_rdata[127:96];
        end
    end
    else begin
        if(IF_pc[2:2] == 1'b0) begin
            IF_inst = AXI_rdata[31:0];
        end
        else begin
            IF_inst = AXI_rdata[63:32];
        end
    end
end




always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= `ysyx_041461_IF_START;
    end
    else begin
        case(state)
            `ysyx_041461_IF_START: begin
                if(IF_trap_out == `ysyx_041461_TRAP_NOP && IF_ID_TYPE == `ysyx_041461_TYPE_NOP && IF_ID_trap == `ysyx_041461_TRAP_NOP && IF_EXE_trap == `ysyx_041461_TRAP_NOP && IF_MEM_trap == `ysyx_041461_TRAP_NOP && IF_WB_trap == `ysyx_041461_TRAP_NOP) begin
                    if(uncached == 1'b1) begin
                        state <= `ysyx_041461_IF_RAXI_AR;
                    end
                    else begin
                        if(hit == 1'b1) begin
                            state <= `ysyx_041461_IF_RCACHE;
                        end
                        else begin
                            state <= `ysyx_041461_IF_RAXI_AR;
                        end
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_IF_RCACHE: begin
                state <= `ysyx_041461_IF_FINISH;
            end
            `ysyx_041461_IF_RAXI_AR: begin
                if(IF_arready == 1'b1) begin
                    state <= `ysyx_041461_IF_RAXI_R;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_IF_RAXI_R: begin
                if(IF_rvalid == 1'b1 && IF_rid == IF_AXI_id && IF_rlast == 1'b1 && (IF_rresp == OKAY || IF_rresp == EXOKAY)) begin
                    if(uncached == 1'b1) begin
                        state <= `ysyx_041461_IF_FINISH;
                    end
                    else begin
                        state <= `ysyx_041461_IF_WCACHE;
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_IF_WCACHE: begin
                state <= `ysyx_041461_IF_RCACHE;
            end
            `ysyx_041461_IF_FINISH: begin
                if(IF_ID_ready == 1'b1) begin
                    state <= `ysyx_041461_IF_START;
                end
                else begin
                    state <= state;
                end
            end
            default: begin
                state <= `ysyx_041461_IF_START;
            end
        endcase
    end      
end


endmodule
