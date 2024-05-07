`include "ysyx_041461_macro.v"
module ysyx_041461_CLINT (

    input    wire   [0:0]    clk           ,
    input    wire   [0:0]    rst           ,
    output   reg    [0:0]    time_interrupt,
  
    output   reg             CLINT_awready ,
    input    wire            CLINT_awvalid ,
    input    wire   [3:0]    CLINT_awid    ,
    input    wire   [31:0]   CLINT_awaddr  ,
    input    wire   [7:0]    CLINT_awlen   ,
    input    wire   [2:0]    CLINT_awsize  ,
    input    wire   [1:0]    CLINT_awburst ,
 
    output   reg             CLINT_wready  ,
    input    wire            CLINT_wvalid  ,
    input    wire   [63:0]   CLINT_wdata   ,
    input    wire   [7:0]    CLINT_wstrb   ,
    input    wire            CLINT_wlast   ,
 
    input    wire            CLINT_bready  ,
    output   reg             CLINT_bvalid  ,
    output   reg    [3:0]    CLINT_bid     ,
    output   reg    [1:0]    CLINT_bresp   ,
  
    output   reg             CLINT_arready ,
    input    wire            CLINT_arvalid ,
    input    wire   [3:0]    CLINT_arid    ,
    input    wire   [31:0]   CLINT_araddr  ,
    input    wire   [7:0]    CLINT_arlen   ,
    input    wire   [2:0]    CLINT_arsize  ,
    input    wire   [1:0]    CLINT_arburst ,

    input    wire            CLINT_rready  ,
    output   reg             CLINT_rvalid  ,
    output   reg    [3:0]    CLINT_rid     ,
    output   reg    [1:0]    CLINT_rresp   ,
    output   reg    [63:0]   CLINT_rdata   ,
    output   reg             CLINT_rlast   

);

parameter OKAY = 2'b00;
//parameter EXOKAY = 2'b01;
//parameter SLVERR = 2'b10;
//parameter DECERR = 2'b11;


reg  [63:0]  mtime;
reg  [63:0]  mtime_next;
reg  [63:0]  mtimecmp;
reg  [63:0]  mtimecmp_next;
reg  [1:0]   state;

wire [0:0]   waddr_mtime_hit;
wire [0:0]   waddr_mtimecmp_hit;

wire [0:0]   raddr_mtime_hit;
wire [0:0]   raddr_mtimecmp_hit;

wire [0:0]   waddr_hit;
wire [0:0]   raddr_hit;

reg  [3:0]   awid        ;
reg  [3:0]   awid_next   ;
reg  [31:0]  awaddr      ;
reg  [31:0]  awaddr_next ;
reg  [7:0]   awlen       ;
reg  [7:0]   awlen_next  ;
reg  [2:0]   awsize      ;
reg  [2:0]   awsize_next ;
reg  [1:0]   awburst     ;
reg  [1:0]   awburst_next;

reg  [3:0]   arid        ;
reg  [3:0]   arid_next   ;
reg  [31:0]  araddr      ;
reg  [31:0]  araddr_next ;
reg  [7:0]   arlen       ;
reg  [7:0]   arlen_next  ;
reg  [2:0]   arsize      ;
reg  [2:0]   arsize_next ;
reg  [1:0]   arburst     ;
reg  [1:0]   arburst_next;

assign  waddr_hit = (awaddr_next >= 32'h0200_bff8 && awaddr_next <= 32'h0200_bfff) || (awaddr_next >= 32'h0200_4000 && awaddr_next <= 32'h0200_4007);
assign  raddr_hit = (araddr_next >= 32'h0200_bff8 && araddr_next <= 32'h0200_bfff) || (araddr_next >= 32'h0200_4000 && araddr_next <= 32'h0200_4007);

always@(*) begin
    if(mtime >= mtimecmp) begin
        time_interrupt = 1'b1;
    end
    else begin
        time_interrupt = 1'b0;
    end
end

always@(*) begin
    if(state == `ysyx_041461_CLINT_START) begin
        awid_next = CLINT_awid;
        awaddr_next = CLINT_awaddr;
        awlen_next = CLINT_awlen;
        awsize_next = CLINT_awsize;
        awburst_next = CLINT_awburst;
    end
    else begin
        awid_next = awid;
        awaddr_next = awaddr;
        awlen_next = awlen;
        awsize_next = awsize;
        awburst_next = awburst;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        awid <= 4'b0;
        awaddr <= 32'b0;
        awlen <= 8'b0;
        awsize <= 3'b0;
        awburst <= 2'b0;
    end
    else begin
        awid <= awid_next;
        awaddr <= awaddr_next;
        awlen <= awlen_next;
        awsize <= awsize_next;
        awburst <= awburst_next;
    end
end

always@(*) begin
    if(state == `ysyx_041461_CLINT_START) begin
        arid_next = CLINT_arid;
        araddr_next = CLINT_araddr;
        arlen_next = CLINT_arlen;
        arsize_next = CLINT_arsize;
        arburst_next = CLINT_arburst;
    end
    else begin
        arid_next = arid;
        araddr_next = araddr;
        arlen_next = arlen;
        arsize_next = arsize;
        arburst_next = arburst;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        arid <= 4'b0;
        araddr <= 32'b0;
        arlen <= 8'b0;
        arsize <= 3'b0;
        arburst <= 2'b0;
    end
    else begin
        arid <= arid_next;
        araddr <= araddr_next;
        arlen <= arlen_next;
        arsize <= arsize_next;
        arburst <= arburst_next;
    end
end

assign  waddr_mtime_hit = awaddr >= 32'h0200_bff8 && awaddr <= 32'h0200_bfff;
assign  waddr_mtimecmp_hit = awaddr >= 32'h0200_4000 && awaddr <= 32'h0200_4007;
assign  raddr_mtime_hit = araddr >= 32'h0200_bff8 && araddr <= 32'h0200_bfff;
assign  raddr_mtimecmp_hit = araddr >= 32'h0200_4000 && araddr <= 32'h0200_4007;


always@(*) begin
    case(state)
        `ysyx_041461_CLINT_START: begin
            CLINT_awready = 1'b1;
        end
        default: begin
            CLINT_awready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        `ysyx_041461_CLINT_START: begin
            CLINT_arready = 1'b1;
        end
        default: begin
            CLINT_arready = 1'b0;
        end
    endcase
end

always@(*) begin
    mtime_next = mtime + 1'b1;
    mtimecmp_next = mtimecmp;
    if(state == `ysyx_041461_CLINT_W && CLINT_wvalid == 1'b1) begin
        if(waddr_mtime_hit == 1'b1) begin
            case(awsize) 
                3'b000:begin
                    case(awaddr[2:0])
                        3'b000:begin
                            mtime_next[7:0] = CLINT_wdata[7:0];
                        end
                        3'b001:begin
                            mtime_next[15:8] = CLINT_wdata[15:8];
                        end
                        3'b010:begin
                            mtime_next[23:16] = CLINT_wdata[23:16];
                        end
                        3'b011:begin
                            mtime_next[31:24] = CLINT_wdata[31:24];
                        end
                        3'b100:begin
                            mtime_next[39:32] = CLINT_wdata[39:32];
                        end
                        3'b101:begin
                            mtime_next[47:40] = CLINT_wdata[47:40];
                        end
                        3'b110:begin
                            mtime_next[55:48] = CLINT_wdata[55:48];
                        end
                        3'b111:begin
                            mtime_next[63:56] = CLINT_wdata[63:56];
                        end
                    endcase
                end
                3'b001:begin
                    case(awaddr[2:1])
                        2'b00:begin
                            mtime_next[15:0] = CLINT_wdata[15:0];
                        end
                        2'b01:begin
                            mtime_next[31:16] = CLINT_wdata[31:16];
                        end
                        2'b10:begin
                            mtime_next[47:32] = CLINT_wdata[47:32];
                        end
                        2'b11:begin
                            mtime_next[63:48] = CLINT_wdata[63:48];
                        end
                    endcase
                end
                3'b010:begin
                    case(awaddr[2:2])
                        1'b0:begin
                            mtime_next[31:0] = CLINT_wdata[31:0];
                        end
                        1'b1:begin
                            mtime_next[63:32] = CLINT_wdata[63:32];
                        end
                    endcase
                end
                3'b011:begin
                    mtime_next = CLINT_wdata;
                end
                default:begin

                end
            endcase
        end
        else if(waddr_mtimecmp_hit == 1'b1) begin
            case(awsize) 
                3'b000:begin
                    case(awaddr[2:0])
                        3'b000:begin
                            mtimecmp_next[7:0] = CLINT_wdata[7:0];
                        end
                        3'b001:begin
                            mtimecmp_next[15:8] = CLINT_wdata[15:8];
                        end
                        3'b010:begin
                            mtimecmp_next[23:16] = CLINT_wdata[23:16];
                        end
                        3'b011:begin
                            mtimecmp_next[31:24] = CLINT_wdata[31:24];
                        end
                        3'b100:begin
                            mtimecmp_next[39:32] = CLINT_wdata[39:32];
                        end
                        3'b101:begin
                            mtimecmp_next[47:40] = CLINT_wdata[47:40];
                        end
                        3'b110:begin
                            mtimecmp_next[55:48] = CLINT_wdata[55:48];
                        end
                        3'b111:begin
                            mtimecmp_next[63:56] = CLINT_wdata[63:56];
                        end
                    endcase
                end
                3'b001:begin
                    case(awaddr[2:1])
                        2'b00:begin
                            mtimecmp_next[15:0] = CLINT_wdata[15:0];
                        end
                        2'b01:begin
                            mtimecmp_next[31:16] = CLINT_wdata[31:16];
                        end
                        2'b10:begin
                            mtimecmp_next[47:32] = CLINT_wdata[47:32];
                        end
                        2'b11:begin
                            mtimecmp_next[63:48] = CLINT_wdata[63:48];
                        end
                    endcase
                end
                3'b010:begin
                    case(awaddr[2:2])
                        1'b0:begin
                            mtimecmp_next[31:0] = CLINT_wdata[31:0];
                        end
                        1'b1:begin
                            mtimecmp_next[63:32] = CLINT_wdata[63:32];
                        end
                    endcase
                end
                3'b011:begin
                    mtimecmp_next = CLINT_wdata;
                end
                default:begin

                end
            endcase
        end
    end
end

always@(*) begin
    case(state)
        `ysyx_041461_CLINT_W:  begin
            CLINT_wready = 1'b1;
        end
        default: begin
            CLINT_wready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        `ysyx_041461_CLINT_WFINISH: begin
            CLINT_bvalid = 1'b1;
            CLINT_bid = awid;
            CLINT_bresp = OKAY;
        end
        default: begin
            CLINT_bvalid = 1'b0;
            CLINT_bid = awid;
            CLINT_bresp = OKAY;
        end
    endcase
end

always@(*) begin
    case(state)
        `ysyx_041461_CLINT_R: begin
            if(raddr_mtime_hit == 1'b1) begin
                CLINT_rdata = mtime;
            end
            else if(raddr_mtimecmp_hit == 1'b1) begin
                CLINT_rdata = mtimecmp;
            end
            else begin
                CLINT_rdata = 64'b0;
            end
        end
        default: begin
            CLINT_rdata = 64'b0;
        end
    endcase
end

always@(*) begin
    case(state)
        `ysyx_041461_CLINT_R: begin
            CLINT_rvalid = 1'b1;
            CLINT_rid = arid;
            CLINT_rresp = OKAY;
            CLINT_rlast = 1'b1;
        end
        default: begin
            CLINT_rvalid = 1'b0;
            CLINT_rid = 4'b0000;
            CLINT_rresp = OKAY;
            CLINT_rlast = 1'b0;
        end
    endcase
end


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        mtime <= 64'b0;
        mtimecmp <= 64'b0;
    end
    else begin
        mtime <= mtime_next;
        mtimecmp <= mtimecmp_next;
    end
end


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= `ysyx_041461_CLINT_START;
    end
    else begin
        case(state)
            `ysyx_041461_CLINT_START: begin
                if(CLINT_awvalid == 1'b1 && waddr_hit == 1'b1 && CLINT_awlen == 8'b000) begin
                    state <= `ysyx_041461_CLINT_W;
                end
                else if(CLINT_arvalid == 1'b1 && raddr_hit == 1'b1 && CLINT_arlen == 8'b000) begin
                    state <= `ysyx_041461_CLINT_R;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_CLINT_W: begin
                if(CLINT_wvalid == 1'b1 && CLINT_wlast == 1'b1) begin
                    state <= `ysyx_041461_CLINT_WFINISH;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_CLINT_WFINISH: begin
                if(CLINT_bready == 1'b1) begin
                    state <= `ysyx_041461_CLINT_START;
                end
                else begin
                    state <= state;
                end
            end
            `ysyx_041461_CLINT_R: begin
                if(CLINT_rready == 1'b1) begin
                    state <= `ysyx_041461_CLINT_START;
                end
                else begin
                    state <= state;
                end
            end
        endcase
    end
end

  
endmodule
