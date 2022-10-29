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

import "DPI-C" function void ebreak();

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);


reg  [63:0]  read_data1;
reg  [63:0]  read_data2;
reg  [63:0]  read_data;
reg  [63:0]  write_data1;
reg  [63:0]  write_data2;
reg  [15:0]  wmask;
reg  [7:0]   wmask1;
reg  [7:0]   wmask2;

reg  [0:0]   DCACHE_valid;
reg  [63:0]  DCACHE_addr;
reg  [63:0]  DCACHE_wdata;
reg  [7:0]   DCACHE_mask;
reg  [0:0]   DCACHE_wen;
wire [63:0]  DCACHE_rdata;
wire [0:0]   DCACHE_valid_out;

reg  [0:0]   align;
reg  [1:0]   state;


always@(*) begin
    if(MEM_EXE_in[2:0] == 3'b0) begin
        align = 1'b1;
    end
    else begin
        align = 1'b0;
    end
end

always@(*) begin    
    if(MEM_valid_in == 1'b0) begin
        MEM_out = 64'd0;
    end
    else begin    
        case(MEM_ctrl)
            `MEM_LD: begin            //读取8字节数据
                MEM_out = read_data;
            end
            `MEM_LW: begin            //读取4字节数据并进行符号位扩展
                MEM_out = {{32{read_data[31:31]}}, read_data[31:0]};
            end
            `MEM_LH: begin            //读取2字节数据并进行符号位扩展
                MEM_out = {{48{read_data[15:15]}}, read_data[15:0]};
            end
            `MEM_LB: begin            //读取1字节数据并进行符号位扩展
                MEM_out = {{56{read_data[7:7]}}, read_data[7:0]};
            end
            `MEM_LWU: begin            //读取4字节数据并进行零扩展
                MEM_out = {32'd0, read_data[31:0]};
            end
            `MEM_LHU: begin            //读取2字节数据并进行零扩展
                MEM_out = {48'd0, read_data[15:0]};
            end
            `MEM_LBU: begin            //读取1字节数据并进行零扩展
                MEM_out = {56'd0, read_data[7:0]};
            end
            default: begin 
                MEM_out = 64'd0;
            end
        endcase
    end
end

always@(*) begin
    case(MEM_EXE_in[2:0]) 
        3'b000: begin
            read_data = read_data1;
        end
        3'b001: begin
            read_data = {read_data2[7:0], read_data1[63:8]};
        end
        3'b010: begin
            read_data = {read_data2[15:0], read_data1[63:16]};
        end
        3'b011: begin
            read_data = {read_data2[23:0], read_data1[63:24]};
        end
        3'b100: begin
            read_data = {read_data2[31:0], read_data1[63:32]};
        end
        3'b101: begin
            read_data = {read_data2[39:0], read_data1[63:40]};
        end
        3'b110: begin
            read_data = {read_data2[47:0], read_data1[63:48]};
        end
        3'b111: begin
            read_data = {read_data2[55:0], read_data1[63:56]};
        end
    endcase 
end

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
            {wmask2, wmask1} = wmask                ;
            write_data1 = MEM_rs2_data                ;
            write_data2 = 64'd0                     ;
        end
        3'b001: begin
            {wmask2, wmask1} = wmask << 1           ;
            write_data1 = {MEM_rs2_data[55:0], 8'd0}  ;
            write_data2 = {56'd0, MEM_rs2_data[63:56]};
        end
        3'b010: begin
            {wmask2, wmask1} = wmask << 2           ;
            write_data1 = {MEM_rs2_data[47:0], 16'd0} ;
            write_data2 = {48'd0, MEM_rs2_data[63:48]};
        end
        3'b011: begin
            {wmask2, wmask1} = wmask << 3           ;
            write_data1 = {MEM_rs2_data[39:0], 24'd0} ;
            write_data2 = {40'd0, MEM_rs2_data[63:40]};
        end
        3'b100: begin
            {wmask2, wmask1} = wmask << 4           ;
            write_data1 = {MEM_rs2_data[31:0], 32'd0} ;
            write_data2 = {32'd0, MEM_rs2_data[63:32]};
        end
        3'b101: begin
            {wmask2, wmask1} = wmask << 5           ;
            write_data1 = {MEM_rs2_data[23:0], 40'd0} ;
            write_data2 = {24'd0, MEM_rs2_data[63:24]};
        end
        3'b110: begin
            {wmask2, wmask1} = wmask << 6           ;
            write_data1 = {MEM_rs2_data[15:0], 48'd0} ;
            write_data2 = {16'd0, MEM_rs2_data[63:16]} ;
        end
        3'b111: begin
            {wmask2, wmask1} = wmask << 7           ;
            write_data1 = {MEM_rs2_data[7:0], 56'd0}  ;
            write_data2 = {8'd0, MEM_rs2_data[63:8]}  ;
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

always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        state <= 2'b00;
    end
    else begin
        case(state)
            2'b00: begin
                if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP && align == 1'b1 && DCACHE_valid_out == 1'b1) begin
                    state <= 2'b10;
                end
                else if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP && align == 1'b0 && DCACHE_valid_out == 1'b1) begin
                    state <= 2'b01;
                end
                else begin
                    state <= 2'b00;
                end
            end
            2'b01: begin
                if(DCACHE_valid_out == 1'b1) begin
                    state <= 2'b10;
                end
                else begin
                    state <= 2'b01;
                end
            end
            2'b10: begin
                state <= 2'b00;
            end
            2'b11: begin
                state <= 2'b00;
            end
        endcase
    end
end

/* verilator lint_off LATCH */
always@(*) begin
    case(state)
        2'b00: begin
            if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP) begin
                DCACHE_valid = 1'b1;
            end
            else begin
                DCACHE_valid = 1'b0;
            end
            DCACHE_addr = {MEM_EXE_in[63:3], 3'b000};
            DCACHE_wdata = write_data1;
            DCACHE_mask = wmask1;
            read_data1 = DCACHE_rdata;
            read_data2 = 64'b0;
        end
        2'b01: begin
            if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP && align == 1'b0) begin
                DCACHE_valid = 1'b1;
            end
            else begin
                DCACHE_valid = 1'b0;
            end
            DCACHE_addr = {(MEM_EXE_in[63:3] + 1'b1), 3'b000};
            DCACHE_wdata = write_data2;
            DCACHE_mask = wmask2;
            read_data1 = read_data1;
            read_data2 = DCACHE_rdata;
        end
        2'b10: begin
            DCACHE_valid = 1'b0;
            DCACHE_addr = 64'b0;
            DCACHE_wdata = 64'b0;
            DCACHE_mask = 8'b0;
            read_data1 = read_data1;
            read_data2 = read_data2;
        end
        2'b11: begin
            DCACHE_valid = 1'b0;
            DCACHE_addr = 64'b0;
            DCACHE_wdata = 64'b0;
            DCACHE_mask = 8'b0;
            read_data1 = 64'b0;
            read_data2 = 64'b0;
        end
    endcase
end
/* verilator lint_on LATCH */

always@(*) begin
    case(state)
        2'b00: begin
            if(MEM_valid_in == 1'b0 || MEM_valid_fromCD == 1'b0) begin
                MEM_valid_out = 1'b0;
            end
            else begin
                if(MEM_ctrl == `MEM_NOP) begin
                    MEM_valid_out = 1'b1;
                end
                else begin
                    MEM_valid_out = 1'b0;
                end
            end
        end
        2'b01: begin
            MEM_valid_out = 1'b0;
        end
        2'b10: begin
            MEM_valid_out = 1'b1;
        end
        2'b11: begin
            MEM_valid_out = 1'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        2'b00: begin
            if(MEM_ctrl != `MEM_NOP && MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1) begin
                MEM_ok = 1'b0;
            end
            else begin
                MEM_ok = 1'b1;
            end
        end
        2'b01: begin
            MEM_ok = 1'b0;
        end
        2'b10: begin
            MEM_ok = 1'b1;
        end
        2'b11: begin
            MEM_ok = 1'b1;
        end
    endcase
end



ysyx_22041461_DCACHE DCACHE(

    .clk              (clk),
    .rst              (rst),
    .DCACHE_valid     (DCACHE_valid),

    .DCACHE_addr      (DCACHE_addr),
    .DCACHE_wdata     (DCACHE_wdata),
    .DCACHE_mask      (DCACHE_mask),
    .DCACHE_wen       (DCACHE_wen),

    .DCACHE_valid_out (DCACHE_valid_out),
    .DCACHE_rdata     (DCACHE_rdata)
);



endmodule

