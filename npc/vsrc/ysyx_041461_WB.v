`include "ysyx_041461_macro.v"
module ysyx_041461_WB(

    input   wire [0:0]   clk            ,
    input   wire [0:0]   rst            ,
    input   wire [0:0]   WB_valid       ,

    input   wire [0:0]   WB_IF_ok       ,
    input   wire [0:0]   WB_EXE_ok      ,
    input   wire [0:0]   WB_MEM_ok      ,
                
    input   wire [4:0]   WB_ID_rs1      ,
    input   wire [4:0]   WB_ID_rs2      ,
         
    input   wire [4:0]   WB_EXE_rs1     ,
    input   wire [4:0]   WB_EXE_rs2     ,
    input   wire [11:0]  WB_EXE_csr     ,
         
    input   wire [4:0]   WB_MEM_rs2     ,

    input   wire [31:0]  WB_inst        ,
         
    input   wire [63:0]  WB_EXE_in      ,
    input   wire [63:0]  WB_MEM_in      ,
    input   wire [4:0]   WB_rd          ,
    input   wire [4:0]   WB_rs1         ,
    input   wire [11:0]  WB_csr         ,
    input   wire [63:0]  WB_imm         ,
    input   wire [63:0]  WB_zimm        ,
    input   wire [63:0]  WB_pc          ,
    input   wire [3:0]   WB_ctrl        ,
    input   wire [3:0]   WB_trap        ,
    input   wire [0:0]   WB_interrupt   ,

    output  reg  [0:0]   WB_ready       ,  

    output  wire [63:0]  WB_IFreg_mtvec ,
    output  wire [63:0]  WB_IFreg_mepc  ,
    output  reg  [62:0]  WB_IFreg_CAUSE ,
    output  reg  [1:0]   WB_IFreg_ctrl  ,  

    output  wire [63:0]  WB_IF_mstatus  ,
    output  wire [63:0]  WB_IF_mie      ,
    output  wire [63:0]  WB_IF_mip      ,  
        
    output  wire [63:0]  WB_ID_rs1_data ,
    output  wire [63:0]  WB_ID_rs2_data ,
        
    output  wire [63:0]  WB_EXE_rs1_data,
    output  wire [63:0]  WB_EXE_rs2_data,
    output  reg  [63:0]  WB_EXE_csr_data,

    output  wire [63:0]  WB_MEM_rs2_data,

    input   wire [0:0]   WB_skip_difftest

);

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
import "DPI-C" function void get_need_difftest(input byte a);
import "DPI-C" function void get_skip(input byte a);
import "DPI-C" function void ebreak();

initial set_gpr_ptr(x);
initial set_pc_ptr(WB_pc);
initial get_need_difftest({7'b0, need_difftest});
initial get_skip({7'b0, WB_skip_difftest});

reg [63:0] x [31:0];    //寄存器现态的值
reg [63:0] d [31:0];    //寄存器次态的值

reg [63:0] t;
reg [63:0] c;

reg [63:0] mhartid;
reg [63:0] mhartid_next;
reg [63:0] mstatus;
reg [63:0] mstatus_next;
reg [63:0] misa;
reg [63:0] misa_next;
reg [63:0] mie;
reg [63:0] mie_next;
reg [63:0] mtvec;
reg [63:0] mtvec_next;
reg [63:0] mscratch;
reg [63:0] mscratch_next;
reg [63:0] mepc;
reg [63:0] mepc_next;
reg [63:0] mcause;
reg [63:0] mcause_next;
reg [63:0] mip;
reg [63:0] mip_next;
reg [63:0] mcycle;
reg [63:0] mcycle_next;
reg [63:0] minstret;
reg [63:0] minstret_next;
reg [63:0] mtval;
reg [63:0] mtval_next;


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
        if(WB_trap != `ysyx_041461_TRAP_NOP && (WB_IF_ok == 1'b0 || WB_EXE_ok == 1'b0 || WB_MEM_ok == 1'b0)) begin
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
        `ysyx_041461_MVENDORID: begin
            WB_EXE_csr_data = 64'b0;
        end
        `ysyx_041461_MARCHID: begin
            WB_EXE_csr_data = 64'b0;
        end
        `ysyx_041461_MIMPID: begin
            WB_EXE_csr_data = 64'b0;
        end
        `ysyx_041461_MHARTID: begin
            WB_EXE_csr_data = mhartid;
        end
        `ysyx_041461_MSTATUS: begin
            WB_EXE_csr_data = mstatus;
        end
        `ysyx_041461_MISA: begin
            WB_EXE_csr_data = misa;
        end
        `ysyx_041461_MIE: begin
            WB_EXE_csr_data = mie;
        end
        `ysyx_041461_MTVEC: begin
            WB_EXE_csr_data = mtvec;
        end
        `ysyx_041461_MSCRATCH: begin
            WB_EXE_csr_data = mscratch;
        end
        `ysyx_041461_MEPC: begin
            WB_EXE_csr_data = mepc;
        end
        `ysyx_041461_MCAUSE: begin
            WB_EXE_csr_data = mcause;
        end
        `ysyx_041461_MIP: begin
            WB_EXE_csr_data = mip;
        end
        `ysyx_041461_MCYCLE: begin
            WB_EXE_csr_data = mcycle;
        end
        `ysyx_041461_MINSTRET: begin
            WB_EXE_csr_data = minstret;
        end
        `ysyx_041461_MTVAL: begin
            WB_EXE_csr_data = mtval;
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
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_IF_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_ID_ECALL: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_ID_MRET: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MEPC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_ID_EBREAK: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_ID_ILLEGAL_INST: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_MEM_LOAD_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_MEM_STORE_MISALIGN: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'b0;
            end
            `ysyx_041461_TIMER_INTERRUPT: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_MTVEC;
                WB_IFreg_CAUSE = 63'd7;
            end
            default: begin
                WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_NOP;
                WB_IFreg_CAUSE = 63'b0;
            end
        endcase
    end
    else begin
        WB_IFreg_ctrl = `ysyx_041461_WB_IFreg_ctrl_NOP;
        WB_IFreg_CAUSE = 63'b0;
    end
end

always@(*) begin
    case(WB_csr)
        `ysyx_041461_MVENDORID: begin
            t = 64'b0;
        end
        `ysyx_041461_MARCHID: begin
            t = 64'b0;
        end
        `ysyx_041461_MIMPID: begin
            t = 64'b0;
        end
        `ysyx_041461_MHARTID: begin
            t = mhartid;
        end
        `ysyx_041461_MSTATUS: begin
            t = mstatus;
        end
        `ysyx_041461_MISA: begin
            t = misa;
        end
        `ysyx_041461_MIE: begin
            t = mie;
        end
        `ysyx_041461_MTVEC: begin
            t = mtvec;
        end
        `ysyx_041461_MSCRATCH: begin
            t = mscratch;
        end
        `ysyx_041461_MEPC: begin
            t = mepc;
        end
        `ysyx_041461_MCAUSE: begin
            t = mcause;
        end
        `ysyx_041461_MIP: begin
            t = mip;
        end
        `ysyx_041461_MCYCLE: begin
            t = mcycle;
        end
        `ysyx_041461_MINSTRET: begin
            t = minstret;
        end
        `ysyx_041461_MTVAL: begin
            t = mtval;
        end
        default: begin
            t = 64'b0;
        end
    endcase
end

always@(*) begin
    case(WB_ctrl)
        `ysyx_041461_WB_CSR_RS1: begin
            c = x[WB_rs1];
        end
        `ysyx_041461_WB_CSR_EXE: begin
            c = WB_EXE_in;
        end
        `ysyx_041461_WB_CSR_ZIMM: begin
            c = WB_zimm;
        end
        default: begin
            c = 64'b0;
        end
    endcase
end

always@(*) begin
    for(i = 0; i < 32; i = i + 1) begin
        d[i] = x[i];
    end
    if(WB_valid == 1'b1 && WB_trap == `ysyx_041461_TRAP_NOP) begin
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
                d[WB_rd] = WB_pc + 64'd4;
            end
            `ysyx_041461_WB_CSR_RS1: begin
                d[WB_rd] = t;
            end
            `ysyx_041461_WB_CSR_EXE: begin
                d[WB_rd] = t;
            end
            `ysyx_041461_WB_CSR_ZIMM: begin
                d[WB_rd] = t;
            end
            `ysyx_041461_WB_CSR_RO: begin
                d[WB_rd] = t;
            end
            default: begin

            end
        endcase
    end
    d[0] = 64'b0;
end

always@(*) begin
    mhartid_next = mhartid;
    mstatus_next = mstatus;
    misa_next = misa;
    mie_next = mie; 
    mtvec_next = mtvec;
    mscratch_next = mscratch;
    mepc_next = mepc;
    mcause_next = mcause;
    mip_next = mip; 
    mcycle_next = mcycle + 1'b1;
    minstret_next = minstret;
    mtval_next = mtval;
    if(WB_valid == 1'b1) begin
        if(WB_trap != `ysyx_041461_TRAP_NOP) begin
            case(WB_trap)
                `ysyx_041461_IF_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd0;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                    mtval_next = WB_pc;
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
                    ebreak();
                end
                `ysyx_041461_ID_ILLEGAL_INST: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd2;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                    mtval_next = {32'b0, WB_inst};
                end
                `ysyx_041461_MEM_LOAD_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd4;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                    mtval_next = WB_EXE_in;
                end
                `ysyx_041461_MEM_STORE_MISALIGN: begin
                    mepc_next = WB_pc;
                    mcause_next = 64'd6;
                    mstatus_next[3:3] = 1'b0;
                    mstatus_next[7:7] = mstatus[3:3];
                    mtval_next = WB_EXE_in;
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
            if(WB_IF_ok == 1'b1 && WB_EXE_ok == 1'b1 && WB_MEM_ok == 1'b1) begin
                minstret_next = minstret + 1'b1;
            end
        end
        else if(WB_ctrl == `ysyx_041461_WB_CSR_RS1 || WB_ctrl == `ysyx_041461_WB_CSR_EXE || WB_ctrl == `ysyx_041461_WB_CSR_ZIMM)begin
            minstret_next = minstret + 1'b1;
            case(WB_csr)
                `ysyx_041461_MSTATUS: begin
                    mstatus_next = c;
                end
                `ysyx_041461_MISA: begin
                    misa_next = c;
                end
                `ysyx_041461_MIE: begin
                    mie_next = c;
                end
                `ysyx_041461_MTVEC: begin
                    mtvec_next = c;
                end
                `ysyx_041461_MSCRATCH: begin
                    mscratch_next = c;
                end
                `ysyx_041461_MEPC: begin
                    mepc_next = c;
                end
                `ysyx_041461_MCAUSE: begin
                    mcause_next = c;
                end
                `ysyx_041461_MIP: begin
                    mip_next = c;
                end
                `ysyx_041461_MCYCLE: begin
                    mcycle_next = c;
                end
                `ysyx_041461_MINSTRET: begin
                    minstret_next = c;
                end
                `ysyx_041461_MTVAL: begin
                    mtval_next = c;
                end
                default: begin

                end
            endcase
        end
        else begin
            minstret_next = minstret + 1'b1;
        end
    end
    if(WB_interrupt == 1'b1) begin
        mip_next[7:7] = 1'b1;
    end
    else begin
        mip_next[7:7] = 1'b0;
    end
    {mip_next[63:8], mip_next[6:0]} = 63'b0;
    {mie_next[63:8], mie_next[6:0]} = 63'b0;
    {mstatus_next[63:13], mstatus_next[10:8], mstatus_next[6:4], mstatus_next[2:0]} = 60'b0;
    mstatus_next[12:11] = 2'b11;
end

always@(posedge clk or posedge rst)  begin
    if(rst == 1'b1) begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= 64'd0;
        end
        mhartid <= 64'b0;
        mstatus <= {51'b0, 2'b11, 11'b0};
        misa <= {2'b10, 36'b0, 26'b00000_00000_00010_00100_00000_0};
        mie <= 64'b0;
        mtvec <= 64'd0;
        mscratch <= 64'b0;
        mepc <= 64'd0;
        mcause <= 64'd0;
        mip <= 64'b0;
        mcycle <= 64'b0;
        minstret <= 64'b0;
        mtval <= 64'b0;
    end
    else begin
        for(j = 0; j < 32; j = j + 1) begin
            x[j] <= d[j];
        end
        mhartid <= mhartid_next;
        mstatus <= mstatus_next;
        misa <= misa_next ;
        mie <= mie_next;
        mtvec <= mtvec_next;
        mscratch <= mscratch_next;
        mepc <= mepc_next;
        mcause <= mcause_next;
        mip <= mip_next;
        mcycle <= mcycle_next;
        minstret <= minstret_next;
        mtval <= mtval_next;
    end
end

always@(*) begin
    get_skip({7'b0, WB_skip_difftest});
end

always@(*) begin
    get_need_difftest({7'b0, need_difftest});
end

reg [0:0] need_difftest;
always@(*) begin
    if(WB_valid == 1'b1) begin
        if(WB_trap != `ysyx_041461_TRAP_NOP && WB_IF_ok == 1'b0) begin
            need_difftest = 1'b0;
        end
        else begin
            need_difftest = 1'b1;
        end
    end
    else begin
        need_difftest = 1'b0;
    end
end


endmodule
