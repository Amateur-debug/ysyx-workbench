module ysyx_041461(
    output            AXI_SLAVE_awready ,
    input             AXI_SLAVE_awvalid ,
    input    [3:0]    AXI_SLAVE_awid    ,
    input    [31:0]   AXI_SLAVE_awaddr  ,
    input    [7:0]    AXI_SLAVE_awlen   ,
    input    [2:0]    AXI_SLAVE_awsize  ,
    input    [1:0]    AXI_SLAVE_awburst ,

    output            AXI_SLAVE_wready  ,
    input             AXI_SLAVE_wvalid  ,
    input    [63:0]   AXI_SLAVE_wdata   ,
    input    [7:0]    AXI_SLAVE_wstrb   ,
    input             AXI_SLAVE_wlast   ,

    input             AXI_SLAVE_bready  ,
    output            AXI_SLAVE_bvalid  ,
    output   [3:0]    AXI_SLAVE_bid     ,
    output   [1:0]    AXI_SLAVE_bresp   ,

    output            AXI_SLAVE_arready ,
    input             AXI_SLAVE_arvalid ,
    input    [3:0]    AXI_SLAVE_arid    ,
    input    [31:0]   AXI_SLAVE_araddr  ,
    input    [7:0]    AXI_SLAVE_arlen   ,
    input    [2:0]    AXI_SLAVE_arsize  ,
    input    [1:0]    AXI_SLAVE_arburst ,
    
    input             AXI_SLAVE_rready  ,
    output            AXI_SLAVE_rvalid  ,
    output   [3:0]    AXI_SLAVE_rid     ,
    output   [1:0]    AXI_SLAVE_rresp   ,
    output   [63:0]   AXI_SLAVE_rdata   ,
    output            AXI_SLAVE_rlast   
);

