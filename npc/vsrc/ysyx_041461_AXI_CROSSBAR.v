`include "ysyx_041461_macro.v"
module ysyx_041461_AXI_CROSSBAR(

    input    wire   [0:0]    clk                 ,
    input    wire   [0:0]    rst                 ,
  
    output   reg             AXI_CROSSBAR_awready,
    input    reg             AXI_CROSSBAR_awvalid,
    input    reg    [3:0]    AXI_CROSSBAR_awid   ,
    input    reg    [31:0]   AXI_CROSSBAR_awaddr ,
    input    reg    [7:0]    AXI_CROSSBAR_awlen  ,
    input    reg    [2:0]    AXI_CROSSBAR_awsize ,
    input    reg    [1:0]    AXI_CROSSBAR_awburst,
 
    output   reg             AXI_CROSSBAR_wready ,
    input    reg             AXI_CROSSBAR_wvalid ,
    input    reg    [63:0]   AXI_CROSSBAR_wdata  ,
    input    reg    [7:0]    AXI_CROSSBAR_wstrb  ,
    input    reg             AXI_CROSSBAR_wlast  ,
 
    input    reg             AXI_CROSSBAR_bready ,
    output   reg             AXI_CROSSBAR_bvalid ,
    output   reg    [3:0]    AXI_CROSSBAR_bid    ,
    output   reg    [1:0]    AXI_CROSSBAR_bresp  ,
  
    output   reg             AXI_CROSSBAR_arready,
    input    reg             AXI_CROSSBAR_arvalid,
    input    reg    [3:0]    AXI_CROSSBAR_arid   ,
    input    reg    [31:0]   AXI_CROSSBAR_araddr ,
    input    reg    [7:0]    AXI_CROSSBAR_arlen  ,
    input    reg    [2:0]    AXI_CROSSBAR_arsize ,
    input    reg    [1:0]    AXI_CROSSBAR_arburst,

    input    reg             AXI_CROSSBAR_rready ,
    output   reg             AXI_CROSSBAR_rvalid ,
    output   reg    [3:0]    AXI_CROSSBAR_rid    ,
    output   reg    [1:0]    AXI_CROSSBAR_rresp  ,
    output   reg    [63:0]   AXI_CROSSBAR_rdata  ,
    output   reg             AXI_CROSSBAR_rlast   

);

import "DPI-C" function void paddr_read(input longint raddr, output longint rdata);
import "DPI-C" function void paddr_write(input longint waddr, input longint wdata, input byte wmask); 

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
parameter SLVERR = 2'b10;
parameter DECERR = 2'b11;

`define ysyx_041461_AXI_CROSSBAR_WSTART 2'b00
`define ysyx_041461_AXI_CROSSBAR_W 2'b01
`define ysyx_041461_AXI_CROSSBAR_WFINISH 2'b10

`define ysyx_041461_AXI_CROSSBAR_RSTART 1'b0
`define ysyx_041461_AXI_CROSSBAR_RFINISH 1'b1

reg [1:0]   wstate;
reg [0:0]   rstate;

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

always@(*) begin
    if(wstate == `ysyx_041461_AXI_CROSSBAR_WSTART) begin
        awid_next = AXI_CROSSBAR_awid;
        awaddr_next = AXI_CROSSBAR_awaddr;
        awlen_next = AXI_CROSSBAR_awlen;
        awsize_next = AXI_CROSSBAR_awsize;
        awburst_next = AXI_CROSSBAR_awburst;
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
    if(rstate == `ysyx_041461_AXI_CROSSBAR_RSTART) begin
        arid_next = AXI_CROSSBAR_arid;
        araddr_next = AXI_CROSSBAR_araddr;
        arlen_next = AXI_CROSSBAR_arlen;
        arsize_next = AXI_CROSSBAR_arsize;
        arburst_next = AXI_CROSSBAR_arburst;
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

always@(*) begin
    if(wstate == `ysyx_041461_AXI_CROSSBAR_WSTART) begin
        AXI_CROSSBAR_awready = 1'b1;
    end
    else begin
        AXI_CROSSBAR_awready = 1'b0;
    end
end

always@(*) begin
    if(wstate == `ysyx_041461_AXI_CROSSBAR_W) begin
        AXI_CROSSBAR_wready = 1'b1;
    end
    else begin
        AXI_CROSSBAR_wready = 1'b0;
    end
end

always@(*) begin
    if(wstate == `ysyx_041461_AXI_CROSSBAR_WFINISH) begin
        AXI_CROSSBAR_bvalid = 1'b1;
        AXI_CROSSBAR_bid = awid;  
        AXI_CROSSBAR_bresp = OKAY;
    end
    else begin
        AXI_CROSSBAR_bvalid = 1'b0;
        AXI_CROSSBAR_bid = 4'b0;  
        AXI_CROSSBAR_bresp = OKAY;
    end
end

always@(*) begin
    if(wstate == `ysyx_041461_AXI_CROSSBAR_W && AXI_CROSSBAR_wvalid == 1'b1) begin
        paddr_write({32'b0, awaddr}, AXI_CROSSBAR_wdata, AXI_CROSSBAR_wstrb);
    end
end

always@(*) begin
    if(rstate == `ysyx_041461_AXI_CROSSBAR_RSTART) begin
        AXI_CROSSBAR_arready = 1'b1;
    end
    else begin
        AXI_CROSSBAR_arready = 1'b0;
    end
end

always@(*) begin
    if(rstate == `ysyx_041461_AXI_CROSSBAR_RFINISH) begin
        AXI_CROSSBAR_rvalid = 1'b1;
        AXI_CROSSBAR_rid = arid;
        AXI_CROSSBAR_rresp = OKAY;
        paddr_read({32'b0, araddr}, AXI_CROSSBAR_rdata);
        AXI_CROSSBAR_rlast = 1'b1;
    end
    else begin
        AXI_CROSSBAR_rvalid = 1'b0;
        AXI_CROSSBAR_rid = 4'b0;
        AXI_CROSSBAR_rresp = OKAY;
        AXI_CROSSBAR_rdata = 64'b0;
        AXI_CROSSBAR_rlast = 1'b0;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        wstate <= `ysyx_041461_AXI_CROSSBAR_WSTART;
    end
    else begin
        case(wstate)
            `ysyx_041461_AXI_CROSSBAR_WSTART: begin
                if(AXI_CROSSBAR_awvalid == 1'b1) begin
                    wstate <= `ysyx_041461_AXI_CROSSBAR_W;
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_AXI_CROSSBAR_W: begin
                if(AXI_CROSSBAR_wvalid == 1'b1 && AXI_CROSSBAR_wlast == 1'b1) begin
                    wstate <= `ysyx_041461_AXI_CROSSBAR_WFINISH;
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_AXI_CROSSBAR_WFINISH: begin
                if(AXI_CROSSBAR_bready == 1'b1) begin
                    wstate <= `ysyx_041461_AXI_CROSSBAR_WSTART;
                end
                else begin
                    wstate <= wstate;
                end
            end
            default: begin
                wstate <= `ysyx_041461_AXI_CROSSBAR_WSTART;
            end
        endcase
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        rstate <= `ysyx_041461_AXI_CROSSBAR_RSTART;
    end
    else begin
        case(rstate)
            `ysyx_041461_AXI_CROSSBAR_RSTART: begin
                if(AXI_CROSSBAR_arvalid == 1'b1) begin
                    rstate <= `ysyx_041461_AXI_CROSSBAR_RFINISH;
                end
                else begin
                    rstate <= rstate;
                end
            end
            `ysyx_041461_AXI_CROSSBAR_RFINISH: begin
                if(AXI_CROSSBAR_rready == 1'b1) begin
                    rstate <= `ysyx_041461_AXI_CROSSBAR_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end
        endcase
    end
end


endmodule
