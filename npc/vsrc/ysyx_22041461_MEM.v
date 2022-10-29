`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_MEM(

    input  wire  [0:0]   clk            ,
    input  wire  [0:0]   flush          ,

    input  wire  [0:0]   MEM_valid_in   ,
    input  wire  [0:0]   MEM_valid_fromCD,
    input  wire  [63:0]  MEM_EXE_in     ,
    input  wire  [63:0]  MEM_rs2_data   ,
    input  wire  [3:0]   MEM_ctrl       ,  

    output reg   [0:0]   MEM_valid_out  ,
    output reg   [0:0]   MEM_ok         ,
    output reg   [63:0]  MEM_out        
);


import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte AXI_wmask);

reg  [0:0]  busy;
reg  [0:0]  align;
reg  [1:0]  state;

reg  [63:0]  rdata1;
reg  [63:0]  rdata2;
reg  [63:0]  rdata;
wire [63:0]  addr1;
wire [63:0]  addr2;
reg  [63:0]  wdata1;
reg  [63:0]  wdata2;
reg  [15:0]  wmask;
reg  [7:0]   wmask1;
reg  [7:0]   wmask2;


reg   [0:0]   DCACHE_valid     ;
reg   [63:0]  DCACHE_addr      ;
reg   [63:0]  DCACHE_wdata     ;
reg   [7:0]   DCACHE_mask      ;
reg   [0:0]   DCACHE_wen       ;
wire  [0:0]   DCACHE_valid_out;
wire  [63:0]  DCACHE_rdata    ;



always@(*) begin
    if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP) begin
        busy = 1'b1;
    end
    else begin
        busy = 1'b0;
    end
end

always@(*) begin
    if(MEM_EXE_in[2:0] == 3'b000) begin
        align = 1'b1;
    end
    else begin
        align = 1'b0;
    end
end

assign addr1 = MEM_EXE_in;
assign addr2 = MEM_EXE_in + 64'd8;


always@(*) begin
    case(MEM_ctrl)
        `MEM_SD: begin
            DCACHE_wen = 1'b1;
        end
        `MEM_SW: begin
            DCACHE_wen = 1'b1;
        end
        `MEM_SH: begin
            DCACHE_wen = 1'b1;
        end
        `MEM_SB: begin
            DCACHE_wen = 1'b1;
        end
        default: begin
            DCACHE_wen = 1'b0;
        end
    endcase
end

always@(*) begin
    case(MEM_ctrl)
        `MEM_SD: begin
            wmask = 16'b0000_0000_1111_1111;
        end
        `MEM_SW: begin
            wmask = 16'b0000_0000_0000_1111;
        end
        `MEM_SH: begin
            wmask = 16'b0000_0000_0000_0011;
        end
        `MEM_SB: begin
            wmask = 16'b0000_0000_0000_0001;
        end
        default: begin
            wmask = 16'b0000_0000_0000_0000;
        end
    endcase
end

always@(*) begin
    case(MEM_EXE_in[2:0])
        3'b000: begin
            {wmask2, wmask1} = wmask            ;
            wdata1 = MEM_rs2_data               ;
            wdata2 = 64'd0                      ;
        end
        3'b001: begin
            {wmask2, wmask1} = wmask << 1        ;
            wdata1 = {MEM_rs2_data[55:0], 8'd0}  ;
            wdata2 = {56'd0, MEM_rs2_data[63:56]};
        end
        3'b010: begin
            {wmask2, wmask1} = wmask << 2        ;
            wdata1 = {MEM_rs2_data[47:0], 16'd0} ;
            wdata2 = {48'd0, MEM_rs2_data[63:48]};
        end
        3'b011: begin
            {wmask2, wmask1} = wmask << 3        ;
            wdata1 = {MEM_rs2_data[39:0], 24'd0} ;
            wdata2 = {40'd0, MEM_rs2_data[63:40]};
        end
        3'b100: begin
            {wmask2, wmask1} = wmask << 4        ;
            wdata1 = {MEM_rs2_data[31:0], 32'd0} ;
            wdata2 = {32'd0, MEM_rs2_data[63:32]};
        end
        3'b101: begin
            {wmask2, wmask1} = wmask << 5        ;
            wdata1 = {MEM_rs2_data[23:0], 40'd0} ;
            wdata2 = {24'd0, MEM_rs2_data[63:24]};
        end
        3'b110: begin
            {wmask2, wmask1} = wmask << 6        ;
            wdata1 = {MEM_rs2_data[15:0], 48'd0} ;
            wdata2 = {16'd0, MEM_rs2_data[63:16]};
        end
        3'b111: begin
            {wmask2, wmask1} = wmask << 7        ;
            wdata1 = {MEM_rs2_data[7:0], 56'd0}  ;
            wdata2 = {8'd0, MEM_rs2_data[63:8]}  ;
        end
    endcase
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

always@(*) begin
    case(MEM_EXE_in[2:0]) 
        3'b000: begin
            rdata = rdata1;
        end
        3'b001: begin
            rdata = {rdata2[7:0], rdata1[63:8]};
        end
        3'b010: begin
            rdata = {rdata2[15:0], rdata1[63:16]};
        end
        3'b011: begin
            rdata = {rdata2[23:0], rdata1[63:24]};
        end
        3'b100: begin
            rdata = {rdata2[31:0], rdata1[63:32]};
        end
        3'b101: begin
            rdata = {rdata2[39:0], rdata1[63:40]};
        end
        3'b110: begin
            rdata = {rdata2[47:0], rdata1[63:48]};
        end
        3'b111: begin
            rdata = {rdata2[55:0], rdata1[63:56]};
        end
    endcase 
end


always@(*) begin
    case(state)
        2'b00: begin
            if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl == `MEM_NOP) begin
                MEM_valid_out = 1'b1;
            end
            else begin
                MEM_valid_out = 1'b0;
            end
        end
        2'b01: begin
            if(DCACHE_valid_out == 1'b1) begin
                MEM_valid_out = 1'b1;
            end
            else begin
                MEM_valid_out = 1'b0;
            end
        end
        2'b10: begin
            MEM_valid_out = 1'b0;
        end
        2'b11: begin
            MEM_valid_out = 1'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            if(busy == 1'b1) begin
                MEM_ok = 1'b0;
            end
            else begin
                MEM_ok = 1'b1;
            end
        end
        2'b01: begin
            if(DCACHE_valid_out == 1'b1) begin
                MEM_ok = 1'b1;
            end
            else begin
                MEM_ok = 1'b0;
            end
        end
        2'b10: begin
            MEM_ok = 1'b0;
        end
        2'b11: begin
            MEM_ok = 1'b1;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            if(busy == 1'b1) begin
                DCACHE_valid = 1'b1;
            end
            else begin
                DCACHE_valid = 1'b0;
            end
        end
        2'b01: begin
            if(DCACHE_valid_out == 1'b1) begin
                DCACHE_valid = 1'b0;
            end
            else begin
                DCACHE_valid = 1'b1;
            end
        end
        2'b10: begin
            DCACHE_valid = 1'b1;
        end
        2'b11: begin
            DCACHE_valid = 1'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            DCACHE_addr = addr1;
        end
        2'b01: begin
            DCACHE_addr = addr1;
        end
        2'b10: begin
            DCACHE_addr = addr2;
        end
        2'b11: begin
            DCACHE_addr = 64'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            DCACHE_wdata = wdata1;
        end
        2'b01: begin
            DCACHE_wdata = wdata1;
        end
        2'b10: begin
            DCACHE_wdata = wdata2;
        end
        2'b11: begin
            DCACHE_wdata = 64'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            DCACHE_mask = wmask1;
        end
        2'b01: begin
            DCACHE_mask = wmask1;
        end
        2'b10: begin
            DCACHE_mask = wmask2;
        end
        2'b11: begin
            DCACHE_mask = 8'b0;
        end
    endcase
end

/* verilator lint_off LATCH */
always@(*) begin
    case(state)
        2'b00: begin
            rdata1 = 64'b0;
            rdata2 = 64'b0;
        end
        2'b01: begin
            rdata1 = DCACHE_rdata;
            rdata2 = rdata2;
        end
        2'b10: begin
            rdata1 = rdata1;
            rdata2 = DCACHE_rdata;
        end
        2'b11: begin
            rdata1 = 64'b0;
            rdata2 = 64'b0;
        end
    endcase
end
/* verilator lint_on LATCH */

always@(*) begin        
    case(MEM_ctrl)
        `MEM_LB: begin            
            MEM_out = {{56{rdata[7:7]}}, rdata[7:0]};
        end
        `MEM_LH: begin            
            MEM_out = {{48{rdata[15:15]}}, rdata[15:0]};
        end
        `MEM_LW: begin        
            MEM_out = {{32{rdata[31:31]}}, rdata[31:0]};
        end
        `MEM_LD: begin         
            MEM_out = rdata;
        end
        `MEM_LBU: begin      
            MEM_out = {56'd0, rdata[7:0]};
        end
        `MEM_LHU: begin  
            MEM_out = {48'd0, rdata[15:0]};
        end
        `MEM_LWU: begin  
            MEM_out = {32'd0, rdata[31:0]};
        end
        default: begin
            MEM_out = 64'b0;
        end
    endcase
end

always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        state <= 2'b00;
    end
    else begin
        case(state)
            2'b00: begin
                if(busy == 1'b1) begin
                    if(align == 1'b1) begin
                        state <= 2'b01;
                    end
                    else begin
                        state <= 2'b10;
                    end
                end
                else begin
                    state <= 2'b00;
                end
            end
            2'b01: begin
                if(DCACHE_valid_out == 1'b1) begin
                    state <= 2'b00;
                end
                else begin
                    state <= 2'b01;
                end
            end
            2'b10: begin
                if(DCACHE_valid_out == 1'b1) begin
                    state <= 2'b01;
                end
                else begin
                    state <= 2'b10;
                end
            end
            default: begin
                state <= 2'b00;
            end
        endcase
    end      
end

ysyx_22041461_DCACHE DCACHE(

    .clk              (clk),
    .rst              (rst),
    .DCACHE_valid     (DCACHE_valid),

    .DCACHE_addr      (DCACHE_addr),
    .DCACHE_wdata     (DCACHE_wdata),
    .DCACHE_mask      (DCACHE_mask ),
    .DCACHE_wen       (DCACHE_wen  ),

    .DCACHE_valid_out (DCACHE_valid_out),
    .DCACHE_rdata     (DCACHE_rdata)
);



endmodule

