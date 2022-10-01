module ysyx_22041461_CSR(

    input   wire [0:0]  clk       ,
    input   wire [0:0]  rst       ,
    input   wire [1:0]  ctrl_CSRS ,
    input   wire [63:0] imm       ,
    input   wire [63:0] dest      ,
    input   wire [63:0] pc        ,
    input   wire [63:0] rs1_data  ,

    output  reg  [63:0] csr_data  
);

reg [63:0] mtvec;    //0x305
reg [63:0] mtvec_next;
reg [63:0] mepc;     //0x341
reg [63:0] mepc_next;
reg [63:0] mcause;   //0x342
reg [63:0] mcause_next;
reg [63:0] mstatus;  //0x300
reg [63:0] mstatus_next; 


always@(*) begin
    case(imm[11:0])
        12'h305: begin
            csr_data = mtvec;
        end
        12'h341: begin
            csr_data = mepc;
        end
        12'h342: begin
            csr_data = mcause;
        end
        12'h300: begin
            csr_data = status;
        end
        default: begin
            csr_data = 64'd0;
        end
    endcase
end

always@(*) begin
    mtvec_next   = mtvec;
    mepc_next    = mepc;
    mcause_next  = mcause;
    mstatus_next = mstatus;

    case(ctrl_CSRS)
        2'b00: begin

        end
        2'b01: begin
            case(imm[11:0])
                12'h305: begin
                    mtvec_next = rs1_data;
                end
                12'h341: begin
                    mepc_next = rs1_data;
                end
                12'h342: begin
                    mcause_next = rs1_data;
                end
                12'h300: begin
                    mstatus_next = rs1_data;
                end
                default: begin
                    
                end
            endcase
        end
        2'b10: begin
            case(imm[11:0])
                12'h305: begin
                    mtvec_next = dest;
                end
                12'h341: begin
                    mepc_next = dest;
                end
                12'h342: begin
                    mcause_next = dest;
                end
                12'h300: begin
                    mstatus_next = dest;
                end
                default: begin
                    
                end
            endcase
        end
        2'b11: begin
            mepc_next = pc;
            mcause_next = 64'd11;
        end
    endcase
end

always@(posedge clk) begin
    if(rst == 1'b0) begin
        mtvec   = 64'd0;
        mepc    = 64'd0;
        mcause  = 64'd0;
        mstatus = 64'd0;
    end
    else begin
        mtvec   = mtvec_next  ;
        mepc    = mepc_next   ;
        mcause  = mcause_next ;
        mstatus = mstatus_next;
    end
end


endmodule




