module ysyx_22041461_MEM(

    input   wire [0:0]  clk         ,
    input   wire [0:0]  rst         ,
    input   wire [63:0] dest        ,
    input   wire [63:0] rs1_data    ,
    input   wire [63:0] rs2_data    ,
    input   wire [63:0] imm         ,
    input   wire [63:0] pc          ,
    input   wire [63:0] snpc        ,
    input   wire [3:0]  ctrl_MEM    ,
    input   wire [2:0]  sel_MEM_addr,
    input   wire [2:0]  sel_MEM_data,

    output  reg  [63:0] read_data   ,
    output  reg  [31:0] inst
);

import "DPI-C" function void ebreak();

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

reg [63:0]  rinst;
reg [63:0]  read_data1;
reg [63:0]  read_data2;
reg [63:0]  rread_data;
reg [63:0]  addr;
reg [63:0]  write_data;
reg [63:0]  write_data1;
reg [63:0]  write_data2;
reg [15:0]  wmask;
reg [7:0]   wmask1;
reg [7:0]   wmask2;

always@(*) begin
    case(sel_MEM_addr)
        3'b000: begin
            addr = 64'h0000_0000_8000_0000;
        end
        3'b001: begin
            addr = dest;
        end
        3'b010: begin
            addr = rs1_data;
        end
        3'b011: begin
            addr = rs2_data;
        end
        3'b100: begin
            addr = imm;
        end
        3'b101: begin
            addr = snpc;
        end
        default: begin
            addr = 64'h0000_0000_8000_0000;
        end
    endcase
end

always@(*) begin
    case(ctrl_MEM)
        4'b0001: begin            //读取8字节数据
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0010: begin            //读取4字节数据并进行符号位扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0011: begin            //读取2字节数据并进行符号位扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0100: begin            //读取1字节数据并进行符号位扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0101: begin            //读取4字节数据并进行零扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0110: begin            //读取2字节数据并进行零扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        4'b0111: begin            //读取1字节数据并进行零扩展
            pmem_read(addr, read_data1);
            pmem_read((addr + 64'd8), read_data2);
        end
        default: begin
            read_data1 = 64'd0;
            read_data2 = 64'd0;
        end
    endcase
end

always@(*) begin
    case(addr[2:0]) 
        3'b000: begin
            rread_data = read_data1;
        end
        3'b001: begin
            rread_data = {read_data2[7:0], read_data1[63:8]};
        end
        3'b010: begin
            rread_data = {read_data2[15:0], read_data1[63:16]};
        end
        3'b011: begin
            rread_data = {read_data2[23:0], read_data1[63:24]};
        end
        3'b100: begin
            rread_data = {read_data2[31:0], read_data1[63:32]};
        end
        3'b101: begin
            rread_data = {read_data2[39:0], read_data1[63:40]};
        end
        3'b110: begin
            rread_data = {read_data2[47:0], read_data1[63:48]};
        end
        3'b111: begin
            rread_data = {read_data2[55:0], read_data1[63:56]};
        end
    endcase 
end

always@(*) begin        
    case(ctrl_MEM)
        4'b0000: begin            //不读不写
            read_data = 64'd0;
        end
        4'b0001: begin            //读取8字节数据
            read_data = rread_data;
        end
        4'b0010: begin            //读取4字节数据并进行符号位扩展
            read_data = {{32{rread_data[31:31]}}, rread_data[31:0]};
        end
        4'b0011: begin            //读取2字节数据并进行符号位扩展
            read_data = {{48{rread_data[15:15]}}, rread_data[15:0]};
        end
        4'b0100: begin            //读取1字节数据并进行符号位扩展
            read_data = {56'd0, rread_data[7:0]};
        end
        4'b0101: begin            //读取4字节数据并进行零扩展
            read_data = {32'd0, rread_data[31:0]};
        end
        4'b0110: begin            //读取2字节数据并进行零扩展
            read_data = {48'd0, rread_data[15:0]};
        end
        4'b0111: begin            //读取1字节数据并进行零扩展
            read_data = {56'd0, rread_data[7:0]};
        end
        4'b1000: begin            //写入8字节数据
            read_data = 64'd0;
        end
        4'b1001: begin            //写入4字节数据
            read_data = 64'd0;
        end
        4'b1010: begin            //写入2字节数据
            read_data = 64'd0;
        end
        4'b1011: begin            //写入1字节数据
            read_data = 64'd0;
        end
        default: begin 
            read_data = 64'd0;
        end
    endcase
end

always@(*) begin
    case(sel_MEM_data)
        3'b000: begin
            write_data = dest;
        end
        3'b001: begin
            write_data = rs1_data;
        end
        3'b010: begin
            write_data = rs2_data;
        end
        3'b011: begin
            write_data = imm;
        end
        3'b100: begin
            write_data = snpc;
        end
        default: begin
            write_data = 64'd0;
        end
    endcase
end

always@(*) begin
    case(ctrl_MEM)
        4'b1000: begin
            wmask = 16'b0000_0000_1111_1111;
        end
        4'b1001: begin
            wmask = 16'b0000_0000_0000_1111;
        end
        4'b1010: begin
            wmask = 16'b0000_0000_0000_0011;
        end
        4'b1011: begin
            wmask = 16'b0000_0000_0000_0001;
        end
        default: begin
            wmask = 16'b0000_0000_0000_0000;
        end
    endcase
end


always@(*) begin
    case(addr[2:0])
        3'b000: begin
            {wmask2, wmask1} = wmask                ;
            write_data1 = write_data                ;
            write_data2 = 64'd0                     ;
        end
        3'b001: begin
            {wmask2, wmask1} = wmask << 1           ;
            write_data1 = {write_data[55:0], 8'd0}  ;
            write_data2 = {56'd0, write_data[63:56]};
        end
        3'b010: begin
            {wmask2, wmask1} = wmask << 2           ;
            write_data1 = {write_data[47:0], 16'd0} ;
            write_data2 = {48'd0, write_data[63:48]};
        end
        3'b011: begin
            {wmask2, wmask1} = wmask << 3           ;
            write_data1 = {write_data[39:0], 24'd0} ;
            write_data2 = {40'd0, write_data[63:40]};
        end
        3'b100: begin
            {wmask2, wmask1} = wmask << 4           ;
            write_data1 = {write_data[31:0], 32'd0} ;
            write_data2 = {32'd0, write_data[63:32]};
        end
        3'b101: begin
            {wmask2, wmask1} = wmask << 5           ;
            write_data1 = {write_data[23:0], 40'd0} ;
            write_data2 = {24'd0, write_data[63:24]};
        end
        3'b110: begin
            {wmask2, wmask1} = wmask << 6           ;
            write_data1 = {write_data[15:0], 48'd0} ;
            write_data2 = {16'd0, write_data[63:16]} ;
        end
        3'b111: begin
            {wmask2, wmask1} = wmask << 7           ;
            write_data1 = {write_data[7:0], 56'd0}  ;
            write_data2 = {8'd0, write_data[63:8]}  ;
        end
    endcase
end

always@(posedge clk) begin
    if(rst == 1'b0) begin

    end
    else begin
        if(ctrl_MEM == 4'b1000 || ctrl_MEM == 4'b1001 || ctrl_MEM == 4'b1010 || ctrl_MEM == 4'b1011) begin
            pmem_write(addr, write_data1, wmask1);
            pmem_write((addr + 64'd8), write_data2, wmask2);
        end
        else begin

        end
    end
end

always@(*) begin
    pmem_read(pc, rinst);
end

always@(*) begin
    if(pc[2:0] == 3'b000) begin
        inst = rinst[31:0]; 
    end
    else if(pc[1:0] == 2'b00) begin
        inst = rinst[63:32];
    end
    else begin
        inst = 32'd0;
    end
end

endmodule

