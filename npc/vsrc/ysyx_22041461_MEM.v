module ysyx_22041461_MEM(

    input   wire [0:0]  clk         ,
    input   wire [0:0]  rst         ,
    input   wire [63:0] dest        ,
    input   wire [63:0] rs1_data    ,
    input   wire [63:0] rs2_data    ,
    input   wire [63:0] imm         ,
    input   wire [63:0] pc          ,
    input   wire [63:0] snpc        ,
    input   wire [1:0]  ctrl_MEM    ,
    input   wire [2:0]  sel_MEM_addr,
    input   wire [2:0]  sel_MEM_data,

    output  reg  [63:0] read_data   ,
    output  reg  [31:0] inst
);

import "DPI-C" function void ebreak();

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

wire[63:0]  rinst;    
reg [63:0]  addr;
reg [63:0]  write_data;
reg [7:0]   wmask;

always@(*) begin
    case(sel_MEM_addr)
        3'b000: begin
            addr = dest;
        end
        3'b001: begin
            addr = rs1_data;
        end
        3'b010: begin
            addr = rs2_data;
        end
        3'b011: begin
            addr = imm;
        end
        3'b100: begin
            addr = snpc;
        end
        default: begin
            addr = 64'h0000_0000_8000_0000;
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
    case(addr[2:0])
        3'b000: begin
            wmask = 8'b1111_1111;
        end
        3'b001: begin
            wmask = 8'b1111_1110;
        end
        3'b010: begin
            wmask = 8'b1111_1100;
        end
        3'b011: begin
            wmask = 8'b1111_1000;
        end
        3'b100: begin
            wmask = 8'b1111_0000;
        end
        3'b101: begin
            wmask = 8'b1110_0000;
        end
        3'b110: begin
            wmask = 8'b1100_0000;
        end
        3'b111: begin
            wmask = 8'b1000_0000;
        end
    endcase
end


always@(*) begin        
    case(ctrl_MEM)
        2'b00: begin            //不读不写
            read_data = 64'd0;
        end
        2'b01: begin            //读取数据
            pmem_read(addr, read_data);
        end
        2'b10: begin            //写入数据
            read_data = 64'd0;
        end
        default: begin
            read_data = 64'd0;
        end
    endcase
end



always@(posedge clk) begin
    if(rst == 1'b0) begin

    end
    else begin
        if(ctrl_MEM == 2'b10) begin
            pmem_write(addr, write_data, wmask);
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

