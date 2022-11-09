module ysyx_041461_WB(

    input   wire [0:0]   clk            ,
    input   wire [0:0]   rst            ,
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

assign WB_ID_rs1_data = x[WB_ID_rs1];
assign WB_ID_rs2_data = x[WB_ID_rs2];
assign WB_ID_csr_mtvec = mtvec;
assign WB_ID_csr_mepc = mepc;

assign WB_EXE_rs1_data = x[WB_EXE_rs1];
assign WB_EXE_rs2_data = x[WB_EXE_rs2];

assign WB_MEM_rs2_data = x[WB_MEM_rs2];


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
                    default: begin

                    end
                endcase
            end
            4'b0110: begin
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
                    default: begin

                    end
                endcase
            end
            `ysyx_041461_WB_ECALL: begin
                mepc_next = WB_pc;
                mcause_next = 64'd11;
            end
            `ysyx_041461_CD_EBREAK: begin
                mepc_next = WB_pc;
                mcause_next = 64'd3;
            end
            `ysyx_041461_CD_ILLEGAL_INST: begin
                mepc_next = WB_pc;
                mcause_next = 64'd2;
            end
            default: begin
                
            end
        endcase
    end
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