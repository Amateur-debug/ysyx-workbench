`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_MEM(

    input  wire  [0:0]   clk            ,
    input  wire  [0:0]   rst            ,

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

wire [63:0]  read_data;
reg  [7:0]   wmask;
reg  [0:0]   DCACHE_wen;
reg  [0:0]   DCACHE_valid;
wire [0:0]   DCACHE_valid_out;


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
    case(MEM_ctrl)
        `MEM_SD: begin
            wmask = 8'b1111_1111;
        end
        `MEM_SW: begin
            wmask = 8'b0000_1111;
        end
        `MEM_SH: begin
            wmask = 8'b0000_0011;
        end
        `MEM_SB: begin
            wmask = 8'b0000_0001;
        end
        default: begin
            wmask = 8'b0000_0000;
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
    if(MEM_valid_in == 1'b1 && MEM_valid_fromCD == 1'b1 && MEM_ctrl != `MEM_NOP) begin
        DCACHE_valid = 1'b1;
    end
    else begin
        DCACHE_valid = 1'b0;
    end
end

always@(*) begin
    if(DCACHE_valid == 1'b1) begin
        MEM_valid_out = DCACHE_valid_out;
    end
    else begin
        MEM_valid_out = MEM_valid_in;
    end
end


always@(*) begin
    if(DCACHE_valid == 1'b1) begin
        MEM_ok = DCACHE_valid_out;
    end
    else begin
        MEM_ok = 1'b1;
    end
end

ysyx_22041461_DCACHE DCACHE(

    .clk              (clk),
    .flush            (rst),
    .DCACHE_valid     (DCACHE_valid),

    .DCACHE_addr      (MEM_EXE_in),
    .DCACHE_wdata     (MEM_rs2_data),
    .DCACHE_mask      (wmask),
    .DCACHE_wen       (DCACHE_wen),

    .DCACHE_valid_out (DCACHE_valid_out),
    .DCACHE_rdata     (read_data)
);



endmodule

