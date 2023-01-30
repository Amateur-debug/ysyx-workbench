`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_041461_macro.v"

module ysyx_041461_EXE(

    input  wire   [0:0]  clk          ,
    input  wire   [0:0]  rst          ,

    input  wire   [0:0]  EXE_valid_in ,
    input  wire   [3:0]  EXE_trap_in  ,
    input  wire   [63:0] EXE_rs1_data ,
    input  wire   [63:0] EXE_rs2_data ,
    input  wire   [63:0] EXE_csr_data ,
    input  wire   [63:0] EXE_imm      ,
    input  wire   [63:0] EXE_zimm     ,
    input  wire   [63:0] EXE_pc       ,
    input  wire   [4:0]  EXE_ctrl     ,
    input  wire   [2:0]  EXE_src      ,
    input  wire   [0:0]  EXE_conflict ,
    input  wire   [0:0]  EXE_MEM_ready,
    input  wire   [3:0]  EXE_MEM_trap ,
    input  wire   [3:0]  EXE_WB_trap  ,
    
    output reg    [63:0] EXE_out      ,
    output reg    [0:0]  EXE_valid_out,
    output reg    [0:0]  EXE_ready    
);

reg [1:0] state;
reg [63:0] middle;
reg [63:0] src1;
reg [63:0] src2;
reg [0:0] multiplication;
reg [0:0] division;

always@(*) begin
    if(EXE_ctrl == `ysyx_041461_EXE_MUL || EXE_ctrl == `ysyx_041461_EXE_MULH || EXE_ctrl == `ysyx_041461_EXE_MULHSU || EXE_ctrl == `ysyx_041461_EXE_MULHU || EXE_ctrl == `ysyx_041461_EXE_MULW) begin
        multiplication = 1'b1;
    end
    else begin
        multiplication = 1'b0;
    end
end

always@(*) begin
    if(EXE_ctrl == `ysyx_041461_EXE_DIV || EXE_ctrl == `ysyx_041461_EXE_DIVU || EXE_ctrl == `ysyx_041461_EXE_REM || EXE_ctrl == `ysyx_041461_EXE_REMU || EXE_ctrl == `ysyx_041461_EXE_DIVW || EXE_ctrl == `ysyx_041461_EXE_DIVUW || EXE_ctrl == `ysyx_041461_EXE_REMW || EXE_ctrl == `ysyx_041461_EXE_REMUW) begin
        division = 1'b1;
    end
    else begin
        division = 1'b0;
    end
end

always@(*) begin
    if(EXE_valid_in == 1'b0) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    else if(EXE_ctrl == `ysyx_041461_EXE_NOP) begin
        src1 = 64'b0;
        src2 = 64'b0;
    end
    else begin
        case(EXE_src)
            `ysyx_041461_EXE_src_NOP: begin
                src1 = 64'b0;
                src2 = 64'b0;
            end
            `ysyx_041461_EXE_R_R: begin
                src1 = EXE_rs1_data;
                src2 = EXE_rs2_data;
            end
            `ysyx_041461_EXE_R_I: begin
                src1 = EXE_rs1_data;
                src2 = EXE_imm;
            end
            `ysyx_041461_EXE_PC_I: begin
                src1 = EXE_pc;
                src2 = EXE_imm;
            end
            `ysyx_041461_EXE_R_CSR: begin
                src1 = EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `ysyx_041461_EXE_NOTR_CSR: begin
                src1 = ~EXE_rs1_data;
                src2 = EXE_csr_data;
            end
            `ysyx_041461_EXE_CSR_ZIMM: begin
                src1 = EXE_csr_data;
                src2 = EXE_zimm;
            end
            `ysyx_041461_EXE_CSR_NOTZIMM: begin
                src1 = EXE_csr_data;
                src2 = ~EXE_zimm;
            end
        endcase
    end
end


always@(*) begin
    if(EXE_valid_in == 1'b0 || EXE_trap_in != `ysyx_041461_TRAP_NOP) begin
        middle = 64'b0;
        EXE_out = 64'b0;
    end
    else begin
        case(EXE_ctrl)
            `ysyx_041461_EXE_NOP: begin
                middle = 64'b0;
                EXE_out = 64'b0;
            end
            `ysyx_041461_EXE_SLL: begin
                middle = 64'b0;
                EXE_out = src1 << src2[5:0];
            end
            `ysyx_041461_EXE_SRL: begin
                middle = 64'b0;
                EXE_out = src1 >> src2[5:0];
            end
            `ysyx_041461_EXE_SRA: begin
                middle = 64'b0;
                EXE_out = $signed(src1) >>> src2[5:0];
            end
            `ysyx_041461_EXE_ADD: begin
                middle = 64'b0;
                EXE_out = src1 + src2;
            end
            `ysyx_041461_EXE_SUB: begin
                middle = 64'b0;
                EXE_out = src1 - src2;
            end
            `ysyx_041461_EXE_XOR: begin
                middle = 64'b0;
                EXE_out = src1 ^ src2;
            end
            `ysyx_041461_EXE_OR: begin
                middle = 64'b0;
                EXE_out = src1 | src2;
            end
            `ysyx_041461_EXE_AND: begin
                middle = 64'b0;
                EXE_out = src1 & src2;
            end
            `ysyx_041461_EXE_SLT: begin
                middle = 64'b0;
                if($signed(src1) < $signed(src2)) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `ysyx_041461_EXE_SLTU: begin
                middle = 64'b0;
                if(src1 < src2) begin
                    EXE_out = 64'b1;
                end
                else begin
                    EXE_out = 64'b0;
                end
            end
            `ysyx_041461_EXE_MUL: begin
                middle = 64'b0;
                EXE_out = MUL_result_lo;
            end
            `ysyx_041461_EXE_MULH: begin
                middle = 64'b0;
                EXE_out = MUL_result_hi;
            end
            `ysyx_041461_EXE_MULHSU: begin
                middle = 64'b0;
                EXE_out = MUL_result_hi;
            end
            `ysyx_041461_EXE_MULHU: begin
                middle = 64'b0;
                EXE_out = MUL_result_hi;
            end
            `ysyx_041461_EXE_DIV: begin
                middle = 64'b0;
                EXE_out = DIV_quotient_out;
            end
            `ysyx_041461_EXE_DIVU: begin
                middle = 64'b0;
                EXE_out = DIV_quotient_out;
            end
            `ysyx_041461_EXE_REM: begin
                middle = 64'b0;
                EXE_out = DIV_remainder_out;
            end
            `ysyx_041461_EXE_REMU: begin
                middle = 64'b0;
                EXE_out = DIV_remainder_out;
            end
            `ysyx_041461_EXE_SLLW: begin
                middle = src1 << src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SRLW: begin
                middle[63:32] = 32'b0;
                middle[31:0] = src1[31:0] >> src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SRAW: begin
                middle[63:32] = 32'b0;
                middle[31:0] = $signed(src1[31:0]) >>> src2[4:0];
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_ADDW: begin
                middle = src1 + src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_SUBW: begin
                middle = src1 - src2;
                EXE_out = {{32{middle[31:31]}}, middle[31:0]};
            end
            `ysyx_041461_EXE_MULW: begin
                middle = 64'b0;
                EXE_out = {{32{MUL_result_lo[31:31]}}, MUL_result_lo[31:0]};
            end
            `ysyx_041461_EXE_DIVW: begin
                middle = 64'b0;
                EXE_out = {{32{DIV_quotient_out[31:31]}}, DIV_quotient_out[31:0]};
            end
            `ysyx_041461_EXE_DIVUW: begin
                middle = 64'b0;
                EXE_out = {{32{DIV_quotient_out[31:31]}}, DIV_quotient_out[31:0]};
            end
            `ysyx_041461_EXE_REMW: begin
                middle = 64'b0;
                EXE_out = {{32{DIV_remainder_out[31:31]}}, DIV_remainder_out[31:0]};
            end
            `ysyx_041461_EXE_REMUW: begin
                middle = 64'b0;
                EXE_out = {{32{DIV_remainder_out[31:31]}}, DIV_remainder_out[31:0]};
            end
            default: begin
                middle = 64'b0;
                EXE_out = 64'b0;
            end
        endcase
    end
end

always@(*) begin
    if(state == `ysyx_041461_EXE_START) begin
        if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
            if(multiplication == 1'b0 && division == 1'b0) begin
                EXE_valid_out = 1'b1;
            end
            else begin
                EXE_valid_out = 1'b0;
            end
        end
        else if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b1)begin
            EXE_valid_out = 1'b0;
        end
        else if(EXE_valid_in == 1'b1 && EXE_trap_in != `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP) begin
            EXE_valid_out = 1'b1;
        end
        else begin
            EXE_valid_out = 1'b0;
        end
    end
    else if(state == `ysyx_041461_EXE_FINISH) begin
        if(EXE_MEM_trap != `ysyx_041461_TRAP_NOP || EXE_WB_trap != `ysyx_041461_TRAP_NOP) begin
            EXE_valid_out = 1'b0;
        end
        else begin
            EXE_valid_out = 1'b1;
        end
    end
    else begin
        EXE_valid_out = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_EXE_START) begin
        if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
            if(multiplication == 1'b0 && division == 1'b0) begin
                if(EXE_MEM_ready == 1'b1) begin
                    EXE_ready = 1'b1;
                end
                else begin
                    EXE_ready = 1'b0;
                end
            end
            else begin
                EXE_ready = 1'b0;
            end
        end
        else if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b1)begin
            EXE_ready = 1'b0;
        end
        else if(EXE_valid_in == 1'b1 && EXE_trap_in != `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP) begin
            if(EXE_MEM_ready == 1'b1) begin
                EXE_ready = 1'b1;
            end
            else begin
                EXE_ready = 1'b0;
            end
        end
        else begin
            EXE_ready = 1'b1;
        end
    end
    else if(state == `ysyx_041461_EXE_FINISH) begin
        if(EXE_MEM_ready == 1'b1) begin
            EXE_ready = 1'b1;
        end
        else begin
            EXE_ready = 1'b0;
        end
    end
    else begin
        EXE_ready = 1'b0;
    end
end


reg [0:0] MUL_valid_in;
reg [1:0] MUL_signed;
wire [0:0] MUL_valid_out;
wire [63:0] MUL_result_hi;
wire [63:0] MUL_result_lo;

always@(*) begin
    case(EXE_ctrl)
        `ysyx_041461_EXE_MUL: begin
            MUL_signed = `ysyx_041461_MUL_signed_x_signed;
        end
        `ysyx_041461_EXE_MULH: begin
            MUL_signed = `ysyx_041461_MUL_signed_x_signed;
        end
        `ysyx_041461_EXE_MULHSU: begin
            MUL_signed = `ysyx_041461_MUL_signed_x_unsigned;
        end
        `ysyx_041461_EXE_MULHU: begin
            MUL_signed = `ysyx_041461_MUL_unsigned_x_unsigned;
        end
        `ysyx_041461_EXE_MULW: begin
            MUL_signed = `ysyx_041461_MUL_signed_x_signed;
        end
        default: begin
            MUL_signed = `ysyx_041461_MUL_signed_x_signed;
        end
    endcase
end

always@(*) begin
    if(state == `ysyx_041461_EXE_START ) begin
        if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
            if(multiplication == 1'b1) begin
                MUL_valid_in = 1'b1;
            end
            else begin
                MUL_valid_in = 1'b0;
            end
        end
        else begin
            MUL_valid_in = 1'b0;
        end
    end
    else begin
        MUL_valid_in = 1'b0;
    end
end

reg [0:0] DIV_valid_in;
reg [0:0] DIV_signed;
reg [0:0] DIV_divw;
wire [0:0] DIV_valid_out;
wire [63:0] DIV_quotient ;
wire [63:0] DIV_remainder;

always@(*) begin
    case(EXE_ctrl)
        `ysyx_041461_EXE_DIV: begin
            DIV_signed = 1'b1;
            DIV_divw = 1'b0;
        end
        `ysyx_041461_EXE_DIVU: begin
            DIV_signed = 1'b0;
            DIV_divw = 1'b0;
        end
        `ysyx_041461_EXE_REM: begin
            DIV_signed = 1'b1;
            DIV_divw = 1'b0;
        end
        `ysyx_041461_EXE_REMU: begin
            DIV_signed = 1'b0;
            DIV_divw = 1'b0;
        end
        `ysyx_041461_EXE_DIVW: begin
            DIV_signed = 1'b1;
            DIV_divw = 1'b1;
        end
        `ysyx_041461_EXE_DIVUW: begin
            DIV_signed = 1'b0;
            DIV_divw = 1'b1;
        end
        `ysyx_041461_EXE_REMW: begin
            DIV_signed = 1'b1;
            DIV_divw = 1'b1;
        end
        `ysyx_041461_EXE_REMUW: begin
            DIV_signed = 1'b0;
            DIV_divw = 1'b1;
        end
        default: begin
            DIV_signed = 1'b0;
            DIV_divw = 1'b0;
        end
    endcase
end

always@(*) begin
    if(state == `ysyx_041461_EXE_START ) begin
        if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
            if(division == 1'b1) begin
                DIV_valid_in = 1'b1;
            end
            else begin
                DIV_valid_in = 1'b0;
            end
        end
        else begin
            DIV_valid_in = 1'b0;
        end
    end
    else begin
        DIV_valid_in = 1'b0;
    end
end

reg [63:0] DIV_quotient_out;
reg [63:0] DIV_remainder_out;

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        DIV_quotient_out <= 64'b0;
        DIV_remainder_out <= 64'b0;
    end
    else begin
        if(state == `ysyx_041461_EXE_STATE_DIV) begin
            DIV_quotient_out <= DIV_quotient;
            DIV_remainder_out <= DIV_remainder;
        end
        else begin
            DIV_quotient_out <= DIV_quotient_out;
            DIV_remainder_out <= DIV_remainder_out;
        end
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= `ysyx_041461_EXE_START;
    end
    else begin
        case(state)
            `ysyx_041461_EXE_START: begin
                if(EXE_valid_in == 1'b1 && EXE_trap_in == `ysyx_041461_TRAP_NOP && EXE_MEM_trap == `ysyx_041461_TRAP_NOP && EXE_WB_trap == `ysyx_041461_TRAP_NOP && EXE_conflict == 1'b0) begin
                    if(multiplication == 1'b1) begin
                        state <= `ysyx_041461_EXE_STATE_MUL;
                    end
                    else if(division == 1'b1) begin
                        state <= `ysyx_041461_EXE_STATE_DIV;
                    end
                    else begin
                        state <= state;
                    end
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_EXE_STATE_MUL: begin
                if(MUL_valid_out == 1'b1) begin
                    state <= `ysyx_041461_EXE_FINISH;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_EXE_STATE_DIV: begin
                if(DIV_valid_out == 1'b1) begin
                    state <= `ysyx_041461_EXE_FINISH;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_EXE_FINISH: begin
                if(EXE_MEM_ready == 1'b1) begin
                    state <= `ysyx_041461_EXE_START;
                end
                else begin
                    state <= state;
                end
            end
        endcase
    end
end

ysyx_041461_MUL MUL(

    .clk              (clk),
    .rst              (rst),

    .MUL_valid_in     (MUL_valid_in),
    .MUL_signed       (MUL_signed),
    .MUL_multiplicand (src1),
    .MUL_multiplier   (src2),

    .MUL_valid_out    (MUL_valid_out),
    .MUL_result_hi    (MUL_result_hi),
    .MUL_result_lo    (MUL_result_lo)
);

ysyx_041461_DIV DIV(

  .clk           (clk),
  .rst           (rst),

  .DIV_valid_in  (DIV_valid_in),
  .DIV_signed    (DIV_signed  ),
  .DIV_divw      (DIV_divw    ),
  .DIV_dividend  (src1),
  .DIV_divisor   (src2),

  .DIV_valid_out (DIV_valid_out),
  .DIV_quotient  (DIV_quotient ),
  .DIV_remainder (DIV_remainder)
);

endmodule
