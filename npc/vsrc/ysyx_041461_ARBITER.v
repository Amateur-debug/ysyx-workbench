`include "ysyx_041461_macro.v"
module  ysyx_041461_ARBITER(

    input   wire [0:0]    clk                  ,
    input   wire [0:0]    rst                  ,

    input   wire [0:0]    ARBITER_IF_arvalid   ,
    input   wire [31:0]   ARBITER_IF_araddr    ,
    input   wire [3:0]    ARBITER_IF_arid      ,
    input   wire [7:0]    ARBITER_IF_arlen     ,
    input   wire [2:0]    ARBITER_IF_arsize    ,
    input   wire [1:0]    ARBITER_IF_arburst   ,
    output  reg  [0:0]    ARBITER_IF_arready   ,

    input   wire [0:0]    ARBITER_IF_rready    ,
    output  reg  [0:0]    ARBITER_IF_rvalid    ,
    output  reg  [1:0]    ARBITER_IF_rresp     ,
    output  reg  [63:0]   ARBITER_IF_rdata     ,
    output  reg  [0:0]    ARBITER_IF_rlast     ,
    output  reg  [3:0]    ARBITER_IF_rid       ,

    input   wire [0:0]    ARBITER_MEM_arvalid  ,
    input   wire [31:0]   ARBITER_MEM_araddr   ,
    input   wire [3:0]    ARBITER_MEM_arid     ,
    input   wire [7:0]    ARBITER_MEM_arlen    ,
    input   wire [2:0]    ARBITER_MEM_arsize   ,
    input   wire [1:0]    ARBITER_MEM_arburst  ,
    output  reg  [0:0]    ARBITER_MEM_arready  ,

    input   wire [0:0]    ARBITER_MEM_rready   ,
    output  reg  [0:0]    ARBITER_MEM_rvalid   ,
    output  reg  [1:0]    ARBITER_MEM_rresp    ,
    output  reg  [63:0]   ARBITER_MEM_rdata    ,
    output  reg  [0:0]    ARBITER_MEM_rlast    ,
    output  reg  [3:0]    ARBITER_MEM_rid      ,

    output  reg  [0:0]    ARBITER_MEM_awready  ,
    input   wire [0:0]    ARBITER_MEM_awvalid  ,
    input   wire [31:0]   ARBITER_MEM_awaddr   ,
    input   wire [3:0]    ARBITER_MEM_awid     ,
    input   wire [7:0]    ARBITER_MEM_awlen    ,
    input   wire [2:0]    ARBITER_MEM_awsize   ,
    input   wire [1:0]    ARBITER_MEM_awburst  ,
       
    output  reg  [0:0]    ARBITER_MEM_wready   ,
    input   wire [0:0]    ARBITER_MEM_wvalid   ,
    input   wire [63:0]   ARBITER_MEM_wdata    ,
    input   wire [7:0]    ARBITER_MEM_wstrb    ,
    input   wire [0:0]    ARBITER_MEM_wlast    ,
       
    input   wire [0:0]    ARBITER_MEM_bready   ,
    output  reg  [0:0]    ARBITER_MEM_bvalid   ,
    output  reg  [1:0]    ARBITER_MEM_bresp    ,
    output  reg  [3:0]    ARBITER_MEM_bid      ,
    
    input   wire          ARBITER_CLINT_awready,
    output  reg           ARBITER_CLINT_awvalid,
    output  wire [3:0]    ARBITER_CLINT_awid   ,
    output  wire [31:0]   ARBITER_CLINT_awaddr ,
    output  wire [7:0]    ARBITER_CLINT_awlen  ,
    output  wire [2:0]    ARBITER_CLINT_awsize ,
    output  wire [1:0]    ARBITER_CLINT_awburst,
 
    input   wire          ARBITER_CLINT_wready ,
    output  reg           ARBITER_CLINT_wvalid ,
    output  wire [63:0]   ARBITER_CLINT_wdata  ,
    output  wire [7:0]    ARBITER_CLINT_wstrb  ,
    output  wire          ARBITER_CLINT_wlast  ,
 
    output  wire          ARBITER_CLINT_bready ,
    input   wire          ARBITER_CLINT_bvalid ,
    input   wire [3:0]    ARBITER_CLINT_bid    ,
    input   wire [1:0]    ARBITER_CLINT_bresp  ,

    input   wire          ARBITER_CLINT_arready,
    output  reg           ARBITER_CLINT_arvalid,
    output  reg  [3:0]    ARBITER_CLINT_arid   ,
    output  reg  [31:0]   ARBITER_CLINT_araddr ,
    output  reg  [7:0]    ARBITER_CLINT_arlen  ,
    output  reg  [2:0]    ARBITER_CLINT_arsize ,
    output  reg  [1:0]    ARBITER_CLINT_arburst,

    output  reg           ARBITER_CLINT_rready ,
    input   wire          ARBITER_CLINT_rvalid ,
    input   wire [3:0]    ARBITER_CLINT_rid    ,
    input   wire [1:0]    ARBITER_CLINT_rresp  ,
    input   wire [63:0]   ARBITER_CLINT_rdata  ,
    input   wire          ARBITER_CLINT_rlast  ,

    input   wire          ARBITER_io_awready   ,
    output  reg           ARBITER_io_awvalid   ,
    output  wire [3:0]    ARBITER_io_awid      ,
    output  wire [31:0]   ARBITER_io_awaddr    ,
    output  wire [7:0]    ARBITER_io_awlen     ,
    output  wire [2:0]    ARBITER_io_awsize    ,
    output  wire [1:0]    ARBITER_io_awburst   ,
 
    input   wire          ARBITER_io_wready    ,
    output  reg           ARBITER_io_wvalid    ,
    output  wire [63:0]   ARBITER_io_wdata     ,
    output  wire [7:0]    ARBITER_io_wstrb     ,
    output  wire          ARBITER_io_wlast     ,
 
    output  wire          ARBITER_io_bready    ,
    input   wire          ARBITER_io_bvalid    ,
    input   wire [3:0]    ARBITER_io_bid       ,
    input   wire [1:0]    ARBITER_io_bresp     ,

    input   wire [0:0]    ARBITER_io_arready   ,
    output  reg  [0:0]    ARBITER_io_arvalid   ,
    output  reg  [31:0]   ARBITER_io_araddr    ,
    output  reg  [3:0]    ARBITER_io_arid      ,
    output  reg  [7:0]    ARBITER_io_arlen     ,
    output  reg  [2:0]    ARBITER_io_arsize    ,
    output  reg  [1:0]    ARBITER_io_arburst   ,

    output  reg  [0:0]    ARBITER_io_rready    ,
    input   wire [0:0]    ARBITER_io_rvalid    ,
    input   wire [1:0]    ARBITER_io_rresp     ,
    input   wire [63:0]   ARBITER_io_rdata     ,
    input   wire [0:0]    ARBITER_io_rlast     ,
    input   wire [3:0]    ARBITER_io_rid        
);

parameter IF_AXI_id = 4'b0000;
parameter MEM_AXI_id = 4'b0001;

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
//parameter SLVERR = 2'b10;
//parameter DECERR = 2'b11;

//parameter FIXED = 2'b00;
//parameter INCR = 2'b01;
//parameter WRAP = 2'b10;
//parameter Rserved = 2'b11;

reg  [1:0]  rstate;
reg  [1:0]  wstate;
wire [0:0]  rclint;
wire [0:0]  wclint;

//在pa中，由于地址冲突，需要屏蔽CLINT模块
assign rclint = (ARBITER_MEM_araddr >= 32'h0200_bff8 && ARBITER_MEM_araddr <= 32'h0200_bfff) || (ARBITER_MEM_araddr >= 32'h0200_4000 && ARBITER_MEM_araddr <= 32'h0200_4007);
assign wclint = (ARBITER_MEM_awaddr >= 32'h0200_bff8 && ARBITER_MEM_awaddr <= 32'h0200_bfff) || (ARBITER_MEM_awaddr >= 32'h0200_4000 && ARBITER_MEM_awaddr <= 32'h0200_4007);

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        rstate <= `ysyx_041461_ARBITER_RSTART;
    end
    else begin
        case(rstate)
            `ysyx_041461_ARBITER_RSTART: begin
                if(ARBITER_IF_arvalid == 1'b1) begin
                    rstate <= `ysyx_041461_ARBITER_IF_RAXI;
                end
                else if(ARBITER_MEM_arvalid == 1'b1) begin
                    if(rclint == 1'b1) begin
                        rstate <= `ysyx_041461_ARBITER_MEM_RCLINT;
                    end
                    else if(rclint == 1'b0) begin
                        rstate <= `ysyx_041461_ARBITER_MEM_RAXI;
                    end
                    else begin
                        rstate <= rstate;
                    end
                end
                else begin
                    rstate <= rstate;
                end
            end
            `ysyx_041461_ARBITER_IF_RAXI: begin
                if(ARBITER_IF_rready == 1'b1 && ARBITER_io_rvalid == 1'b1 && (ARBITER_io_rresp == OKAY || ARBITER_io_rresp == EXOKAY) && ARBITER_io_rlast == 1'b1 && ARBITER_io_rid == IF_AXI_id) begin
                    rstate <= `ysyx_041461_ARBITER_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end   
            `ysyx_041461_ARBITER_MEM_RAXI: begin
                if(ARBITER_MEM_rready == 1'b1 && ARBITER_io_rvalid == 1'b1 && (ARBITER_io_rresp == OKAY || ARBITER_io_rresp == EXOKAY) && ARBITER_io_rlast == 1'b1 && ARBITER_io_rid == MEM_AXI_id) begin
                    rstate <= `ysyx_041461_ARBITER_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end       
            `ysyx_041461_ARBITER_MEM_RCLINT: begin
                if(ARBITER_MEM_rready == 1'b1 && ARBITER_CLINT_rvalid == 1'b1 && (ARBITER_CLINT_rresp == OKAY || ARBITER_CLINT_rresp == EXOKAY) && ARBITER_CLINT_rlast == 1'b1 && ARBITER_CLINT_rid == MEM_AXI_id) begin
                    rstate <= `ysyx_041461_ARBITER_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end
            default: begin
                rstate <= `ysyx_041461_ARBITER_RSTART;
            end
        endcase
    end
end


always@(*) begin
    case(rstate)
        `ysyx_041461_ARBITER_RSTART: begin
            if(ARBITER_IF_arvalid == 1'b1) begin
                ARBITER_io_arvalid = ARBITER_IF_arvalid;
                ARBITER_io_arid    = ARBITER_IF_arid   ;
                ARBITER_io_araddr  = ARBITER_IF_araddr ;
                ARBITER_io_arlen   = ARBITER_IF_arlen  ;
                ARBITER_io_arsize  = ARBITER_IF_arsize ;
                ARBITER_io_arburst = ARBITER_IF_arburst;
            end
            else if(ARBITER_MEM_arvalid == 1'b1 && rclint == 1'b0) begin
                ARBITER_io_arvalid = ARBITER_MEM_arvalid;
                ARBITER_io_arid    = ARBITER_MEM_arid   ;
                ARBITER_io_araddr  = ARBITER_MEM_araddr ;
                ARBITER_io_arlen   = ARBITER_MEM_arlen  ;
                ARBITER_io_arsize  = ARBITER_MEM_arsize ;
                ARBITER_io_arburst = ARBITER_MEM_arburst;
            end
            else begin
                ARBITER_io_arvalid = ARBITER_IF_arvalid;
                ARBITER_io_arid    = ARBITER_IF_arid   ;
                ARBITER_io_araddr  = ARBITER_IF_araddr ;
                ARBITER_io_arlen   = ARBITER_IF_arlen  ;
                ARBITER_io_arsize  = ARBITER_IF_arsize ;
                ARBITER_io_arburst = ARBITER_IF_arburst;
            end
            ARBITER_io_rready = 1'b0;
        end
        `ysyx_041461_ARBITER_IF_RAXI: begin
            ARBITER_io_arvalid = ARBITER_IF_arvalid;
            ARBITER_io_arid    = ARBITER_IF_arid   ;
            ARBITER_io_araddr  = ARBITER_IF_araddr ;
            ARBITER_io_arlen   = ARBITER_IF_arlen  ;
            ARBITER_io_arsize  = ARBITER_IF_arsize ;
            ARBITER_io_arburst = ARBITER_IF_arburst;
            ARBITER_io_rready = ARBITER_IF_rready;
        end
        `ysyx_041461_ARBITER_MEM_RAXI: begin
            ARBITER_io_arvalid = ARBITER_MEM_arvalid;
            ARBITER_io_arid    = ARBITER_MEM_arid   ;
            ARBITER_io_araddr  = ARBITER_MEM_araddr ;
            ARBITER_io_arlen   = ARBITER_MEM_arlen  ;
            ARBITER_io_arsize  = ARBITER_MEM_arsize ;
            ARBITER_io_arburst = ARBITER_MEM_arburst;
            ARBITER_io_rready = ARBITER_MEM_rready;
        end
        default: begin
            ARBITER_io_arvalid = 1'b0;
            ARBITER_io_arid    = 4'b0;
            ARBITER_io_araddr  = 32'b0;
            ARBITER_io_arlen   = 8'b0;
            ARBITER_io_arsize  = 3'b0;
            ARBITER_io_arburst = 2'b0;
            ARBITER_io_rready = 1'b0;
        end
    endcase
end       

 always@(*) begin
    case(rstate)
        `ysyx_041461_ARBITER_RSTART: begin
            if(ARBITER_IF_arvalid == 1'b0 && ARBITER_MEM_arvalid == 1'b1 && rclint == 1'b1) begin
                ARBITER_CLINT_arvalid = ARBITER_MEM_arvalid;
                ARBITER_CLINT_arid    = ARBITER_MEM_arid   ;
                ARBITER_CLINT_araddr  = ARBITER_MEM_araddr ;
                ARBITER_CLINT_arlen   = ARBITER_MEM_arlen  ;
                ARBITER_CLINT_arsize  = ARBITER_MEM_arsize ;
                ARBITER_CLINT_arburst = ARBITER_MEM_arburst;
            end
            else begin
                ARBITER_CLINT_arvalid = 1'b0;
                ARBITER_CLINT_arid    = 4'b0;
                ARBITER_CLINT_araddr  = 32'b0;
                ARBITER_CLINT_arlen   = 8'b0;
                ARBITER_CLINT_arsize  = 3'b0;
                ARBITER_CLINT_arburst = 2'b0;
            end
            ARBITER_CLINT_rready = 1'b0;
        end
        `ysyx_041461_ARBITER_MEM_RCLINT: begin
            ARBITER_CLINT_arvalid = 1'b0;
            ARBITER_CLINT_arid    = 4'b0;
            ARBITER_CLINT_araddr  = 32'b0;
            ARBITER_CLINT_arlen   = 8'b0;
            ARBITER_CLINT_arsize  = 3'b0;
            ARBITER_CLINT_arburst = 2'b0;
            ARBITER_CLINT_rready = ARBITER_MEM_rready;
        end
        default: begin
            ARBITER_CLINT_arvalid = 1'b0;
            ARBITER_CLINT_arid    = 4'b0;
            ARBITER_CLINT_araddr  = 32'b0;
            ARBITER_CLINT_arlen   = 8'b0;
            ARBITER_CLINT_arsize  = 3'b0;
            ARBITER_CLINT_arburst = 2'b0;
            ARBITER_CLINT_rready = 1'b0;
        end
    endcase
end       

always@(*) begin
    case(rstate)
        `ysyx_041461_ARBITER_RSTART: begin
            ARBITER_IF_arready = ARBITER_io_arready;
            ARBITER_IF_rvalid = 1'b0 ;
            ARBITER_IF_rresp  = 2'b0 ;
            ARBITER_IF_rdata  = 64'b0;
            ARBITER_IF_rlast  = 1'b0 ;
            ARBITER_IF_rid    = 4'b0 ;
        end
        `ysyx_041461_ARBITER_IF_RAXI: begin
            ARBITER_IF_arready = ARBITER_io_arready;
            ARBITER_IF_rvalid = ARBITER_io_rvalid;
            ARBITER_IF_rresp  = ARBITER_io_rresp ;
            ARBITER_IF_rdata  = ARBITER_io_rdata ;
            ARBITER_IF_rlast  = ARBITER_io_rlast ;
            ARBITER_IF_rid    = ARBITER_io_rid   ;
        end
        default: begin
            ARBITER_IF_arready = 1'b0;
            ARBITER_IF_rvalid = 1'b0 ;
            ARBITER_IF_rresp  = 2'b0 ;
            ARBITER_IF_rdata  = 64'b0;
            ARBITER_IF_rlast  = 1'b0 ;
            ARBITER_IF_rid    = 4'b0 ;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_ARBITER_RSTART: begin
            if(ARBITER_IF_arvalid == 1'b0 && ARBITER_MEM_arvalid == 1'b1) begin
                if(rclint == 1'b0) begin
                    ARBITER_MEM_arready = ARBITER_io_arready;
                end
                else begin
                    ARBITER_MEM_arready = ARBITER_CLINT_arready;
                end
            end
            else begin
                ARBITER_MEM_arready = 1'b0;
            end
            ARBITER_MEM_rvalid = 1'b0 ;
            ARBITER_MEM_rresp  = 2'b0 ;
            ARBITER_MEM_rdata  = 64'b0;
            ARBITER_MEM_rlast  = 1'b0 ;
            ARBITER_MEM_rid    = 4'b0 ;
        end
        `ysyx_041461_ARBITER_MEM_RAXI: begin
            ARBITER_MEM_arready = ARBITER_io_arready;
            ARBITER_MEM_rvalid = ARBITER_io_rvalid;
            ARBITER_MEM_rresp  = ARBITER_io_rresp ;
            ARBITER_MEM_rdata  = ARBITER_io_rdata ;
            ARBITER_MEM_rlast  = ARBITER_io_rlast ;
            ARBITER_MEM_rid    = ARBITER_io_rid   ;
        end
        `ysyx_041461_ARBITER_MEM_RCLINT: begin
            ARBITER_MEM_arready = ARBITER_CLINT_arready;
            ARBITER_MEM_rvalid = ARBITER_CLINT_rvalid;
            ARBITER_MEM_rresp  = ARBITER_CLINT_rresp ;
            ARBITER_MEM_rdata  = ARBITER_CLINT_rdata ;
            ARBITER_MEM_rlast  = ARBITER_CLINT_rlast ;
            ARBITER_MEM_rid    = ARBITER_CLINT_rid   ;
        end
        default: begin
            ARBITER_MEM_arready = 1'b0;
            ARBITER_MEM_rvalid = 1'b0 ;
            ARBITER_MEM_rresp  = 2'b0 ;
            ARBITER_MEM_rdata  = 64'b0;
            ARBITER_MEM_rlast  = 1'b0 ;
            ARBITER_MEM_rid    = 4'b0 ;
        end
    endcase
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        wstate <= `ysyx_041461_ARBITER_WSTART;
    end
    else begin
        case(wstate)
            `ysyx_041461_ARBITER_WSTART: begin
                if(ARBITER_MEM_awvalid == 1'b1) begin
                    if(wclint == 1'b0) begin
                        wstate <= `ysyx_041461_ARBITER_WAXI;
                    end
                    else begin
                        wstate <= `ysyx_041461_ARBITER_WCLINT;
                    end
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_ARBITER_WAXI: begin
                 if(ARBITER_MEM_bready == 1'b1 && ARBITER_io_bvalid == 1'b1 && (ARBITER_io_bresp == OKAY || ARBITER_io_bresp == EXOKAY) && ARBITER_io_bid == MEM_AXI_id) begin
                    wstate <= `ysyx_041461_ARBITER_WSTART;
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_ARBITER_WCLINT: begin
                if(ARBITER_MEM_bready == 1'b1 && ARBITER_CLINT_bvalid == 1'b1 && (ARBITER_CLINT_bresp == OKAY || ARBITER_CLINT_bresp == EXOKAY) && ARBITER_CLINT_bid == MEM_AXI_id) begin
                    wstate <= `ysyx_041461_ARBITER_WSTART;
                end
                else begin
                    wstate <= wstate;
                end
            end
            default: begin
                wstate <= `ysyx_041461_ARBITER_WSTART;
            end
        endcase
    end
end

always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WSTART: begin
            if(wclint == 1'b0) begin
                ARBITER_io_awvalid = ARBITER_MEM_awvalid;
            end
            else begin
                ARBITER_io_awvalid = 1'b0;
            end
        end
        `ysyx_041461_ARBITER_WAXI: begin
            ARBITER_io_awvalid = ARBITER_MEM_awvalid;
        end
        default: begin
            ARBITER_io_awvalid = 1'b0;
        end
    endcase
end

always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WAXI: begin
            ARBITER_io_wvalid = ARBITER_MEM_wvalid;
        end
        default: begin
            ARBITER_io_wvalid = 1'b0;
        end
    endcase
end

assign ARBITER_io_awid    = ARBITER_MEM_awid   ;
assign ARBITER_io_awaddr  = ARBITER_MEM_awaddr ;
assign ARBITER_io_awlen   = ARBITER_MEM_awlen  ;
assign ARBITER_io_awsize  = ARBITER_MEM_awsize ;
assign ARBITER_io_awburst = ARBITER_MEM_awburst;
assign ARBITER_io_wdata   = ARBITER_MEM_wdata  ;
assign ARBITER_io_wstrb   = ARBITER_MEM_wstrb  ;
assign ARBITER_io_wlast   = ARBITER_MEM_wlast  ;
assign ARBITER_io_bready  = ARBITER_MEM_bready ;

always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WSTART: begin
            if(wclint == 1'b1) begin
                ARBITER_CLINT_awvalid = ARBITER_MEM_awvalid;
            end
            else begin
                ARBITER_CLINT_awvalid = 1'b0;
            end
        end
        `ysyx_041461_ARBITER_WCLINT: begin
            ARBITER_CLINT_awvalid = ARBITER_MEM_awvalid;
        end
        default: begin
            ARBITER_CLINT_awvalid = 1'b0;
        end
    endcase
end

always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WCLINT: begin
            ARBITER_CLINT_wvalid = ARBITER_MEM_wvalid;
        end
        default: begin
            ARBITER_CLINT_wvalid = 1'b0;
        end
    endcase
end

assign ARBITER_CLINT_awid    = ARBITER_MEM_awid   ;
assign ARBITER_CLINT_awaddr  = ARBITER_MEM_awaddr ;
assign ARBITER_CLINT_awlen   = ARBITER_MEM_awlen  ;
assign ARBITER_CLINT_awsize  = ARBITER_MEM_awsize ;
assign ARBITER_CLINT_awburst = ARBITER_MEM_awburst;
assign ARBITER_CLINT_wdata   = ARBITER_MEM_wdata  ;
assign ARBITER_CLINT_wstrb   = ARBITER_MEM_wstrb  ;
assign ARBITER_CLINT_wlast   = ARBITER_MEM_wlast  ;
assign ARBITER_CLINT_bready  = ARBITER_MEM_bready ;


always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WSTART: begin
            if(wclint == 1'b1) begin
                ARBITER_MEM_awready = ARBITER_CLINT_awready;
            end
            else begin
                ARBITER_MEM_awready = ARBITER_io_awready;
            end
        end
        `ysyx_041461_ARBITER_WAXI: begin
            ARBITER_MEM_awready = ARBITER_io_awready;
        end
        `ysyx_041461_ARBITER_WCLINT: begin
            ARBITER_MEM_awready = ARBITER_CLINT_awready;
        end
        default: begin
            ARBITER_MEM_awready = 1'b0;
        end
    endcase
end


always@(*) begin
    case(wstate)
        `ysyx_041461_ARBITER_WAXI: begin
            ARBITER_MEM_wready = ARBITER_io_wready;
            ARBITER_MEM_bvalid = ARBITER_io_bvalid;
            ARBITER_MEM_bresp  = ARBITER_io_bresp;
            ARBITER_MEM_bid    = ARBITER_io_bid;
        end
        `ysyx_041461_ARBITER_WCLINT: begin
            ARBITER_MEM_wready = ARBITER_CLINT_wready;
            ARBITER_MEM_bvalid = ARBITER_CLINT_bvalid;
            ARBITER_MEM_bresp  = ARBITER_CLINT_bresp;
            ARBITER_MEM_bid    = ARBITER_CLINT_bid;
        end
        default: begin
            ARBITER_MEM_wready = 1'b0;
            ARBITER_MEM_bvalid = 1'b0;
            ARBITER_MEM_bresp  = 2'b0;
            ARBITER_MEM_bid    = 4'b0;
        end
    endcase
end

endmodule