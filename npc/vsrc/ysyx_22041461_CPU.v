module ysyx_041461(
    input             clock            , 
    input             reset            ,
    input             io_interrupt     ,
    input             io_master_awready,
    output            io_master_awvalid,
    output   [3:0]    io_master_awid   ,
    output   [31:0]   io_master_awaddr ,
    output   [7:0]    io_master_awlen  ,
    output   [2:0]    io_master_awsize ,
    output   [1:0]    io_master_awburst,
    input             io_master_wready ,
    output            io_master_wvalid ,
    output   [63:0]   io_master_wdata  ,
    output   [7:0]    io_master_wstrb  ,
    output            io_master_wlast  ,
    output            io_master_bready ,
    input             io_master_bvalid ,
    input    [3:0]    io_master_bid    ,
    input    [1:0]    io_master_bresp  ,
    input             io_master_arready,
    output            io_master_arvalid,
    output   [3:0]    io_master_arid   ,
    output   [31:0]   io_master_araddr ,
    output   [7:0]    io_master_arlen  ,
    output   [2:0]    io_master_arsize ,
    output   [1:0]    io_master_arburst,
    output            io_master_rready ,
    input             io_master_rvalid ,
    input    [3:0]    io_master_rid    ,
    input    [1:0]    io_master_rresp  ,
    input    [63:0]   io_master_rdata  ,
    input             io_master_rlast  ,
    output            io_slave_awready ,
    input             io_slave_awvalid ,
    input    [3:0]    io_slave_awid    ,
    input    [31:0]   io_slave_awaddr  ,
    input    [7:0]    io_slave_awlen   ,
    input    [2:0]    io_slave_awsize  ,
    input    [1:0]    io_slave_awburst ,
    output            io_slave_wready  ,
    input             io_slave_wvalid  ,
    input    [63:0]   io_slave_wdata   ,
    input    [7:0]    io_slave_wstrb   ,
    input             io_slave_wlast   ,
    input             io_slave_bready  ,
    output            io_slave_bvalid  ,
    output   [3:0]    io_slave_bid     ,
    output   [1:0]    io_slave_bresp   ,
    output            io_slave_arready ,
    input             io_slave_arvalid ,
    input    [3:0]    io_slave_arid    ,
    input    [31:0]   io_slave_araddr  ,
    input    [7:0]    io_slave_arlen   ,
    input    [2:0]    io_slave_arsize  ,
    input    [1:0]    io_slave_arburst ,
    input             io_slave_rready  ,
    output            io_slave_rvalid  ,
    output   [3:0]    io_slave_rid     ,
    output   [1:0]    io_slave_rresp   ,
    output   [63:0]   io_slave_rdata   ,
    output            io_slave_rlast   ,
    output   [5:0]    io_sram0_addr    , 
    output            io_sram0_cen     , 
    output            io_sram0_wen     , 
    output   [127:0]  io_sram0_wmask   , 
    output   [127:0]  io_sram0_wdata   , 
    input    [127:0]  io_sram0_rdata   ,
    output   [5:0]    io_sram1_addr    , 
    output            io_sram1_cen     , 
    output            io_sram1_wen     , 
    output   [127:0]  io_sram1_wmask   , 
    output   [127:0]  io_sram1_wdata   , 
    input    [127:0]  io_sram1_rdata   , 
    output   [5:0]    io_sram2_addr    , 
    output            io_sram2_cen     , 
    output            io_sram2_wen     , 
    output   [127:0]  io_sram2_wmask   , 
    output   [127:0]  io_sram2_wdata   , 
    input    [127:0]  io_sram2_rdata   , 
    output   [5:0]    io_sram3_addr    , 
    output            io_sram3_cen     , 
    output            io_sram3_wen     , 
    output   [127:0]  io_sram3_wmask   , 
    output   [127:0]  io_sram3_wdata   , 
    input    [127:0]  io_sram3_rdata   , 
    output   [5:0]    io_sram4_addr    , 
    output            io_sram4_cen     , 
    output            io_sram4_wen     , 
    output   [127:0]  io_sram4_wmask   , 
    output   [127:0]  io_sram4_wdata   , 
    input    [127:0]  io_sram4_rdata   , 
    output   [5:0]    io_sram5_addr    , 
    output            io_sram5_cen     , 
    output            io_sram5_wen     , 
    output   [127:0]  io_sram5_wmask   , 
    output   [127:0]  io_sram5_wdata   , 
    input    [127:0]  io_sram5_rdata   , 
    output   [5:0]    io_sram6_addr    , 
    output            io_sram6_cen     , 
    output            io_sram6_wen     , 
    output   [127:0]  io_sram6_wmask   , 
    output   [127:0]  io_sram6_wdata   , 
    input    [127:0]  io_sram6_rdata   , 
    output   [5:0]    io_sram7_addr    , 
    output            io_sram7_cen     , 
    output            io_sram7_wen     , 
    output   [127:0]  io_sram7_wmask   , 
    output   [127:0]  io_sram7_wdata   , 
    input    [127:0]  io_sram7_rdata   
); 

assign  io_slave_awready = 1'b0 ;
assign  io_slave_wready  = 1'b0 ;
assign  io_slave_bvalid  = 1'b0 ;
assign  io_slave_bresp   = 2'b0 ;
assign  io_slave_bid     = 4'b0 ;
assign  io_slave_arready = 1'b0 ;
assign  io_slave_rvalid  = 1'b0 ;
assign  io_slave_rresp   = 2'b0 ;
assign  io_slave_rdata   = 64'b0;
assign  io_slave_rlast   = 1'b0 ;
assign  io_slave_rid     = 4'b0 ;


wire [0:0]  CD_IFreg_enable  ; 
wire [0:0]  CD_IF_valid      ; 
wire [0:0]  CD_IDreg_valid   ; 
wire [0:0]  CD_IDreg_enable  ; 
wire [0:0]  CD_EXEreg_valid  ; 
wire [0:0]  CD_EXEreg_enable ; 
wire [0:0]  CD_MEMreg_valid  ; 
wire [0:0]  CD_MEM_valid     ; 
wire [0:0]  CD_MEMreg_enable ; 
wire [0:0]  CD_WBreg_valid   ; 

wire [63:0] IFreg_pc       ;
wire [0:0]  IFreg_valid_out;

wire [0:0]  IF_ok;
wire [0:0]  IF_valid_out;
wire [31:0] IF_inst;
wire [0:0]  IF_arvalid;
wire [31:0] IF_araddr ;
wire [3:0]  IF_arid   ;
wire [7:0]  IF_arlen  ;
wire [2:0]  IF_arsize ;
wire [1:0]  IF_arburst;
wire [0:0]  IF_rready ;

wire [0:0]  IDreg_valid_out ;  
wire [31:0] IDreg_inst_out  ;  
wire [63:0] IDreg_pc_out    ;  

wire [4:0]  ID_rd       ;
wire [4:0]  ID_rs1      ;
wire [4:0]  ID_rs2      ;
wire [11:0] ID_csr      ;
wire [63:0] ID_imm      ;
wire [63:0] ID_zimm     ;
wire [63:0] ID_next_pc  ;
wire [0:0]  ID_valid_out;
wire [0:0]  ID_IFreg_ctrl;
wire [0:0]  ID_FENCE_I  ;
wire [3:0]  ID_CD_ctrl  ;
wire [4:0]  ID_EXE_ctrl ;
wire [2:0]  ID_EXE_src  ;
wire [3:0]  ID_MEM_ctrl ;
wire [3:0]  ID_WB_ctrl  ;

wire [0:0]  EXEreg_valid_out   ;
wire [4:0]  EXEreg_rd_out      ;
wire [4:0]  EXEreg_rs1_out     ;
wire [4:0]  EXEreg_rs2_out     ;
wire [11:0] EXEreg_csr_out     ;
wire [63:0] EXEreg_imm_out     ;
wire [63:0] EXEreg_zimm_out    ;
wire [63:0] EXEreg_pc_out      ;
wire [4:0]  EXEreg_EXE_ctrl_out;
wire [2:0]  EXEreg_EXE_src_out ;
wire [3:0]  EXEreg_MEM_ctrl_out;
wire [3:0]  EXEreg_WB_ctrl_out ;

wire [63:0] EXE_out            ;
wire [0:0]  EXE_valid_out      ;

wire [0:0]  MEMreg_valid_out   ;
wire [63:0] MEMreg_EXE_out     ;
wire [4:0]  MEMreg_rd_out      ;
wire [4:0]  MEMreg_rs1_out     ;
wire [4:0]  MEMreg_rs2_out     ;
wire [11:0] MEMreg_csr_out     ;
wire [63:0] MEMreg_imm_out     ;
wire [63:0] MEMreg_zimm_out    ;
wire [63:0] MEMreg_pc_out      ;
wire [3:0]  MEMreg_MEM_ctrl_out;
wire [3:0]  MEMreg_WB_ctrl_out ;

wire [0:0]  MEM_valid_out;
wire [0:0]  MEM_ok       ;
wire [63:0] MEM_out      ;
wire [0:0]  MEM_arvalid  ; 
wire [31:0] MEM_araddr   ; 
wire [3:0]  MEM_arid     ; 
wire [7:0]  MEM_arlen    ; 
wire [2:0]  MEM_arsize   ; 
wire [1:0]  MEM_arburst  ; 
wire [0:0]  MEM_rready   ;

wire [0:0]  WBreg_valid_out  ;
wire [63:0] WBreg_EXE_out    ;
wire [63:0] WBreg_MEM_out    ;
wire [4:0]  WBreg_rd_out     ;
wire [4:0]  WBreg_rs1_out    ;
wire [11:0] WBreg_csr_out    ;
wire [63:0] WBreg_imm_out    ;
wire [63:0] WBreg_zimm_out   ;
wire [63:0] WBreg_pc_out     ;
wire [3:0]  WBreg_WB_ctrl_out; 

wire [63:0]  WB_ID_rs1_data ;
wire [63:0]  WB_ID_rs2_data ;
wire [63:0]  WB_ID_csr_mtvec;
wire [63:0]  WB_ID_csr_mepc ;
wire [63:0]  WB_EXE_rs1_data;
wire [63:0]  WB_EXE_rs2_data;
wire [63:0]  WB_EXE_csr_data;
wire [63:0]  WB_MEM_rs2_data;


wire [0:0]   AXI_Crossbar_IF_arready ;
wire [0:0]   AXI_Crossbar_IF_rvalid  ;
wire [1:0]   AXI_Crossbar_IF_rresp   ;
wire [63:0]  AXI_Crossbar_IF_rdata   ;
wire [0:0]   AXI_Crossbar_IF_rlast   ;
wire [3:0]   AXI_Crossbar_IF_rid     ;
wire [0:0]   AXI_Crossbar_MEM_arready;
wire [0:0]   AXI_Crossbar_MEM_rvalid ;
wire [1:0]   AXI_Crossbar_MEM_rresp  ;
wire [63:0]  AXI_Crossbar_MEM_rdata  ;
wire [0:0]   AXI_Crossbar_MEM_rlast  ;
wire [3:0]   AXI_Crossbar_MEM_rid    ;


//异步复位同步释放
reg  [0:0]   rst_r1;
reg  [0:0]   rst_r2;
wire [0:0]   rst_sync;

assign rst_sync = rst_r2;

always@(posedge clock or posedge reset) begin
    if(reset == 1'b1) begin
        rst_r1 <= 1'b1;
        rst_r2 <= 1'b1;
    end
    else begin
        rst_r1 <= 1'b0;
        rst_r2 <= rst_r1;
    end
end


ysyx_041461_IF_reg IF_reg(

    .clk                (clock          ),
    .rst                (rst_sync       ),
    .IFreg_enable       (CD_IFreg_enable),
    .IFreg_ctrl         (ID_IFreg_ctrl   ),
    .IFreg_next_pc      (ID_next_pc     ),

    .IFreg_pc           (IFreg_pc       )
);


ysyx_041461_IF IF(

    .clk             (clock),
    .rst             (rst_sync),
    .IF_pc           (IFreg_pc),
    .IF_valid_fromCD (CD_IF_valid),
    .IF_FENCE_I      (ID_FENCE_I),
    .IF_MEM_ok       (MEM_ok),
  
    .IF_valid_out    (IF_valid_out),
    .IF_ok           (IF_ok),
    .IF_inst         (IF_inst),
     
    .IF_arready      (AXI_Crossbar_IF_arready),
    .IF_arvalid      (IF_arvalid),
    .IF_araddr       (IF_araddr ),
    .IF_arid         (IF_arid   ),
    .IF_arlen        (IF_arlen  ),
    .IF_arsize       (IF_arsize ),
    .IF_arburst      (IF_arburst),
 
    .IF_rready       (IF_rready),
    .IF_rvalid       (AXI_Crossbar_IF_rvalid),
    .IF_rresp        (AXI_Crossbar_IF_rresp ),
    .IF_rdata        (AXI_Crossbar_IF_rdata ),
    .IF_rlast        (AXI_Crossbar_IF_rlast ),
    .IF_rid          (AXI_Crossbar_IF_rid   ),
  
    .IF_sram0_addr   (io_sram0_addr  ), 
    .IF_sram0_cen    (io_sram0_cen   ), 
    .IF_sram0_wen    (io_sram0_wen   ), 
    .IF_sram0_wmask  (io_sram0_wmask ), 
    .IF_sram0_wdata  (io_sram0_wdata ), 
    .IF_sram0_rdata  (io_sram0_rdata ),
  
    .IF_sram1_addr   (io_sram1_addr ), 
    .IF_sram1_cen    (io_sram1_cen  ), 
    .IF_sram1_wen    (io_sram1_wen  ), 
    .IF_sram1_wmask  (io_sram1_wmask), 
    .IF_sram1_wdata  (io_sram1_wdata), 
    .IF_sram1_rdata  (io_sram1_rdata),
  
    .IF_sram2_addr   (io_sram2_addr ), 
    .IF_sram2_cen    (io_sram2_cen  ), 
    .IF_sram2_wen    (io_sram2_wen  ), 
    .IF_sram2_wmask  (io_sram2_wmask), 
    .IF_sram2_wdata  (io_sram2_wdata), 
    .IF_sram2_rdata  (io_sram2_rdata),
  
    .IF_sram3_addr   (io_sram3_addr ), 
    .IF_sram3_cen    (io_sram3_cen  ), 
    .IF_sram3_wen    (io_sram3_wen  ), 
    .IF_sram3_wmask  (io_sram3_wmask), 
    .IF_sram3_wdata  (io_sram3_wdata), 
    .IF_sram3_rdata  (io_sram3_rdata)
);


ysyx_041461_ID_reg ID_reg(

    .clk                 (clock         ),
    .rst                 (rst_sync       ),
    .IDreg_enable        (CD_IDreg_enable),

    .IDreg_valid_fromIF  (IF_valid_out   ),
    .IDreg_valid_fromCD  (CD_IDreg_valid ),
    .IDreg_inst_in       (IF_inst        ),
    .IDreg_pc_in         (IFreg_pc       ),

    .IDreg_valid_out     (IDreg_valid_out),  
    .IDreg_inst_out      (IDreg_inst_out ),   
    .IDreg_pc_out        (IDreg_pc_out   )
);

ysyx_041461_ID ID( 
    
    .ID_inst        (IDreg_inst_out ),
    .ID_valid_in    (IDreg_valid_out),
    .ID_pc          (IDreg_pc_out   ),
    .ID_rs1_data    (WB_ID_rs1_data ),
    .ID_rs2_data    (WB_ID_rs2_data ),
    .ID_csr_mtvec   (WB_ID_csr_mtvec),
    .ID_csr_mepc    (WB_ID_csr_mepc ),

    .ID_rd          (ID_rd          ),
    .ID_rs1         (ID_rs1         ),
    .ID_rs2         (ID_rs2         ),
    .ID_csr         (ID_csr         ),
    .ID_imm         (ID_imm         ),
    .ID_zimm        (ID_zimm        ),
    .ID_next_pc     (ID_next_pc     ),
    .ID_valid_out   (ID_valid_out   ),
    .ID_IFreg_ctrl  (ID_IFreg_ctrl  ),
    .ID_FENCE_I     (ID_FENCE_I)
    .ID_CD_ctrl     (ID_CD_ctrl     ),
    .ID_EXE_ctrl    (ID_EXE_ctrl    ),
    .ID_EXE_src     (ID_EXE_src     ),
    .ID_MEM_ctrl    (ID_MEM_ctrl    ),   
    .ID_WB_ctrl     (ID_WB_ctrl     )    
); 


ysyx_041461_EXE_reg EXE_reg(

    .clk                    (clock              ),
    .rst                    (rst_sync           ),
    .EXEreg_enable          (CD_EXEreg_enable   ),

    .EXEreg_valid_fromCD    (CD_EXEreg_valid    ),
    .EXEreg_valid_fromID    (ID_valid_out       ),

    .EXEreg_rd_in           (ID_rd              ),
    .EXEreg_rs1_in          (ID_rs1             ),
    .EXEreg_rs2_in          (ID_rs2             ),
    .EXEreg_csr_in          (ID_csr             ),
    .EXEreg_imm_in          (ID_imm             ),
    .EXEreg_zimm_in         (ID_zimm            ),
    .EXEreg_pc_in           (IDreg_pc_out       ),
    .EXEreg_EXE_ctrl_in     (ID_EXE_ctrl        ),
    .EXEreg_EXE_src_in      (ID_EXE_src         ),
    .EXEreg_MEM_ctrl_in     (ID_MEM_ctrl        ),
    .EXEreg_WB_ctrl_in      (ID_WB_ctrl         ),

    .EXEreg_valid_out       (EXEreg_valid_out   ),
    .EXEreg_rd_out          (EXEreg_rd_out      ),
    .EXEreg_rs1_out         (EXEreg_rs1_out     ),
    .EXEreg_rs2_out         (EXEreg_rs2_out     ),
    .EXEreg_csr_out         (EXEreg_csr_out     ),
    .EXEreg_imm_out         (EXEreg_imm_out     ),
    .EXEreg_zimm_out        (EXEreg_zimm_out    ),
    .EXEreg_pc_out          (EXEreg_pc_out      ),
    .EXEreg_EXE_ctrl_out    (EXEreg_EXE_ctrl_out),
    .EXEreg_EXE_src_out     (EXEreg_EXE_src_out ),
    .EXEreg_MEM_ctrl_out    (EXEreg_MEM_ctrl_out),
    .EXEreg_WB_ctrl_out     (EXEreg_WB_ctrl_out )
);

ysyx_041461_EXE EXE(

    .EXE_valid_in  (EXEreg_valid_out   ),
    .EXE_rs1_data  (WB_EXE_rs1_data    ),
    .EXE_rs2_data  (WB_EXE_rs2_data    ),
    .EXE_csr_data  (WB_EXE_csr_data    ),
    .EXE_imm       (EXEreg_imm_out     ),
    .EXE_zimm      (EXEreg_zimm_out    ),
    .EXE_pc        (EXEreg_pc_out      ),
    .EXE_ctrl      (EXEreg_EXE_ctrl_out),
    .EXE_src       (EXEreg_EXE_src_out ),

    .EXE_out       (EXE_out            ),
    .EXE_valid_out (EXE_valid_out      )

);

ysyx_041461_MEM_reg MEM_reg(

    .clk                  (clock              ),
    .rst                  (rst_sync           ),
    .MEMreg_enable        (CD_MEMreg_enable   ),

    .MEMreg_valid_fromEXE (EXE_valid_out      ),
    .MEMreg_valid_fromCD  (CD_MEMreg_valid    ),

    .MEMreg_EXE_in        (EXE_out            ),
    .MEMreg_rd_in         (EXEreg_rd_out      ),
    .MEMreg_rs1_in        (EXEreg_rs1_out     ),
    .MEMreg_rs2_in        (EXEreg_rs2_out     ),
    .MEMreg_csr_in        (EXEreg_csr_out     ),
    .MEMreg_imm_in        (EXEreg_imm_out     ),
    .MEMreg_zimm_in       (EXEreg_zimm_out    ),
    .MEMreg_pc_in         (EXEreg_pc_out      ),
    .MEMreg_MEM_ctrl_in   (EXEreg_MEM_ctrl_out),
    .MEMreg_WB_ctrl_in    (EXEreg_WB_ctrl_out ),
  
    .MEMreg_valid_out     (MEMreg_valid_out   ),  
    .MEMreg_EXE_out       (MEMreg_EXE_out     ),
    .MEMreg_rd_out        (MEMreg_rd_out      ),
    .MEMreg_rs1_out       (MEMreg_rs1_out     ),
    .MEMreg_rs2_out       (MEMreg_rs2_out     ),
    .MEMreg_csr_out       (MEMreg_csr_out     ),
    .MEMreg_imm_out       (MEMreg_imm_out     ),
    .MEMreg_zimm_out      (MEMreg_zimm_out    ),
    .MEMreg_pc_out        (MEMreg_pc_out      ),
    .MEMreg_MEM_ctrl_out  (MEMreg_MEM_ctrl_out),
    .MEMreg_WB_ctrl_out   (MEMreg_WB_ctrl_out )
);

ysyx_041461_MEM MEM(

    .clk              (clock),
    .rst              (rst_sync),
 
    .MEM_valid_in     (MEMreg_valid_out),
    .MEM_valid_fromCD (CD_MEM_valid),
    .MEM_EXE_in       (MEMreg_EXE_out),
    .MEM_rs2_data     (WB_MEM_rs2_data),
    .MEM_ctrl         (MEMreg_MEM_ctrl_out),  
    .MEM_IF_ok        (IF_ok)

    .MEM_valid_out    (MEM_valid_out),
    .MEM_ok           (MEM_ok),
    .MEM_out          (MEM_out),

    .MEM_awready      (io_master_awready),
    .MEM_awvalid      (io_master_awvalid),
    .MEM_awaddr       (io_master_awaddr ),
    .MEM_awid         (io_master_awid   ),
    .MEM_awlen        (io_master_awlen  ),
    .MEM_awsize       (io_master_awsize ),
    .MEM_awburst      (io_master_awburst),

    .MEM_wready       (io_master_wready),
    .MEM_wvalid       (io_master_wvalid),
    .MEM_wdata        (io_master_wdata ),
    .MEM_wstrb        (io_master_wstrb ),
    .MEM_wlast        (io_master_wlast ),

    .MEM_bready       (io_master_bready ),
    .MEM_bvalid       (io_master_bvalid ),
    .MEM_bresp        (io_master_bresp  ),
    .MEM_bid          (io_master_bid    ),

    .MEM_arready      (AXI_Crossbar_MEM_arready),
    .MEM_arvalid      (MEM_arvalid),
    .MEM_araddr       (MEM_araddr ),
    .MEM_arid         (MEM_arid   ),
    .MEM_arlen        (MEM_arlen  ),
    .MEM_arsize       (MEM_arsize ),
    .MEM_arburst      (MEM_arburst),

    .MEM_rready       (MEM_rready),
    .MEM_rvalid       (AXI_Crossbar_MEM_rvalid),
    .MEM_rresp        (AXI_Crossbar_MEM_rresp ),
    .MEM_rdata        (AXI_Crossbar_MEM_rdata ),
    .MEM_rlast        (AXI_Crossbar_MEM_rlast ),
    .MEM_rid          (AXI_Crossbar_MEM_rid   ),
 
    .MEM_sram4_addr   (io_sram4_addr  ), 
    .MEM_sram4_cen    (io_sram4_cen   ), 
    .MEM_sram4_wen    (io_sram4_wen   ), 
    .MEM_sram4_wmask  (io_sram4_wmask ), 
    .MEM_sram4_wdata  (io_sram4_wdata ), 
    .MEM_sram4_rdata  (io_sram4_rdata ),
 
    .MEM_sram5_addr   (io_sram5_addr  ), 
    .MEM_sram5_cen    (io_sram5_cen   ), 
    .MEM_sram5_wen    (io_sram5_wen   ), 
    .MEM_sram5_wmask  (io_sram5_wmask ), 
    .MEM_sram5_wdata  (io_sram5_wdata ), 
    .MEM_sram5_rdata  (io_sram5_rdata ),
 
    .MEM_sram6_addr   (io_sram6_addr  ), 
    .MEM_sram6_cen    (io_sram6_cen   ), 
    .MEM_sram6_wen    (io_sram6_wen   ), 
    .MEM_sram6_wmask  (io_sram6_wmask ), 
    .MEM_sram6_wdata  (io_sram6_wdata ), 
    .MEM_sram6_rdata  (io_sram6_rdata ),
 
    .MEM_sram7_addr   (io_sram7_addr  ), 
    .MEM_sram7_cen    (io_sram7_cen   ), 
    .MEM_sram7_wen    (io_sram7_wen   ), 
    .MEM_sram7_wmask  (io_sram7_wmask ), 
    .MEM_sram7_wdata  (io_sram7_wdata ), 
    .MEM_sram7_rdata  (io_sram7_rdata )
);

ysyx_041461_WB_reg WB_reg(

    .clk                 (clock             ),
    .rst                 (rst_sync          ),
    .WBreg_enable        (1'b1              ),

    .WBreg_valid_fromMEM (MEM_valid_out     ),
    .WBreg_valid_fromCD  (CD_WBreg_valid    ),

    .WBreg_EXE_in        (MEMreg_EXE_out    ),
    .WBreg_MEM_in        (MEM_out           ),
    .WBreg_rd_in         (MEMreg_rd_out     ),
    .WBreg_rs1_in        (MEMreg_rs1_out    ),
    .WBreg_csr_in        (MEMreg_csr_out    ),
    .WBreg_imm_in        (MEMreg_imm_out    ),
    .WBreg_zimm_in       (MEMreg_zimm_out   ),
    .WBreg_pc_in         (MEMreg_pc_out     ),
    .WBreg_WB_ctrl_in    (MEMreg_WB_ctrl_out),
  
    .WBreg_valid_out     (WBreg_valid_out   ), 
    .WBreg_EXE_out       (WBreg_EXE_out     ),
    .WBreg_MEM_out       (WBreg_MEM_out     ),
    .WBreg_rd_out        (WBreg_rd_out      ),
    .WBreg_rs1_out       (WBreg_rs1_out     ),
    .WBreg_csr_out       (WBreg_csr_out     ),
    .WBreg_imm_out       (WBreg_imm_out     ),
    .WBreg_zimm_out      (WBreg_zimm_out    ),
    .WBreg_pc_out        (WBreg_pc_out      ),
    .WBreg_WB_ctrl_out   (WBreg_WB_ctrl_out )
);


ysyx_041461_WB WB(

    .clk             (clock            ),
    .rst             (rst_sync         ),
    .WB_valid        (WBreg_valid_out  ),

    .WB_ID_rs1       (ID_rs1           ),
    .WB_ID_rs2       (ID_rs2           ),

    .WB_EXE_rs1      (EXEreg_rs1_out   ),
    .WB_EXE_rs2      (EXEreg_rs2_out   ),
    .WB_EXE_csr      (EXEreg_csr_out   ),
   
    .WB_MEM_rs2      (MEMreg_rs2_out   ),

    .WB_EXE_in       (WBreg_EXE_out    ),
    .WB_MEM_in       (WBreg_MEM_out    ),
    .WB_rd           (WBreg_rd_out     ),
    .WB_rs1          (WBreg_rs1_out    ),
    .WB_csr          (WBreg_csr_out    ),
    .WB_imm          (WBreg_imm_out    ),
    .WB_zimm         (WBreg_zimm_out   ),
    .WB_pc           (WBreg_pc_out     ),
    .WB_ctrl         (WBreg_WB_ctrl_out),

    .WB_ID_rs1_data  (WB_ID_rs1_data   ),
    .WB_ID_rs2_data  (WB_ID_rs2_data   ),
    .WB_ID_csr_mtvec (WB_ID_csr_mtvec  ),
    .WB_ID_csr_mepc  (WB_ID_csr_mepc   ),

    .WB_EXE_rs1_data (WB_EXE_rs1_data  ),
    .WB_EXE_rs2_data (WB_EXE_rs2_data  ),
    .WB_EXE_csr_data (WB_EXE_csr_data  ),

    .WB_MEM_rs2_data (WB_MEM_rs2_data  )
);



ysyx_041461_CD CD(  
    
    .CD_ctrl            (ID_CD_ctrl         ),
   
    .CD_IFreg_ctrl      (ID_IFreg_ctrl      ),
    .CD_IF_ok           (IF_ok              ),
   
    .CD_ID_valid_in     (IDreg_valid_out    ),
    .CD_ID_rs1          (ID_rs1             ),
    .CD_ID_rs2          (ID_rs2             ),
   
    .CD_EXE_valid_in    (EXEreg_valid_out   ),
    .CD_EXE_ctrl        (EXEreg_EXE_ctrl_out),
    .CD_EXE_src         (EXEreg_EXE_src_out ),
    .CD_EXE_WB_ctrl     (EXEreg_WB_ctrl_out ),
    .CD_EXE_rd          (EXEreg_rd_out      ),
    .CD_EXE_rs1         (EXEreg_rs1_out     ),
    .CD_EXE_rs2         (EXEreg_rs2_out     ),
    .CD_EXE_csr         (EXEreg_csr_out     ),
   
    .CD_MEM_valid_in    (MEMreg_valid_out   ),
    .CD_MEM_ok          (MEM_ok             ),
    .CD_MEM_ctrl        (MEMreg_MEM_ctrl_out),   
    .CD_MEM_WB_ctrl     (MEMreg_WB_ctrl_out ),
    .CD_MEM_rd          (MEMreg_rd_out      ),
    .CD_MEM_rs2         (MEMreg_rs2_out     ),
    .CD_MEM_csr         (MEMreg_csr_out     ),
    
    .CD_WB_valid_in     (WBreg_valid_out    ),
    .CD_WB_ctrl         (WBreg_WB_ctrl_out  ),
    .CD_WB_rd           (WBreg_rd_out       ),
    .CD_WB_csr          (WBreg_csr_out      ),

    .CD_IFreg_enable    (CD_IFreg_enable    ),
    .CD_IF_valid        (CD_IF_valid        ),
    .CD_IDreg_valid     (CD_IDreg_valid     ),
    .CD_IDreg_enable    (CD_IDreg_enable    ),
    .CD_EXEreg_valid    (CD_EXEreg_valid    ),
    .CD_EXEreg_enable   (CD_EXEreg_enable   ),
    .CD_MEMreg_valid    (CD_MEMreg_valid    ),
    .CD_MEM_valid       (CD_MEM_valid       ), 
    .CD_MEMreg_enable   (CD_MEMreg_enable   ),
    .CD_WBreg_valid     (CD_WBreg_valid     )
);

ysyx_041461_AXI_Crossbar AXI_Crossbar(

    .clk                      (clock),
    .rst                      (rst_sync),

    .AXI_Crossbar_IF_arvalid  (IF_arvalid),
    .AXI_Crossbar_IF_araddr   (IF_araddr ),
    .AXI_Crossbar_IF_arid     (IF_arid   ),
    .AXI_Crossbar_IF_arlen    (IF_arlen  ),
    .AXI_Crossbar_IF_arsize   (IF_arsize ),
    .AXI_Crossbar_IF_arburst  (IF_arburst),
    .AXI_Crossbar_IF_arready  (AXI_Crossbar_IF_arready),

    .AXI_Crossbar_IF_rready   (IF_rready),
    .AXI_Crossbar_IF_rvalid   (AXI_Crossbar_IF_rvalid),
    .AXI_Crossbar_IF_rresp    (AXI_Crossbar_IF_rresp ),
    .AXI_Crossbar_IF_rdata    (AXI_Crossbar_IF_rdata ),
    .AXI_Crossbar_IF_rlast    (AXI_Crossbar_IF_rlast ),
    .AXI_Crossbar_IF_rid      (AXI_Crossbar_IF_rid   ),

    .AXI_Crossbar_MEM_arvalid (MEM_arvalid),
    .AXI_Crossbar_MEM_araddr  (MEM_araddr ),
    .AXI_Crossbar_MEM_arid    (MEM_arid   ),
    .AXI_Crossbar_MEM_arlen   (MEM_arlen  ),
    .AXI_Crossbar_MEM_arsize  (MEM_arsize ),
    .AXI_Crossbar_MEM_arburst (MEM_arburst),
    .AXI_Crossbar_MEM_arready (AXI_Crossbar_MEM_arready),

    .AXI_Crossbar_MEM_rready  (MEM_rready),
    .AXI_Crossbar_MEM_rvalid  (AXI_Crossbar_MEM_rvalid),
    .AXI_Crossbar_MEM_rresp   (AXI_Crossbar_MEM_rresp ),
    .AXI_Crossbar_MEM_rdata   (AXI_Crossbar_MEM_rdata ),
    .AXI_Crossbar_MEM_rlast   (AXI_Crossbar_MEM_rlast ),
    .AXI_Crossbar_MEM_rid     (AXI_Crossbar_MEM_rid   ),

    .AXI_Crossbar_arready     (io_master_arready),
    .AXI_Crossbar_arvalid     (io_master_arvalid),
    .AXI_Crossbar_araddr      (io_master_araddr ),
    .AXI_Crossbar_arid        (io_master_arid   ),
    .AXI_Crossbar_arlen       (io_master_arlen  ),
    .AXI_Crossbar_arsize      (io_master_arsize ),
    .AXI_Crossbar_arburst     (io_master_arburst),

    .AXI_Crossbar_rready      (io_master_rready),
    .AXI_Crossbar_rvalid      (io_master_rvalid),
    .AXI_Crossbar_rresp       (io_master_rresp ),
    .AXI_Crossbar_rdata       (io_master_rdata ),
    .AXI_Crossbar_rlast       (io_master_rlast ),
    .AXI_Crossbar_rid         (io_master_rid   )
);


endmodule