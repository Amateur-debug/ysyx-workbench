`include "ysyx_041461_macro.v"
module ysyx_041461_IF2(

    input   wire [0:0]    clk            ,
    input   wire [0:0]    rst            ,

    input   wire [63:0]   IF2_pc         ,
    input   wire [0:0]    IF2_hit1       ,
    input   wire [0:0]    IF2_hit2       ,
    input   wire [0:0]    IF2_hit3       ,
    input   wire [0:0]    IF2_hit4       ,
    input   wire [0:0]    IF2_hit5       ,
    input   wire [0:0]    IF2_hit6       ,
    input   wire [0:0]    IF2_hit7       ,
    input   wire [0:0]    IF2_hit8       ,
    input   wire [0:0]    IF2_valid_in   ,
    input   wire [3:0]    IF2_trap_in    ,
    input   wire [2:0]    IF2_ID_TYPE    ,
    input   wire [0:0]    IF2_ID_ready   ,
    input   wire [0:0]    IF2_CD_trap    ,
    
    output  reg  [0:0]    IF2_valid_out  ,
    output  wire [3:0]    IF2_trap_out   ,
    output  reg  [0:0]    IF2_ready      ,
    output  reg  [31:0]   IF2_inst       ,
   
    input   wire [127:0]  IF2_sram0_rdata,
    input   wire [127:0]  IF2_sram1_rdata,
    input   wire [127:0]  IF2_sram2_rdata,
    input   wire [127:0]  IF2_sram3_rdata,
    input   wire [63:0]   IF2_AXI_rdata
);

reg [0:0]   state;

reg [127:0] sram0_rdata;
reg [127:0] sram0_rdata_next;
reg [127:0] sram1_rdata;
reg [127:0] sram1_rdata_next;
reg [127:0] sram2_rdata;
reg [127:0] sram2_rdata_next;
reg [127:0] sram3_rdata;
reg [127:0] sram3_rdata_next;

assign IF2_trap_out = IF2_trap_in;

always@(*) begin
    if(state == `ysyx_041461_IF2_START) begin
        sram0_rdata_next = IF2_sram0_rdata;
        sram1_rdata_next = IF2_sram1_rdata;
        sram2_rdata_next = IF2_sram2_rdata;
        sram3_rdata_next = IF2_sram3_rdata;
    end
    else begin
        sram0_rdata_next = sram0_rdata;
        sram1_rdata_next = sram1_rdata;
        sram2_rdata_next = sram2_rdata;
        sram3_rdata_next = sram3_rdata;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        sram0_rdata <= 128'b0;
        sram1_rdata <= 128'b0;
        sram2_rdata <= 128'b0;
        sram3_rdata <= 128'b0;
    end
    else begin
        sram0_rdata <= sram0_rdata_next;
        sram1_rdata <= sram1_rdata_next;
        sram2_rdata <= sram2_rdata_next;
        sram3_rdata <= sram3_rdata_next;
    end
end

always@(*) begin
    if(IF2_hit1 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram0_rdata_next[31:0];
        end
        else begin
            IF2_inst = sram0_rdata_next[63:32];
        end
    end
    else if(IF2_hit2 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram0_rdata_next[95:64];
        end
        else begin
            IF2_inst = sram0_rdata_next[127:96];
        end
    end
    else if(IF2_hit3 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram1_rdata_next[31:0];
        end
        else begin
            IF2_inst = sram1_rdata_next[63:32];
        end
    end
    else if(IF2_hit4 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram1_rdata_next[95:64];
        end
        else begin
            IF2_inst = sram1_rdata_next[127:96];
        end
    end
    else if(IF2_hit5 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram2_rdata_next[31:0];
        end
        else begin
            IF2_inst = sram2_rdata_next[63:32];
        end
    end
    else if(IF2_hit6 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram2_rdata_next[95:64];
        end
        else begin
            IF2_inst = sram2_rdata_next[127:96];
        end
    end
    else if(IF2_hit7 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram3_rdata_next[31:0];
        end
        else begin
            IF2_inst = sram3_rdata_next[63:32];
        end
    end
    else if(IF2_hit8 == 1'b1) begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = sram3_rdata_next[95:64];
        end
        else begin
            IF2_inst = sram3_rdata_next[127:96];
        end
    end
    else begin
        if(IF2_pc[2:2] == 1'b0) begin
            IF2_inst = IF2_AXI_rdata[31:0];
        end
        else begin
            IF2_inst = IF2_AXI_rdata[63:32];
        end
    end
end

always@(*) begin
    if(IF2_valid_in == 1'b1 && IF2_ID_TYPE == `ysyx_041461_TYPE_NOP && IF2_CD_trap == 1'b0) begin
        IF2_valid_out = 1'b1;
    end
    else begin
        IF2_valid_out = 1'b0;
    end
end

always@(*) begin
    if(IF2_valid_in == 1'b1 && IF2_trap_in == `ysyx_041461_TRAP_NOP && IF2_ID_TYPE == `ysyx_041461_TYPE_NOP && IF2_CD_trap == 1'b0) begin
        if(IF2_ID_ready == 1'b1) begin
            IF2_ready = 1'b1;
        end
        else begin
            IF2_ready = 1'b0;
        end
    end
    else begin
        IF2_ready = 1'b1;
    end
end


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= `ysyx_041461_IF2_START;
    end
    else begin
        case(state)
            `ysyx_041461_IF2_START: begin
                if(IF2_valid_in == 1'b1 && IF2_ID_TYPE == `ysyx_041461_TYPE_NOP && IF2_CD_trap == 1'b0 && IF2_ID_ready == 1'b0) begin
                    state <= `ysyx_041461_IF2_FINISH;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_IF2_FINISH: begin
                if(IF2_ID_ready == 1'b1 || IF2_CD_trap == 1'b1) begin
                    state <= `ysyx_041461_IF2_START;
                end
                else begin
                    state <= state;
                end
            end
        endcase
    end
end

endmodule
