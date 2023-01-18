module ysyx_041461_TOP(
    input    wire   [0:0]    clk,
    input    wire   [0:0]    rst        
);


wire          io_master_awvalid;
wire [3:0]    io_master_awid;
wire [31:0]   io_master_awaddr; 
wire [7:0]    io_master_awlen;  
wire [2:0]    io_master_awsize; 
wire [1:0]    io_master_awburst;
wire          io_master_wvalid;
wire [63:0]   io_master_wdata;
wire [7:0]    io_master_wstrb; 
wire          io_master_wlast; 
wire          io_master_bready;
wire          io_master_arvalid;
wire [3:0]    io_master_arid;   
wire [31:0]   io_master_araddr; 
wire [7:0]    io_master_arlen;  
wire [2:0]    io_master_arsize;
wire [1:0]    io_master_arburst;
wire          io_master_rready; 
wire [5:0]    io_sram0_addr;  
wire          io_sram0_cen;  
wire          io_sram0_wen;   
wire [127:0]  io_sram0_wmask; 
wire [127:0]  io_sram0_wdata; 
wire [5:0]    io_sram1_addr;  
wire          io_sram1_cen;  
wire          io_sram1_wen;   
wire [127:0]  io_sram1_wmask; 
wire [127:0]  io_sram1_wdata; 
wire [5:0]    io_sram2_addr;  
wire          io_sram2_cen;  
wire          io_sram2_wen;   
wire [127:0]  io_sram2_wmask; 
wire [127:0]  io_sram2_wdata; 
wire [5:0]    io_sram3_addr;  
wire          io_sram3_cen;  
wire          io_sram3_wen;   
wire [127:0]  io_sram3_wmask; 
wire [127:0]  io_sram3_wdata; 
wire [5:0]    io_sram4_addr;  
wire          io_sram4_cen;  
wire          io_sram4_wen;   
wire [127:0]  io_sram4_wmask; 
wire [127:0]  io_sram4_wdata; 
wire [5:0]    io_sram5_addr;  
wire          io_sram5_cen;  
wire          io_sram5_wen;   
wire [127:0]  io_sram5_wmask; 
wire [127:0]  io_sram5_wdata; 
wire [5:0]    io_sram6_addr;  
wire          io_sram6_cen;  
wire          io_sram6_wen;   
wire [127:0]  io_sram6_wmask; 
wire [127:0]  io_sram6_wdata; 
wire [5:0]    io_sram7_addr;  
wire          io_sram7_cen;  
wire          io_sram7_wen;   
wire [127:0]  io_sram7_wmask; 
wire [127:0]  io_sram7_wdata; 

wire         AXI_CROSSBAR_awready;
wire         AXI_CROSSBAR_wready;
wire         AXI_CROSSBAR_bvalid;
wire [3:0]   AXI_CROSSBAR_bid;   
wire [1:0]   AXI_CROSSBAR_bresp;
wire         AXI_CROSSBAR_arready;
wire         AXI_CROSSBAR_rvalid;
wire [3:0]   AXI_CROSSBAR_rid;   
wire [1:0]   AXI_CROSSBAR_rresp; 
wire [63:0]  AXI_CROSSBAR_rdata; 
wire         AXI_CROSSBAR_rlast; 

wire [127:0] Q0;
wire [127:0] Q1;
wire [127:0] Q2;
wire [127:0] Q3;
wire [127:0] Q4;
wire [127:0] Q5;
wire [127:0] Q6;
wire [127:0] Q7;



//异步复位同步释放
reg  [0:0]   rst_r1;
reg  [0:0]   rst_r2;
wire [0:0]   rst_sync;

assign rst_sync = rst_r2;

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        rst_r1 <= 1'b1;
        rst_r2 <= 1'b1;
    end
    else begin
        rst_r1 <= 1'b0;
        rst_r2 <= rst_r1;
    end
end




ysyx_041461 core(
    .clock             (clk), 
    .reset             (rst),
    .io_interrupt      (1'b0    ),
    .io_master_awready (AXI_CROSSBAR_awready),
    .io_master_awvalid (io_master_awvalid),
    .io_master_awid    (io_master_awid   ),
    .io_master_awaddr  (io_master_awaddr ),
    .io_master_awlen   (io_master_awlen  ),
    .io_master_awsize  (io_master_awsize ),
    .io_master_awburst (io_master_awburst),
    .io_master_wready  (AXI_CROSSBAR_wready ),
    .io_master_wvalid  (io_master_wvalid ),
    .io_master_wdata   (io_master_wdata  ),
    .io_master_wstrb   (io_master_wstrb  ),
    .io_master_wlast   (io_master_wlast  ),
    .io_master_bready  (io_master_bready ),
    .io_master_bvalid  (AXI_CROSSBAR_bvalid ),
    .io_master_bid     (AXI_CROSSBAR_bid    ),
    .io_master_bresp   (AXI_CROSSBAR_bresp  ),
    .io_master_arready (AXI_CROSSBAR_arready),
    .io_master_arvalid (io_master_arvalid),
    .io_master_arid    (io_master_arid   ),
    .io_master_araddr  (io_master_araddr ),
    .io_master_arlen   (io_master_arlen  ),
    .io_master_arsize  (io_master_arsize ),
    .io_master_arburst (io_master_arburst),
    .io_master_rready  (io_master_rready ),
    .io_master_rvalid  (AXI_CROSSBAR_rvalid ),
    .io_master_rid     (AXI_CROSSBAR_rid    ),
    .io_master_rresp   (AXI_CROSSBAR_rresp  ),
    .io_master_rdata   (AXI_CROSSBAR_rdata  ),
    .io_master_rlast   (AXI_CROSSBAR_rlast  ),
    .io_slave_awready  (                 ),
    .io_slave_awvalid  (1'b0             ),
    .io_slave_awid     (4'b0             ),
    .io_slave_awaddr   (32'b0            ),
    .io_slave_awlen    (8'b0             ),
    .io_slave_awsize   (3'b0             ),
    .io_slave_awburst  (2'b0             ),
    .io_slave_wready   (                 ),
    .io_slave_wvalid   (1'b0             ),
    .io_slave_wdata    (64'b0            ),
    .io_slave_wstrb    (8'b0             ),
    .io_slave_wlast    (1'b0             ),
    .io_slave_bready   (1'b0             ),
    .io_slave_bvalid   (                 ),
    .io_slave_bid      (                 ),
    .io_slave_bresp    (                 ),
    .io_slave_arready  (                 ),
    .io_slave_arvalid  (1'b0             ),
    .io_slave_arid     (4'b0             ),
    .io_slave_araddr   (32'b0            ),
    .io_slave_arlen    (8'b0             ),
    .io_slave_arsize   (3'b0             ),
    .io_slave_arburst  (2'b0             ),
    .io_slave_rready   (1'b0             ),
    .io_slave_rvalid   (                 ),
    .io_slave_rid      (                 ),
    .io_slave_rresp    (                 ),
    .io_slave_rdata    (                 ),
    .io_slave_rlast    (                 ),
    .io_sram0_addr     (io_sram0_addr    ), 
    .io_sram0_cen      (io_sram0_cen     ), 
    .io_sram0_wen      (io_sram0_wen     ), 
    .io_sram0_wmask    (io_sram0_wmask   ), 
    .io_sram0_wdata    (io_sram0_wdata   ), 
    .io_sram0_rdata    (Q0               ),
    .io_sram1_addr     (io_sram1_addr    ), 
    .io_sram1_cen      (io_sram1_cen     ), 
    .io_sram1_wen      (io_sram1_wen     ), 
    .io_sram1_wmask    (io_sram1_wmask   ), 
    .io_sram1_wdata    (io_sram1_wdata   ), 
    .io_sram1_rdata    (Q1               ), 
    .io_sram2_addr     (io_sram2_addr    ), 
    .io_sram2_cen      (io_sram2_cen     ), 
    .io_sram2_wen      (io_sram2_wen     ), 
    .io_sram2_wmask    (io_sram2_wmask   ), 
    .io_sram2_wdata    (io_sram2_wdata   ), 
    .io_sram2_rdata    (Q2               ), 
    .io_sram3_addr     (io_sram3_addr    ), 
    .io_sram3_cen      (io_sram3_cen     ), 
    .io_sram3_wen      (io_sram3_wen     ), 
    .io_sram3_wmask    (io_sram3_wmask   ), 
    .io_sram3_wdata    (io_sram3_wdata   ), 
    .io_sram3_rdata    (Q3               ), 
    .io_sram4_addr     (io_sram4_addr    ), 
    .io_sram4_cen      (io_sram4_cen     ), 
    .io_sram4_wen      (io_sram4_wen     ), 
    .io_sram4_wmask    (io_sram4_wmask   ), 
    .io_sram4_wdata    (io_sram4_wdata   ), 
    .io_sram4_rdata    (Q4               ), 
    .io_sram5_addr     (io_sram5_addr    ), 
    .io_sram5_cen      (io_sram5_cen     ), 
    .io_sram5_wen      (io_sram5_wen     ), 
    .io_sram5_wmask    (io_sram5_wmask   ), 
    .io_sram5_wdata    (io_sram5_wdata   ), 
    .io_sram5_rdata    (Q5               ), 
    .io_sram6_addr     (io_sram6_addr    ), 
    .io_sram6_cen      (io_sram6_cen     ), 
    .io_sram6_wen      (io_sram6_wen     ), 
    .io_sram6_wmask    (io_sram6_wmask   ), 
    .io_sram6_wdata    (io_sram6_wdata   ), 
    .io_sram6_rdata    (Q6               ), 
    .io_sram7_addr     (io_sram7_addr    ), 
    .io_sram7_cen      (io_sram7_cen     ), 
    .io_sram7_wen      (io_sram7_wen     ), 
    .io_sram7_wmask    (io_sram7_wmask   ), 
    .io_sram7_wdata    (io_sram7_wdata   ), 
    .io_sram7_rdata    (Q7               )
); 

ysyx_041461_AXI_CROSSBAR AXI_CROSSBAR(

    .clk                  (clk),
    .rst                  (rst_sync),
 
    .AXI_CROSSBAR_awready (AXI_CROSSBAR_awready),
    .AXI_CROSSBAR_awvalid (io_master_awvalid),
    .AXI_CROSSBAR_awid    (io_master_awid   ),
    .AXI_CROSSBAR_awaddr  (io_master_awaddr ),
    .AXI_CROSSBAR_awlen   (io_master_awlen  ),
    .AXI_CROSSBAR_awsize  (io_master_awsize ),
    .AXI_CROSSBAR_awburst (io_master_awburst),
 
    .AXI_CROSSBAR_wready  (AXI_CROSSBAR_wready),
    .AXI_CROSSBAR_wvalid  (io_master_wvalid),
    .AXI_CROSSBAR_wdata   (io_master_wdata ),
    .AXI_CROSSBAR_wstrb   (io_master_wstrb ),
    .AXI_CROSSBAR_wlast   (io_master_wlast ),
 
    .AXI_CROSSBAR_bready  (io_master_bready),
    .AXI_CROSSBAR_bvalid  (AXI_CROSSBAR_bvalid),
    .AXI_CROSSBAR_bid     (AXI_CROSSBAR_bid   ),
    .AXI_CROSSBAR_bresp   (AXI_CROSSBAR_bresp ),
  
    .AXI_CROSSBAR_arready (AXI_CROSSBAR_arready),
    .AXI_CROSSBAR_arvalid (io_master_arvalid),
    .AXI_CROSSBAR_arid    (io_master_arid   ),
    .AXI_CROSSBAR_araddr  (io_master_araddr ),
    .AXI_CROSSBAR_arlen   (io_master_arlen  ),
    .AXI_CROSSBAR_arsize  (io_master_arsize ),
    .AXI_CROSSBAR_arburst (io_master_arburst),

    .AXI_CROSSBAR_rready  (io_master_rready),
    .AXI_CROSSBAR_rvalid  (AXI_CROSSBAR_rvalid),
    .AXI_CROSSBAR_rid     (AXI_CROSSBAR_rid   ),
    .AXI_CROSSBAR_rresp   (AXI_CROSSBAR_rresp ),
    .AXI_CROSSBAR_rdata   (AXI_CROSSBAR_rdata ),
    .AXI_CROSSBAR_rlast   (AXI_CROSSBAR_rlast ) 

);


ysyx_041461_RAM RAM0(
    .CLK  (clk),
    .CEN  (io_sram0_cen),
    .WEN  (io_sram0_wen),
    .BWEN (io_sram0_wmask),
    .A    (io_sram0_addr),
    .D    (io_sram0_wdata),
    .Q    (Q0)
);

ysyx_041461_RAM RAM1(
    .CLK  (clk),
    .CEN  (io_sram1_cen),
    .WEN  (io_sram1_wen),
    .BWEN (io_sram1_wmask),
    .A    (io_sram1_addr),
    .D    (io_sram1_wdata),
    .Q    (Q1)
);

ysyx_041461_RAM RAM2(
    .CLK  (clk),
    .CEN  (io_sram2_cen),
    .WEN  (io_sram2_wen),
    .BWEN (io_sram2_wmask),
    .A    (io_sram2_addr),
    .D    (io_sram2_wdata),
    .Q    (Q2)
);

ysyx_041461_RAM RAM3(
    .CLK  (clk),
    .CEN  (io_sram3_cen),
    .WEN  (io_sram3_wen),
    .BWEN (io_sram3_wmask),
    .A    (io_sram3_addr),
    .D    (io_sram3_wdata),
    .Q    (Q3)
);

ysyx_041461_RAM RAM4(
    .CLK  (clk),
    .CEN  (io_sram4_cen),
    .WEN  (io_sram4_wen),
    .BWEN (io_sram4_wmask),
    .A    (io_sram4_addr),
    .D    (io_sram4_wdata),
    .Q    (Q4)
);

ysyx_041461_RAM RAM5(
    .CLK  (clk),
    .CEN  (io_sram5_cen),
    .WEN  (io_sram5_wen),
    .BWEN (io_sram5_wmask),
    .A    (io_sram5_addr),
    .D    (io_sram5_wdata),
    .Q    (Q5)
);

ysyx_041461_RAM RAM6(
    .CLK  (clk),
    .CEN  (io_sram6_cen),
    .WEN  (io_sram6_wen),
    .BWEN (io_sram6_wmask),
    .A    (io_sram6_addr),
    .D    (io_sram6_wdata),
    .Q    (Q6)
);

ysyx_041461_RAM RAM7(
    .CLK  (clk),
    .CEN  (io_sram7_cen),
    .WEN  (io_sram7_wen),
    .BWEN (io_sram7_wmask),
    .A    (io_sram7_addr),
    .D    (io_sram7_wdata),
    .Q    (Q7)
);

endmodule
