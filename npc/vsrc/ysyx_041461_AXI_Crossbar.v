module  ysyx_041461_AXI_Crossbar(

    input   wire [0:0]    clk                       ,
    input   wire [0:0]    rst                       ,

    input   wire [0:0]    AXI_Crossbar_IF_arvalid   ,
    input   wire [31:0]   AXI_Crossbar_IF_araddr    ,
    input   wire [3:0]    AXI_Crossbar_IF_arid      ,
    input   wire [7:0]    AXI_Crossbar_IF_arlen     ,
    input   wire [2:0]    AXI_Crossbar_IF_arsize    ,
    input   wire [1:0]    AXI_Crossbar_IF_arburst   ,
    output  reg  [0:0]    AXI_Crossbar_IF_arready   ,

    input   wire [0:0]    AXI_Crossbar_IF_rready    ,
    output  wire [0:0]    AXI_Crossbar_IF_rvalid    ,
    output  wire [1:0]    AXI_Crossbar_IF_rresp     ,
    output  wire [63:0]   AXI_Crossbar_IF_rdata     ,
    output  wire [0:0]    AXI_Crossbar_IF_rlast     ,
    output  wire [3:0]    AXI_Crossbar_IF_rid       ,

    input   wire [0:0]    AXI_Crossbar_MEM_arvalid  ,
    input   wire [31:0]   AXI_Crossbar_MEM_araddr   ,
    input   wire [3:0]    AXI_Crossbar_MEM_arid     ,
    input   wire [7:0]    AXI_Crossbar_MEM_arlen    ,
    input   wire [2:0]    AXI_Crossbar_MEM_arsize   ,
    input   wire [1:0]    AXI_Crossbar_MEM_arburst  ,
    output  reg  [0:0]    AXI_Crossbar_MEM_arready  ,

    input   wire [0:0]    AXI_Crossbar_MEM_rready   ,
    output  wire [0:0]    AXI_Crossbar_MEM_rvalid   ,
    output  wire [1:0]    AXI_Crossbar_MEM_rresp    ,
    output  wire [63:0]   AXI_Crossbar_MEM_rdata    ,
    output  wire [0:0]    AXI_Crossbar_MEM_rlast    ,
    output  wire [3:0]    AXI_Crossbar_MEM_rid      ,

    output  wire [0:0]    AXI_Crossbar_MEM_awready  ,
    input   wire [0:0]    AXI_Crossbar_MEM_awvalid  ,
    input   reg  [31:0]   AXI_Crossbar_MEM_awaddr   ,
    input   wire [3:0]    AXI_Crossbar_MEM_awid     ,
    input   wire [7:0]    AXI_Crossbar_MEM_awlen    ,
    input   wire [2:0]    AXI_Crossbar_MEM_awsize   ,
    input   wire [1:0]    AXI_Crossbar_MEM_awburst  ,
       
    output  wire [0:0]    AXI_Crossbar_MEM_wready   ,
    input   wire [0:0]    AXI_Crossbar_MEM_wvalid   ,
    input   wire [63:0]   AXI_Crossbar_MEM_wdata    ,
    input   wire [7:0]    AXI_Crossbar_MEM_wstrb    ,
    input   wire [0:0]    AXI_Crossbar_MEM_wlast    ,
       
    input   wire [0:0]    AXI_Crossbar_MEM_bready   ,
    output  wire [0:0]    AXI_Crossbar_MEM_bvalid   ,
    output  wire [1:0]    AXI_Crossbar_MEM_bresp    ,
    output  wire [3:0]    AXI_Crossbar_MEM_bid      ,
    
    input   wire          AXI_Crossbar_CLINT_awready,
    output  reg           AXI_Crossbar_CLINT_awvalid,
    output  wire [3:0]    AXI_Crossbar_CLINT_awid   ,
    output  wire [31:0]   AXI_Crossbar_CLINT_awaddr ,
    output  wire [7:0]    AXI_Crossbar_CLINT_awlen  ,
    output  wire [2:0]    AXI_Crossbar_CLINT_awsize ,
    output  wire [1:0]    AXI_Crossbar_CLINT_awburst,
 
    input   wire          AXI_Crossbar_CLINT_wready ,
    output  wire          AXI_Crossbar_CLINT_wvalid ,
    output  wire [63:0]   AXI_Crossbar_CLINT_wdata  ,
    output  wire [7:0]    AXI_Crossbar_CLINT_wstrb  ,
    output  wire          AXI_Crossbar_CLINT_wlast  ,
 
    output  wire          AXI_Crossbar_CLINT_bready ,
    input   wire          AXI_Crossbar_CLINT_bvalid ,
    input   wire [3:0]    AXI_Crossbar_CLINT_bid    ,
    input   wire [1:0]    AXI_Crossbar_CLINT_bresp  ,
  
    input   wire          AXI_Crossbar_CLINT_arready,
    output  wire          AXI_Crossbar_CLINT_arvalid,
    output  wire [3:0]    AXI_Crossbar_CLINT_arid   ,
    output  wire [31:0]   AXI_Crossbar_CLINT_araddr ,
    output  wire [7:0]    AXI_Crossbar_CLINT_arlen  ,
    output  wire [2:0]    AXI_Crossbar_CLINT_arsize ,
    output  wire [1:0]    AXI_Crossbar_CLINT_arburst,

    output  wire          AXI_Crossbar_CLINT_rready ,
    input   wire          AXI_Crossbar_CLINT_rvalid ,
    input   wire [3:0]    AXI_Crossbar_CLINT_rid    ,
    input   wire [1:0]    AXI_Crossbar_CLINT_rresp  ,
    input   wire [63:0]   AXI_Crossbar_CLINT_rdata  ,
    input   wire          AXI_Crossbar_CLINT_rlast  ,

    input   wire          AXI_Crossbar_io_awready   ,
    output  wire          AXI_Crossbar_io_awvalid   ,
    output  wire [3:0]    AXI_Crossbar_io_awid      ,
    output  wire [31:0]   AXI_Crossbar_io_awaddr    ,
    output  wire [7:0]    AXI_Crossbar_io_awlen     ,
    output  wire [2:0]    AXI_Crossbar_io_awsize    ,
    output  wire [1:0]    AXI_Crossbar_io_awburst   ,
 
    input   wire          AXI_Crossbar_io_wready    ,
    output  wire          AXI_Crossbar_io_wvalid    ,
    output  wire [63:0]   AXI_Crossbar_io_wdata     ,
    output  wire [7:0]    AXI_Crossbar_io_wstrb     ,
    output  wire          AXI_Crossbar_io_wlast     ,
 
    output  wire          AXI_Crossbar_io_bready    ,
    input   wire          AXI_Crossbar_io_bvalid    ,
    input   wire [3:0]    AXI_Crossbar_io_bid       ,
    input   wire [1:0]    AXI_Crossbar_io_bresp     ,

    input   wire [0:0]    AXI_Crossbar_io_arready   ,
    output  reg  [0:0]    AXI_Crossbar_io_arvalid   ,
    output  reg  [31:0]   AXI_Crossbar_io_araddr    ,
    output  reg  [3:0]    AXI_Crossbar_io_arid      ,
    output  reg  [7:0]    AXI_Crossbar_io_arlen     ,
    output  reg  [2:0]    AXI_Crossbar_io_arsize    ,
    output  reg  [1:0]    AXI_Crossbar_io_arburst   ,

    output  reg  [0:0]    AXI_Crossbar_io_rready    ,
    input   wire [0:0]    AXI_Crossbar_io_rvalid    ,
    input   wire [1:0]    AXI_Crossbar_io_rresp     ,
    input   wire [63:0]   AXI_Crossbar_io_rdata     ,
    input   wire [0:0]    AXI_Crossbar_io_rlast     ,
    input   wire [3:0]    AXI_Crossbar_io_rid        
);

parameter IF_AXI_id = 4'b0000;
parameter MEM_AXI_id = 4'b0001;

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
parameter SLVERR = 2'b10;
parameter DECERR = 2'b11;

parameter FIXED = 2'b00;
parameter INCR = 2'b01;
parameter WRAP = 2'b10;
parameter Rserved = 2'b11;

reg  [1:0]  rstate;
reg  [1:0]  wstate;
wire [0:0]  rclint;
wire [0:0]  wclint;

assign rclint = (AXI_Crossbar_MEM_araddr >= 32'h0200_bff8 && AXI_Crossbar_MEM_araddr <= 32'h0200_bfff) || (AXI_Crossbar_MEM_araddr >= 32'h0200_4000 && AXI_Crossbar_MEM_araddr <= 32'h0200_4007);
assign wclint = (AXI_Crossbar_MEM_awaddr >= 32'h0200_bff8 && AXI_Crossbar_MEM_awaddr <= 32'h0200_bfff) || (AXI_Crossbar_MEM_awaddr >= 32'h0200_4000 && AXI_Crossbar_MEM_awaddr <= 32'h0200_4007);

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        rstate <= `ysyx_041461_AXI_Crossbar_RSTART;
    end
    else begin
        case(rstate)
            `ysyx_041461_AXI_Crossbar_RSTART: begin
                if(AXI_Crossbar_IF_arvalid == 1'b1 && AXI_Crossbar_io_arready == 1'b1) begin
                    rstate <= `ysyx_041461_AXI_Crossbar_IF_RAXI;
                end
                else if(AXI_Crossbar_MEM_arvalid == 1'b1) begin
                    if(rclint == 1'b1 && AXI_Crossbar_CLINT_arready == 1'b1) begin
                        rstate <= `ysyx_041461_AXI_Crossbar_MEM_RCLINT;
                    end
                    else if(AXI_Crossbar_io_arready == 1'b1) begin
                        rstate <= `ysyx_041461_AXI_Crossbar_MEM_RAXI;
                    end
                    else begin
                        rstate <= rstate;
                    end
                end
                else begin
                    rstate <= rstate;
                end
            end
            `ysyx_041461_AXI_Crossbar_IF_RAXI: begin
                if(AXI_Crossbar_IF_rready == 1'b1 && AXI_Crossbar_io_rvalid == 1'b1 && (AXI_Crossbar_io_rresp == OKAY || AXI_Crossbar_io_rresp == EXOKAY) && AXI_Crossbar_io_rlast == 1'b1 && AXI_Crossbar_io_rid == IF_AXI_id) begin
                    rstate <= `ysyx_041461_AXI_Crossbar_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end
            `ysyx_041461_AXI_Crossbar_MEM_RAXI: begin
                if(AXI_Crossbar_MEM_rready == 1'b1 && AXI_Crossbar_io_rvalid == 1'b1 && (AXI_Crossbar_io_rresp == OKAY || AXI_Crossbar_io_rresp == EXOKAY) && AXI_Crossbar_io_rlast == 1'b1 && AXI_Crossbar_io_rid == MEM_AXI_id) begin
                    rstate <= `ysyx_041461_AXI_Crossbar_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end       
            `ysyx_041461_AXI_Crossbar_MEM_RCLINT: begin
                if(AXI_Crossbar_MEM_rready == 1'b1 && AXI_Crossbar_CLINT_rvalid == 1'b1 && (AXI_Crossbar_CLINT_rresp == OKAY || AXI_Crossbar_CLINT_rresp == EXOKAY) && AXI_Crossbar_CLINT_rlast == 1'b1 && AXI_Crossbar_CLINT_rid == MEM_AXI_id) begin
                    rstate <= `ysyx_041461_AXI_Crossbar_RSTART;
                end
                else begin
                    rstate <= rstate;
                end
            end
        endcase
    end
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_RSTART: begin
            AXI_Crossbar_IF_arready = AXI_Crossbar_io_arready;
        end
        default: begin
            AXI_Crossbar_IF_arready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_IF_RAXI: begin
            AXI_Crossbar_IF_rvalid = AXI_Crossbar_io_rvalid;
            AXI_Crossbar_IF_rresp  = AXI_Crossbar_io_rresp ;
            AXI_Crossbar_IF_rdata  = AXI_Crossbar_io_rdata ;
            AXI_Crossbar_IF_rlast  = AXI_Crossbar_io_rlast ;
            AXI_Crossbar_IF_rid    = AXI_Crossbar_io_rid   ;
        end
        default: begin
            AXI_Crossbar_IF_rvalid = 1'b0 ;
            AXI_Crossbar_IF_rresp  = 2'b0 ;
            AXI_Crossbar_IF_rdata  = 64'b0;
            AXI_Crossbar_IF_rlast  = 1'b0 ;
            AXI_Crossbar_IF_rid    = 4'b0 ;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_RSTART: begin
            if(rclint == 1'b1) begin
                AXI_Crossbar_MEM_arready = AXI_Crossbar_CLINT_arready;
            end
            else if(AXI_Crossbar_IF_arvalid == 1'b1) begin
                AXI_Crossbar_MEM_arready = 1'b0;
            end
            else begin
                AXI_Crossbar_MEM_arready = AXI_Crossbar_io_arready;
            end
        end
        default: begin
            AXI_Crossbar_MEM_arready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_MEM_RAXI: begin
            AXI_Crossbar_MEM_rvalid = AXI_Crossbar_io_rvalid;
            AXI_Crossbar_MEM_rresp  = AXI_Crossbar_io_rresp ;
            AXI_Crossbar_MEM_rdata  = AXI_Crossbar_io_rdata ;
            AXI_Crossbar_MEM_rlast  = AXI_Crossbar_io_rlast ;
            AXI_Crossbar_MEM_rid    = AXI_Crossbar_io_rid   ;
        end
        `ysyx_041461_AXI_Crossbar_MEM_RCLINT: begin
            AXI_Crossbar_MEM_rvalid = AXI_Crossbar_CLINT_rvalid;
            AXI_Crossbar_MEM_rresp  = AXI_Crossbar_CLINT_rresp ;
            AXI_Crossbar_MEM_rdata  = AXI_Crossbar_CLINT_rdata ;
            AXI_Crossbar_MEM_rlast  = AXI_Crossbar_CLINT_rlast ;
            AXI_Crossbar_MEM_rid    = AXI_Crossbar_CLINT_rid   ;
        end
        default: begin
            AXI_Crossbar_MEM_rvalid = 1'b0 ;
            AXI_Crossbar_MEM_rresp  = 2'b0 ;
            AXI_Crossbar_MEM_rdata  = 64'b0;
            AXI_Crossbar_MEM_rlast  = 1'b0 ;
            AXI_Crossbar_MEM_rid    = 4'b0 ;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_RSTART: begin
            AXI_Crossbar_CLINT_arvalid = AXI_Crossbar_MEM_arvalid;
            AXI_Crossbar_CLINT_arid    = AXI_Crossbar_MEM_arid;
            AXI_Crossbar_CLINT_araddr  = AXI_Crossbar_MEM_araddr;
            AXI_Crossbar_CLINT_arlen   = AXI_Crossbar_MEM_arlen  ;
            AXI_Crossbar_CLINT_arsize  = AXI_Crossbar_MEM_arsize ;
            AXI_Crossbar_CLINT_arburst = AXI_Crossbar_MEM_arburst;
        end
        default: begin
            AXI_Crossbar_CLINT_arvalid = 1'b0;
            AXI_Crossbar_CLINT_arid    = 4'b0;
            AXI_Crossbar_CLINT_araddr  = 32'b0;
            AXI_Crossbar_CLINT_arlen   = 8'b0;
            AXI_Crossbar_CLINT_arsize  = 3'b0;
            AXI_Crossbar_CLINT_arburst = 2'b0;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_MEM_RCLINT: begin
            AXI_Crossbar_CLINT_rready = AXI_Crossbar_MEM_rready;
        end
        default: begin
            AXI_Crossbar_CLINT_rready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_RSTART: begin
            if(AXI_Crossbar_IF_arvalid == 1'b1) begin
                AXI_Crossbar_io_arvalid = AXI_Crossbar_IF_arvalid;
                AXI_Crossbar_io_arid    = AXI_Crossbar_IF_arid   ;
                AXI_Crossbar_io_araddr  = AXI_Crossbar_IF_araddr ;
                AXI_Crossbar_io_arlen   = AXI_Crossbar_IF_arlen  ;
                AXI_Crossbar_io_arsize  = AXI_Crossbar_IF_arsize ;
                AXI_Crossbar_io_arburst = AXI_Crossbar_IF_arburst;
            end
            else if(rclint == 1'b0) begin
                AXI_Crossbar_io_arvalid = AXI_Crossbar_MEM_arvalid;
                AXI_Crossbar_io_arid    = AXI_Crossbar_MEM_arid   ;
                AXI_Crossbar_io_araddr  = AXI_Crossbar_MEM_araddr ; 
                AXI_Crossbar_io_arlen   = AXI_Crossbar_MEM_arlen  ;
                AXI_Crossbar_io_arsize  = AXI_Crossbar_MEM_arsize ;
                AXI_Crossbar_io_arburst = AXI_Crossbar_MEM_arburst;
            end
            else begin
                AXI_Crossbar_io_arvalid = 1'b0;
                AXI_Crossbar_io_arid    = 4'b0;
                AXI_Crossbar_io_araddr  = 32'b0;
                AXI_Crossbar_io_arlen   = 8'b0;
                AXI_Crossbar_io_arsize  = 3'b0;
                AXI_Crossbar_io_arburst = 2'b0;
            end
        end
        default: begin
            AXI_Crossbar_io_arvalid = 1'b0;
            AXI_Crossbar_io_arid    = 4'b0;
            AXI_Crossbar_io_araddr  = 32'b0;
            AXI_Crossbar_io_arlen   = 8'b0;
            AXI_Crossbar_io_arsize  = 3'b0;
            AXI_Crossbar_io_arburst = 2'b0;
        end
    endcase
end

always@(*) begin
    case(rstate)
        `ysyx_041461_AXI_Crossbar_IF_RAXI: begin
            AXI_Crossbar_io_rready = AXI_Crossbar_IF_rready;
        end
        `ysyx_041461_AXI_Crossbar_MEM_RAXI: begin
            AXI_Crossbar_io_rready = AXI_Crossbar_MEM_rready;
        end
        default: begin
            AXI_Crossbar_io_rready = 1'b0;
        end
    endcase
end


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        wstate <= `ysyx_041461_AXI_Crossbar_WSTART;
    end
    else begin
        case(wstate)
            `ysyx_041461_AXI_Crossbar_WSTART: begin
                if(AXI_Crossbar_MEM_awvalid == 1'b1) begin
                    if(wclint == 1'b0) begin
                        if(AXI_Crossbar_io_awready == 1'b1) begin
                            wstate <= `ysyx_041461_AXI_Crossbar_WAXI;
                        end
                        else begin
                            wstate <= wstate;
                        end
                    end
                    else begin
                        if(AXI_Crossbar_CLINT_awready == 1'b1) begin
                            wstate <= `ysyx_041461_AXI_Crossbar_WCLINT;
                        end
                        else begin
                            wstate <= wstate;
                        end
                    end
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_AXI_Crossbar_WAXI: begin
                 if(AXI_Crossbar_io_bvalid == 1'b1 && (AXI_Crossbar_io_bresp == OKAY || AXI_Crossbar_io_bresp == EXOKAY) && AXI_Crossbar_io_bid == MEM_AXI_id) begin
                    wstate <= `ysyx_041461_AXI_Crossbar_WSTART;
                end
                else begin
                    wstate <= wstate;
                end
            end
            `ysyx_041461_AXI_Crossbar_WCLINT: begin
                if(AXI_Crossbar_CLINT_bvalid == 1'b1 && (AXI_Crossbar_CLINT_bresp == OKAY || AXI_Crossbar_CLINT_bresp == EXOKAY) && AXI_Crossbar_CLINT_bid == MEM_AXI_id) begin
                    wstate <= `ysyx_041461_AXI_Crossbar_WSTART;
                end
                else begin
                    wstate <= wstate;
                end
            end
            default: begin
                wstate <= `ysyx_041461_AXI_Crossbar_WSTART;
            end
        endcase
    end
end

always@(*) begin
    case(wstate)
        `ysyx_041461_AXI_Crossbar_WSTART: begin
            if(wclint == 1'b1) begin
                AXI_Crossbar_MEM_awready = AXI_Crossbar_CLINT_awready;
            end
            else begin
                AXI_Crossbar_MEM_awready = AXI_Crossbar_io_awready;
            end
        end
        default: begin
            AXI_Crossbar_MEM_awready = 1'b0;
        end
    endcase
end

always@(*) begin
    case(wstate)
        `ysyx_041461_AXI_Crossbar_WSTART: begin
            if(wclint == 1'b1) begin
                AXI_Crossbar_CLINT_awvalid = AXI_Crossbar_MEM_awvalid;
            end
            else begin
                AXI_Crossbar_CLINT_awvalid = 1'b0;
            end
        end
        default: begin
            AXI_Crossbar_CLINT_awvalid = 1'b0;
        end
    endcase
end

assign AXI_Crossbar_CLINT_awid    = AXI_Crossbar_MEM_awid   ;
assign AXI_Crossbar_CLINT_awaddr  = AXI_Crossbar_MEM_awaddr ;
assign AXI_Crossbar_CLINT_awlen   = AXI_Crossbar_MEM_awlen  ;
assign AXI_Crossbar_CLINT_awsize  = AXI_Crossbar_MEM_awsize ;
assign AXI_Crossbar_CLINT_awburst = AXI_Crossbar_MEM_awburst;
assign AXI_Crossbar_CLINT_wvalid  = AXI_Crossbar_MEM_wvalid ;
assign AXI_Crossbar_CLINT_wdata   = AXI_Crossbar_MEM_wdata  ;
assign AXI_Crossbar_CLINT_wstrb   = AXI_Crossbar_MEM_wstrb  ;
assign AXI_Crossbar_CLINT_wlast   = AXI_Crossbar_MEM_wlast  ;
assign AXI_Crossbar_CLINT_bready  = AXI_Crossbar_MEM_bready ;

always@(*) begin
    case(wstate)
        `ysyx_041461_AXI_Crossbar_WSTART: begin
            if(wclint == 1'b0) begin
                AXI_Crossbar_io_awvalid = AXI_Crossbar_MEM_awvalid;
            end
            else begin
                AXI_Crossbar_io_awvalid = 1'b0;
            end
        end
        default: begin
            AXI_Crossbar_io_awvalid = 1'b0;
        end
    endcase
end

assign AXI_Crossbar_io_awid    = AXI_Crossbar_MEM_awid   ;
assign AXI_Crossbar_io_awaddr  = AXI_Crossbar_MEM_awaddr ;
assign AXI_Crossbar_io_awlen   = AXI_Crossbar_MEM_awlen  ;
assign AXI_Crossbar_io_awsize  = AXI_Crossbar_MEM_awsize ;
assign AXI_Crossbar_io_awburst = AXI_Crossbar_MEM_awburst;
assign AXI_Crossbar_io_wvalid  = AXI_Crossbar_MEM_wvalid ;
assign AXI_Crossbar_io_wdata   = AXI_Crossbar_MEM_wdata  ;
assign AXI_Crossbar_io_wstrb   = AXI_Crossbar_MEM_wstrb  ;
assign AXI_Crossbar_io_wlast   = AXI_Crossbar_MEM_wlast  ;
assign AXI_Crossbar_io_bready  = AXI_Crossbar_MEM_bready ;

always@(*) begin
    case(wstate)
        `ysyx_041461_AXI_Crossbar_WAXI: begin
            AXI_Crossbar_MEM_wready = AXI_Crossbar_io_wready;
            AXI_Crossbar_MEM_bvalid = AXI_Crossbar_io_bvalid;
            AXI_Crossbar_MEM_bresp  = AXI_Crossbar_io_bresp;
            AXI_Crossbar_MEM_bid    = AXI_Crossbar_io_bid;
        end
        `ysyx_041461_AXI_Crossbar_WCLINT: begin
            AXI_Crossbar_MEM_wready = AXI_Crossbar_CLINT_wready;
            AXI_Crossbar_MEM_bvalid = AXI_Crossbar_CLINT_bvalid;
            AXI_Crossbar_MEM_bresp  = AXI_Crossbar_CLINT_bresp;
            AXI_Crossbar_MEM_bid    = AXI_Crossbar_CLINT_bid;
        end
        default: begin
            AXI_Crossbar_MEM_wready = 1'b0;
            AXI_Crossbar_MEM_bvalid = 1'b0;
            AXI_Crossbar_MEM_bresp  = 2'b0;
            AXI_Crossbar_MEM_bid    = 4'b0;
        end
    endcase
end

endmodule