`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_041461_macro.v"

module ysyx_041461_WB(

    input   wire [0:0]   clk            ,
    input   wire [0:0]   rst            ,
    input   wire [0:0]   WB_valid       ,

    input   wire [0:0]   WB_IF_ready    ,
                
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
    input   wire [2:0]   WB_ctrl        ,
    input   wire [3:0]   WB_trap        ,
    input   wire [0:0]   WB_interrupt   ,

    output  reg  [0:0]   WB_ready       ,  

    output  wire [63:0]  WB_IFreg_mtvec ,
    output  wire [63:0]  WB_IFreg_mepc  ,
    output  reg  [1:0]   WB_IFreg_ctrl  ,  

    output  wire [63:0]  WB_IF_mstatus  ,
    output  wire [63:0]  WB_IF_mie      ,
    output  wire [63:0]  WB_IF_mip      ,  
        
    output  wire [63:0]  WB_ID_rs1_data ,
    output  wire [63:0]  WB_ID_rs2_data ,
        
    output  wire [63:0]  WB_EXE_rs1_data,
    output  wire [63:0]  WB_EXE_rs2_data,
    output  reg  [63:0]  WB_EXE_csr_data,

    output  wire [63:0]  WB_MEM_rs2_data
);

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
import "DPI-C" function void get_WB_valid(input byte a);
import "DPI-C" function void ebreak();

initial set_gpr_ptr(x);
initial set_pc_ptr(WB_pc);
initial get_WB_valid({7'b0, WB_valid});

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
reg [63:0] mie;  //0x304
reg [63:0] mie_next; 
reg [63:0] mip;  //0x344
reg [63:0] mip_next; 
reg [63:0] mhartid;  //0xf14
reg [63:0] mhartid_next; 

integer i;
integer j;

assign WB_IFreg_mtvec = mtvec;
assign WB_IFreg_mepc = mepc;

assign WB_IF_mstatus = mstatus;
assign WB_IF_mie     = mie;
assign WB_IF_mip     = mip;

assign WB_ID_rs1_data = x[WB_ID_rs1];
assign WB_ID_rs2_data = x[WB_ID_rs2];

assign WB_EXE_rs1_data = x[WB_EXE_rs1];
assign WB_EXE_rs2_data = x[WB_EXE_rs2];

assign WB_MEM_rs2_data = x[WB_MEM_rs2];

always@(*) begin
    if(WB_valid == 1'b1) begin
        if(WB_trap != `ysyx_041461_TRAP_NOP && WB_IF_ready == 1'b0) begin
            WB_ready = 1'b0;
        end
        else begin
            WB_ready = 1'b1;
        end
    end
    else begin
        WB_ready = 1'b1;
    end
end

always@(*) begin
    case(WB_EXE_csr)
        `ysyx_041461_MTVEC: begin
            WB_EXE_csr_data = mtvec;
        end
        `ysyx_041461_MEPC: begin
            WB_EXE_csr_data = mepc;
        end
        `ysyx_041461_MCAUSE: begin
            WB_EXE_csr_data = mcause;
        end
        `ysyx_041461_MSTATUS: begin
            WB_EXE_csr_data = mstatus;
        end
        `ysyx_041461_MIE: begin
            WB_EXE_csr_data = mie;
        end
        `ysyx_041461_MIP: begin
            WB_EXE_csr_data = mip;
        end
        `ysyx_041461_MHARTID: begin
            WB_EXE_csr_data = mhartid;
        end
        default: begin
            WB_EXE_csr_data = 64'b0;
        end
    endcase
end

always@(*) begin
    if(WB_valid == 1'b1) begin
        case(WB_trap)
            `ysyx_041461_TRAP_NOP: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_NOP;
            end
            `ysyx_041461_IF_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            `ysyx_041461_ID_ECALL: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            `ysyx_041461_ID_MRET: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MEPC;
            end
            `ysyx_041461_ID_EBREAK: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                ebreak();
            end
            `ysyx_041461_ID_ILLEGAL_INST: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            `ysyx_041461_MEM_LOAD_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            `ysyx_041461_MEM_STORE_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            `ysyx_041461_TIMER_INTERRUPT: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
            end
            default: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_NOP;
            end
        endcase
    end
    else begin
        WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_NOP;
    end
end




always@(*) begin
    for(i = 0; i < 32; i = i + 1) begin
        d[i] = x[i];
    end
    mtvec_next = mtvec;
    mepc_next = mepc;
    mcause_next = mcause;
    mstatus_next = mstatus;
    mie_next = mie; 
    mip_next = mip; 
    mhartid_next = mhartid;
    if(WB_valid == 1'b1) begin
        if(WB_trap != `ysyx_041461_TRAP_NOP) begin
            case(WB_trap)
                `ysyx_041461_IF_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd0;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_ID_ECALL: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd11;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_ID_MRET: begin
                    mstatus_next[3:3] = mstatus[7:7];
                    mstatus_next[7:7] = 1'b1;
                end
                `ysyx_041461_ID_EBREAK: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd3;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_ID_ILLEGAL_INST: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd2;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_MEM_LOAD_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd4;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_MEM_STORE_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd6;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                `ysyx_041461_TIMER_INTERRUPT: begin
                    mepc_next = WB_pc;
                    mcause_next[63:63] = 1'b1;
                    mcause_next[62:0] = 63'd7;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                end
                default: begin
                    
                end
            endcase
        end
        else begin
            case(WB_ctrl)
                `ysyx_041461_WB_NOP: begin

                end
                `ysyx_041461_WB_EXE: begin
                    d[WB_rd] = WB_EXE_in;
                end
                `ysyx_041461_WB_MEM: begin
                    d[WB_rd] = WB_MEM_in;
                end
                `ysyx_041461_WB_IMM: begin
                    d[WB_rd] = WB_imm;
                end        
                `ysyx_041461_WB_SNPC: begin
                    d[WB_rd] = WB_pc + 4;
                end
                `ysyx_041461_WB_CSRRW: begin
                    case(WB_csr)
                        `ysyx_041461_MTVEC: begin
                            d[WB_rd] = mtvec;
                            mtvec_next = x[WB_rs1];
                        end
                        `ysyx_041461_MEPC: begin
                            d[WB_rd] = mepc;
                            mepc_next = x[WB_rs1];
                        end
                        `ysyx_041461_MCAUSE: begin
                            d[WB_rd] = mcause;
                            mcause_next = x[WB_rs1];
                        end
                        `ysyx_041461_MSTATUS: begin
                            d[WB_rd] = mstatus;
                            mstatus_next = x[WB_rs1];
                        end
                        `ysyx_041461_MIE: begin
                            d[WB_rd] = mie;
                            mie_next = x[WB_rs1];
                        end
                        `ysyx_041461_MIP: begin
                            d[WB_rd] = mip;
                            mip_next = x[WB_rs1];
                        end
                        `ysyx_041461_MHARTID: begin
                            d[WB_rd] = mhartid;
                            mhartid_next = x[WB_rs1];
                        end
                        default: begin

                        end
                    endcase
                end
                3'b110: begin
                    case(WB_csr)
                        `ysyx_041461_MTVEC: begin
                            d[WB_rd] = mtvec;
                            mtvec_next = WB_EXE_in;
                        end
                        `ysyx_041461_MEPC: begin
                            d[WB_rd] = mepc;
                            mepc_next = WB_EXE_in;
                        end
                        `ysyx_041461_MCAUSE: begin
                            d[WB_rd] = mcause;
                            mcause_next = WB_EXE_in;
                        end
                        `ysyx_041461_MSTATUS: begin
                            d[WB_rd] = mstatus;
                            mstatus_next = WB_EXE_in;
                        end
                        `ysyx_041461_MIE: begin
                            d[WB_rd] = mie;
                            mie_next = WB_EXE_in;
                        end
                        `ysyx_041461_MIP: begin
                            d[WB_rd] = mip;
                            mip_next = WB_EXE_in;
                        end
                        `ysyx_041461_MHARTID: begin
                            d[WB_rd] = mhartid;
                            mhartid_next = WB_EXE_in;
                        end
                        default: begin

                        end
                    endcase
                end
                `ysyx_041461_WB_CSRRWI: begin
                    case(WB_csr)
                        `ysyx_041461_MTVEC: begin
                            d[WB_rd] = mtvec;
                            mtvec_next = WB_zimm;
                        end
                        `ysyx_041461_MEPC: begin
                            d[WB_rd] = mepc;
                            mepc_next = WB_zimm;
                        end
                        `ysyx_041461_MCAUSE: begin
                            d[WB_rd] = mcause;
                            mcause_next = WB_zimm;
                        end
                        `ysyx_041461_MSTATUS: begin
                            d[WB_rd] = mstatus;
                            mstatus_next = WB_zimm;
                        end
                        `ysyx_041461_MIE: begin
                            d[WB_rd] = mie;
                            mie_next = WB_zimm;
                        end
                        `ysyx_041461_MIP: begin
                            d[WB_rd] = mip;
                            mip_next = WB_zimm;
                        end
                        `ysyx_041461_MHARTID: begin
                            d[WB_rd] = mhartid;
                            mhartid_next = WB_zimm;
                        end
                        default: begin

                        end
                    endcase
                end
            endcase
        end
    end
    if(WB_interrupt == 1'b1) begin
        mip_next[7:7] = 1'b1;
    end
    else begin
        mip_next[7:7] = 1'b0;
    end
    mhartid_next = mhartid;
    {mip_next[63:8], mip_next[6:0]} = 63'b0;
    {mie_next[63:8], mie_next[6:0]} = 63'b0;
    d[0] = 64'b0;
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= 64'd0;
        end
        mtvec <= 64'd0;
        mepc <= 64'd0;
        mcause <= 64'd0;
        mstatus <= 64'd0;
        mie <= 64'b0;
        mip <= 64'b0;
        mhartid <= 64'b0;
    end
    else begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= d[j];
        end
        mtvec <= mtvec_next;
        mepc <= mepc_next;
        mcause <= mcause_next;
        mstatus <= mstatus_next;
        mie <= mie_next;
        mip <= mip_next;
        mhartid <= mhartid_next;
    end
end

always@(*) begin
    get_WB_valid({7'b0, WB_valid});
end

endmodule
