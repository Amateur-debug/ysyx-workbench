`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_WB(

    input   wire [0:0]   clk            ,
    input   wire [0:0]   flush          ,
    input   wire [0:0]   WB_valid       ,
       
    input   wire [4:0]   WB_ID_rs1      ,
    input   wire [4:0]   WB_ID_rs2      ,

    input   wire [4:0]   WB_EXE_rs1     ,
    input   wire [4:0]   WB_EXE_rs2     ,
    input   wire [11:0]  WB_EXE_csr     ,

    input   wire [4:0]   WB_MEM_rs2     ,

    input   wire [63:0]  WB_EXE_in      ,
    input   wire [63:0]  WB_MEM_in      ,
    input   wire [4:0]   WB_rd          ,
    input   wire [4:0]   WB_rs1         ,
    input   wire [11:0]  WB_csr         ,
    input   wire [63:0]  WB_imm         ,
    input   wire [63:0]  WB_zimm        ,
    input   wire [63:0]  WB_pc          ,
    input   wire [3:0]   WB_ctrl        ,

    output  wire [63:0]  WB_ID_rs1_data ,
    output  wire [63:0]  WB_ID_rs2_data ,
    output  wire [63:0]  WB_ID_csr_mtvec,
    output  wire [63:0]  WB_ID_csr_mepc ,

    output  wire [63:0]  WB_EXE_rs1_data,
    output  wire [63:0]  WB_EXE_rs2_data,
    output  reg  [63:0]  WB_EXE_csr_data,

    output  wire [63:0]  WB_MEM_rs2_data
);

import "DPI-C" function void ebreak();
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

initial set_gpr_ptr(x);  // rf为通用寄存器的二维数组变量


reg [63:0] x [31:0];    //寄存器现态的值
reg [63:0] d [31:0];    //寄存器次态的值

reg [63:0] mtvec;    //0x305
reg [63:0] mtvec_next;
reg [63:0] mepc;     //0x341
reg [63:0] mepc_next;
reg [63:0] mcause;   //0x342
reg [63:0] mcause_next;
reg [63:0] mstatus;  //0x300
reg [63:0] mstatus_next; 

integer i;
integer j;

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

assign WB_ID_rs1_data = x[WB_ID_rs1];
assign WB_ID_rs2_data = x[WB_ID_rs2];
assign WB_ID_csr_mtvec = mtvec;
assign WB_ID_csr_mepc = mepc;

assign WB_EXE_rs1_data = x[WB_EXE_rs1];
assign WB_EXE_rs2_data = x[WB_EXE_rs2];

assign WB_MEM_rs2_data = x[WB_MEM_rs2];


always@(*) begin
    case(WB_EXE_csr)
        `MTVEC: begin
            WB_EXE_csr_data = mtvec;
        end
        `MEPC: begin
            WB_EXE_csr_data = mepc;
        end
        `MCAUSE: begin
            WB_EXE_csr_data = mcause;
        end
        `MSTATUS: begin
            WB_EXE_csr_data = mstatus;
        end
        default: begin
            WB_EXE_csr_data = 64'b0;
        end
    endcase
end

always@(*) begin
    if(WB_valid == 1'b0) begin
        for(i = 0; i < 32; i = i + 1) begin
            d[i] = x[i];
        end
        mtvec_next = mtvec;
        mepc_next = mepc;
        mcause_next = mcause;
        mstatus_next = mstatus;
    end
    else begin
        for(i = 0; i < 32; i = i+1) begin
            d[i] = x[i];
        end
        mtvec_next = mtvec;
        mepc_next = mepc;
        mcause_next = mcause;
        mstatus_next = mstatus;
        case(WB_ctrl)
            `WB_NOP: begin
                
            end
            `WB_EXE: begin
                d[WB_rd] = WB_EXE_in;
            end
            `WB_MEM: begin
                d[WB_rd] = WB_MEM_in;
            end
            `WB_IMM: begin
                d[WB_rd] = WB_imm;
            end        
            `WB_SNPC: begin
                d[WB_rd] = WB_pc + 4;
            end
            `WB_CSRRW: begin
                case(WB_csr)
                    `MTVEC: begin
                        d[WB_rd] = mtvec;
                        mtvec_next = x[WB_rs1];
                    end
                    `MEPC: begin
                        d[WB_rd] = mepc;
                        mepc_next = x[WB_rs1];
                    end
                    `MCAUSE: begin
                        d[WB_rd] = mcause;
                        mcause_next = x[WB_rs1];
                    end
                    `MSTATUS: begin
                        d[WB_rd] = mstatus;
                        mstatus_next = x[WB_rs1];
                    end
                    default: begin
                        ebreak();
                    end
                endcase
            end
            4'b0110: begin
                case(WB_csr)
                    `MTVEC: begin
                        d[WB_rd] = mtvec;
                        mtvec_next = WB_EXE_in;
                    end
                    `MEPC: begin
                        d[WB_rd] = mepc;
                        mepc_next = WB_EXE_in;
                    end
                    `MCAUSE: begin
                        d[WB_rd] = mcause;
                        mcause_next = WB_EXE_in;
                    end
                    `MSTATUS: begin
                        d[WB_rd] = mstatus;
                        mstatus_next = WB_EXE_in;
                    end
                    default: begin
                        ebreak();
                    end
                endcase
            end
            `WB_CSRRWI: begin
                case(WB_csr)
                    `MTVEC: begin
                        d[WB_rd] = mtvec;
                        mtvec_next = WB_zimm;
                    end
                    `MEPC: begin
                        d[WB_rd] = mepc;
                        mepc_next = WB_zimm;
                    end
                    `MCAUSE: begin
                        d[WB_rd] = mcause;
                        mcause_next = WB_zimm;
                    end
                    `MSTATUS: begin
                        d[WB_rd] = mstatus;
                        mstatus_next = WB_zimm;
                    end
                    default: begin
                        ebreak();
                    end
                endcase
            end
            `WB_ECALL: begin
                mepc_next = WB_pc;
                mcause_next = 64'd11;
            end
            default: begin
                
            end
        endcase
    end
    d[0] = 64'b0;
end

always@(posedge clk or negedge rst) begin
    if(rst == 1'b0) begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= 64'd0;
        end
        mtvec <= 64'd0;
        mepc <= 64'd0;
        mcause <= 64'd0;
        mstatus <= 64'd0;
    end
    else begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= d[j];
        end
        mtvec <= mtvec_next;
        mepc <= mepc_next;
        mcause <= mcause_next;
        mstatus <= mstatus_next;
    end
end

endmodule
