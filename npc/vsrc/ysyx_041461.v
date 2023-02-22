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


wire [0:0]  CD_IF_trap;   
wire [0:0]  CD_IF2_trap;  
wire [0:0]  CD_ID_conflict;
wire [0:0]  CD_ID_trap;  
wire [0:0]  CD_EXE_conflict;
wire [0:0]  CD_EXE_trap; 
wire [0:0]  CD_MEM_conflict;
wire [0:0]  CD_MEM_trap;

wire [63:0] IFreg_pc       ;

wire [3:0]  IF_trap_out;
wire [0:0]  IF_valid_out;
wire [0:0]  IF_ready;
wire [63:0] IF_AXI_rdata;
wire [0:0]  IF_hit1;
wire [0:0]  IF_hit2;
wire [0:0]  IF_hit3;
wire [0:0]  IF_hit4;
wire [0:0]  IF_hit5;
wire [0:0]  IF_hit6;
wire [0:0]  IF_hit7;
wire [0:0]  IF_hit8;
wire [0:0]  IF_arvalid;
wire [31:0] IF_araddr ;
wire [3:0]  IF_arid   ;
wire [7:0]  IF_arlen  ;
wire [2:0]  IF_arsize ;
wire [1:0]  IF_arburst;
wire [0:0]  IF_rready ;

wire [63:0] IF2reg_pc_out;     
wire [63:0] IF2reg_AXI_rdata_out;
wire [0:0]  IF2reg_hit1_out;     
wire [0:0]  IF2reg_hit2_out;     
wire [0:0]  IF2reg_hit3_out;     
wire [0:0]  IF2reg_hit4_out;     
wire [0:0]  IF2reg_hit5_out;     
wire [0:0]  IF2reg_hit6_out;     
wire [0:0]  IF2reg_hit7_out;     
wire [0:0]  IF2reg_hit8_out;     
wire [0:0]  IF2reg_valid_out;  
wire [3:0]  IF2reg_trap_out; 

wire [0:0]  IF2_valid_out;
wire [3:0]  IF2_trap_out; 
wire [0:0]  IF2_ready;    
wire [31:0] IF2_inst;     

wire [0:0]  IDreg_valid_out ;  
wire [3:0]  IDreg_trap_out  ;
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
/* verilator lint_off UNOPTFLAT */
wire [2:0]  ID_TYPE  ;
/* verilator lint_on UNOPTFLAT */
wire [4:0]  ID_EXE_ctrl ;
wire [2:0]  ID_EXE_src  ;
wire [3:0]  ID_MEM_ctrl ;
wire [3:0]  ID_WB_ctrl  ;
wire [3:0]  ID_trap_out;  
/* verilator lint_off UNOPTFLAT */
wire [0:0]  ID_ready;
/* verilator lint_on UNOPTFLAT */

wire [0:0]  EXEreg_valid_out   ;
wire [3:0]  EXEreg_trap_out    ;
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
wire [0:0]  EXE_ready;

wire [0:0]  MEMreg_valid_out   ;
wire [3:0]  MEMreg_trap_out    ;
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
wire [0:0]  MEM_ready    ;
wire [63:0] MEM_out      ;
wire [3:0]  MEM_trap_out;
wire [0:0]  MEM_awvalid  ;
wire [31:0] MEM_awaddr   ;
wire [3:0]  MEM_awid     ;
wire [7:0]  MEM_awlen    ;
wire [2:0]  MEM_awsize   ;
wire [1:0]  MEM_awburst  ;
wire [0:0]  MEM_wvalid   ;
wire [63:0] MEM_wdata    ;
wire [7:0]  MEM_wstrb    ;
wire [0:0]  MEM_wlast    ;
wire [0:0]  MEM_bready   ; 
wire [0:0]  MEM_arvalid  ; 
wire [31:0] MEM_araddr   ; 
wire [3:0]  MEM_arid     ; 
wire [7:0]  MEM_arlen    ; 
wire [2:0]  MEM_arsize   ; 
wire [1:0]  MEM_arburst  ; 
wire [0:0]  MEM_rready   ;

wire [0:0]  WBreg_valid_out  ;
wire [3:0]  WBreg_trap_out   ;
wire [63:0] WBreg_EXE_out    ;
wire [63:0] WBreg_MEM_out    ;
wire [4:0]  WBreg_rd_out     ;
wire [4:0]  WBreg_rs1_out    ;
wire [11:0] WBreg_csr_out    ;
wire [63:0] WBreg_imm_out    ;
wire [63:0] WBreg_zimm_out   ;
wire [63:0] WBreg_pc_out     ;
wire [3:0]  WBreg_WB_ctrl_out; 


wire [0:0]   WB_ready;
wire [63:0]  WB_IFreg_mtvec ;
wire [63:0]  WB_IFreg_mepc  ;
wire [1:0]   WB_IFreg_ctrl  ;
wire [63:0]  WB_IF_mstatus  ;
wire [63:0]  WB_IF_mie      ;
wire [63:0]  WB_IF_mip      ;
wire [63:0]  WB_ID_rs1_data ;
wire [63:0]  WB_ID_rs2_data ;
wire [63:0]  WB_EXE_rs1_data;
wire [63:0]  WB_EXE_rs2_data;
wire [63:0]  WB_EXE_csr_data;
wire [63:0]  WB_MEM_rs2_data;

wire [0:0]   time_interrupt;  
wire         CLINT_awready ;  
wire         CLINT_wready  ; 
wire         CLINT_bvalid  ; 
wire [3:0]   CLINT_bid     ; 
wire [1:0]   CLINT_bresp   ;
wire         CLINT_arready ; 
wire         CLINT_rvalid  ;
wire [3:0]   CLINT_rid     ;
wire [1:0]   CLINT_rresp   ;
wire [63:0]  CLINT_rdata   ;
wire         CLINT_rlast   ;

wire [0:0]   ARBITER_IF_arready ;
wire [0:0]   ARBITER_IF_rvalid  ;
wire [1:0]   ARBITER_IF_rresp   ;
wire [63:0]  ARBITER_IF_rdata   ;
wire [0:0]   ARBITER_IF_rlast   ;
wire [3:0]   ARBITER_IF_rid     ;
wire [0:0]   ARBITER_MEM_arready;
wire [0:0]   ARBITER_MEM_rvalid ;
wire [1:0]   ARBITER_MEM_rresp  ;
wire [63:0]  ARBITER_MEM_rdata  ;
wire [0:0]   ARBITER_MEM_rlast  ;
wire [3:0]   ARBITER_MEM_rid    ;
wire [0:0]   ARBITER_MEM_awready;
wire [0:0]   ARBITER_MEM_wready ; 
wire [0:0]   ARBITER_MEM_bvalid ;
wire [1:0]   ARBITER_MEM_bresp  ;
wire [3:0]   ARBITER_MEM_bid    ;
wire         ARBITER_CLINT_awvalid;
wire [3:0]   ARBITER_CLINT_awid   ;
wire [31:0]  ARBITER_CLINT_awaddr ;
wire [7:0]   ARBITER_CLINT_awlen  ;
wire [2:0]   ARBITER_CLINT_awsize ;
wire [1:0]   ARBITER_CLINT_awburst;
wire         ARBITER_CLINT_wvalid ;
wire [63:0]  ARBITER_CLINT_wdata  ;
wire [7:0]   ARBITER_CLINT_wstrb  ;
wire         ARBITER_CLINT_wlast  ;
wire         ARBITER_CLINT_bready ;
wire         ARBITER_CLINT_arvalid;
wire [3:0]   ARBITER_CLINT_arid   ;
wire [31:0]  ARBITER_CLINT_araddr ;
wire [7:0]   ARBITER_CLINT_arlen  ;
wire [2:0]   ARBITER_CLINT_arsize ;
wire [1:0]   ARBITER_CLINT_arburst;
wire         ARBITER_CLINT_rready ;

wire [0:0]    MEM_skip_difftest;
wire [0:0]    WBreg_skip_difftets_out;

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
    .IFreg_enable       (IF_ready       ),
    .IFreg_ctrl_fromID  (ID_IFreg_ctrl  ),
    .IFreg_ctrl_fromWB  (WB_IFreg_ctrl  ),

    .IFreg_next_pc      (ID_next_pc     ),
    .IFreg_mtvec        (WB_IFreg_mtvec ),
    .IFreg_mepc         (WB_IFreg_mepc  ),

    .IFreg_pc           (IFreg_pc       )
);


ysyx_041461_IF IF(

    .clk                   (clock),
    .rst                   (rst_sync),
    .IF_pc                 (IFreg_pc),
    .IF_mstatus            (WB_IF_mstatus),
    .IF_mie                (WB_IF_mie    ),
    .IF_mip                (WB_IF_mip    ),
    .IF_ID_TYPE            (ID_TYPE  ),
    .IF_IF2_ready          (IF2_ready ),
    .IF_CD_trap            (CD_IF_trap  ),
  
    .IF_trap_out           (IF_trap_out),
    .IF_valid_out          (IF_valid_out),
    .IF_ready              (IF_ready),
    .IF_AXI_rdata          (IF_AXI_rdata),

    .IF_hit1               (IF_hit1      ),
    .IF_hit2               (IF_hit2      ),
    .IF_hit3               (IF_hit3      ),
    .IF_hit4               (IF_hit4      ),
    .IF_hit5               (IF_hit5      ),
    .IF_hit6               (IF_hit6      ),
    .IF_hit7               (IF_hit7      ),
    .IF_hit8               (IF_hit8      ),
           
    .IF_arready            (ARBITER_IF_arready),
    .IF_arvalid            (IF_arvalid),
    .IF_araddr             (IF_araddr ),
    .IF_arid               (IF_arid   ),
    .IF_arlen              (IF_arlen  ),
    .IF_arsize             (IF_arsize ),
    .IF_arburst            (IF_arburst),
       
    .IF_rready             (IF_rready),
    .IF_rvalid             (ARBITER_IF_rvalid),
    .IF_rresp              (ARBITER_IF_rresp ),
    .IF_rdata              (ARBITER_IF_rdata ),
    .IF_rlast              (ARBITER_IF_rlast ),
    .IF_rid                (ARBITER_IF_rid   ),
        
    .IF_sram0_addr         (io_sram0_addr  ), 
    .IF_sram0_cen          (io_sram0_cen   ), 
    .IF_sram0_wen          (io_sram0_wen   ), 
    .IF_sram0_wmask        (io_sram0_wmask ), 
    .IF_sram0_wdata        (io_sram0_wdata ), 
        
    .IF_sram1_addr         (io_sram1_addr ), 
    .IF_sram1_cen          (io_sram1_cen  ), 
    .IF_sram1_wen          (io_sram1_wen  ), 
    .IF_sram1_wmask        (io_sram1_wmask), 
    .IF_sram1_wdata        (io_sram1_wdata), 
        
    .IF_sram2_addr         (io_sram2_addr ), 
    .IF_sram2_cen          (io_sram2_cen  ), 
    .IF_sram2_wen          (io_sram2_wen  ), 
    .IF_sram2_wmask        (io_sram2_wmask), 
    .IF_sram2_wdata        (io_sram2_wdata), 
        
    .IF_sram3_addr         (io_sram3_addr ), 
    .IF_sram3_cen          (io_sram3_cen  ), 
    .IF_sram3_wen          (io_sram3_wen  ), 
    .IF_sram3_wmask        (io_sram3_wmask), 
    .IF_sram3_wdata        (io_sram3_wdata)
);

ysyx_041461_IF2_reg IF2_reg(

    .clk                  (clock),
    .rst                  (rst_sync),
    .IF2reg_enable        (IF2_ready),

    .IF2reg_pc_in         (IFreg_pc),
    .IF2reg_AXI_rdata_in  (IF_AXI_rdata),
    .IF2reg_hit1_in       (IF_hit1),
    .IF2reg_hit2_in       (IF_hit2),
    .IF2reg_hit3_in       (IF_hit3),
    .IF2reg_hit4_in       (IF_hit4),
    .IF2reg_hit5_in       (IF_hit5),
    .IF2reg_hit6_in       (IF_hit6),
    .IF2reg_hit7_in       (IF_hit7),
    .IF2reg_hit8_in       (IF_hit8),
    .IF2reg_valid_in      (IF_valid_out),
    .IF2reg_trap_in       (IF_trap_out),

    .IF2reg_pc_out        (IF2reg_pc_out  ),
    .IF2reg_AXI_rdata_out (IF2reg_AXI_rdata_out),
    .IF2reg_hit1_out      (IF2reg_hit1_out),
    .IF2reg_hit2_out      (IF2reg_hit2_out),
    .IF2reg_hit3_out      (IF2reg_hit3_out),
    .IF2reg_hit4_out      (IF2reg_hit4_out),
    .IF2reg_hit5_out      (IF2reg_hit5_out),
    .IF2reg_hit6_out      (IF2reg_hit6_out),
    .IF2reg_hit7_out      (IF2reg_hit7_out),
    .IF2reg_hit8_out      (IF2reg_hit8_out),
    .IF2reg_valid_out     (IF2reg_valid_out),
    .IF2reg_trap_out      (IF2reg_trap_out)
);

ysyx_041461_IF2 IF2(

    .clk             (clock),
    .rst             (rst_sync),

    .IF2_pc          (IF2reg_pc_out),
    .IF2_hit1        (IF2reg_hit1_out),
    .IF2_hit2        (IF2reg_hit2_out),
    .IF2_hit3        (IF2reg_hit3_out),
    .IF2_hit4        (IF2reg_hit4_out),
    .IF2_hit5        (IF2reg_hit5_out),
    .IF2_hit6        (IF2reg_hit6_out),
    .IF2_hit7        (IF2reg_hit7_out),
    .IF2_hit8        (IF2reg_hit8_out),
    .IF2_valid_in    (IF2reg_valid_out),
    .IF2_trap_in     (IF2reg_trap_out),
    .IF2_ID_TYPE     (ID_TYPE),
    .IF2_ID_ready    (ID_ready),
    .IF2_CD_trap     (CD_IF2_trap),
    
    .IF2_valid_out   (IF2_valid_out),
    .IF2_trap_out    (IF2_trap_out ),
    .IF2_ready       (IF2_ready    ),
    .IF2_inst        (IF2_inst     ),
   
    .IF2_sram0_rdata (io_sram0_rdata),
    .IF2_sram1_rdata (io_sram1_rdata),
    .IF2_sram2_rdata (io_sram2_rdata),
    .IF2_sram3_rdata (io_sram3_rdata),
    .IF2_AXI_rdata   (IF2reg_AXI_rdata_out)
);

ysyx_041461_ID_reg ID_reg(

    .clk                          (clock          ),
    .rst                          (rst_sync       ),
    .IDreg_enable                 (ID_ready       ),
        
    .IDreg_valid_in               (IF2_valid_out   ),
    .IDreg_trap_in                (IF2_trap_out    ),
    .IDreg_inst_in                (IF2_inst        ),
    .IDreg_pc_in                  (IF2reg_pc_out   ),

    .IDreg_valid_out              (IDreg_valid_out),  
    .IDreg_trap_out               (IDreg_trap_out ),
    .IDreg_inst_out               (IDreg_inst_out ),   
    .IDreg_pc_out                 (IDreg_pc_out   )
);

ysyx_041461_ID ID( 
    
    .ID_inst               (IDreg_inst_out ),
    .ID_valid_in           (IDreg_valid_out),
    .ID_pc                 (IDreg_pc_out   ),
    .ID_rs1_data           (WB_ID_rs1_data ),
    .ID_rs2_data           (WB_ID_rs2_data ),
    .ID_trap_in            (IDreg_trap_out),
    .ID_conflict           (CD_ID_conflict ),
    .ID_IF_ready           (IF_ready),
    .ID_EXE_ready          (EXE_ready),
    .ID_MEM_ready          (MEM_ready),
    .ID_CD_trap            (CD_ID_trap ),

    .ID_rd                 (ID_rd          ),
    .ID_rs1                (ID_rs1         ),
    .ID_rs2                (ID_rs2         ),
    .ID_csr                (ID_csr         ),
    .ID_imm                (ID_imm         ),
    .ID_zimm               (ID_zimm        ),
    .ID_next_pc            (ID_next_pc     ),
    .ID_valid_out          (ID_valid_out   ),
    .ID_IFreg_ctrl         (ID_IFreg_ctrl  ),
    .ID_TYPE               (ID_TYPE        ),
    .ID_EXE_ctrl           (ID_EXE_ctrl    ),
    .ID_EXE_src            (ID_EXE_src     ),
    .ID_MEM_ctrl           (ID_MEM_ctrl    ),   
    .ID_WB_ctrl            (ID_WB_ctrl     ),
    .ID_trap_out           (ID_trap_out    ),
    .ID_ready              (ID_ready       )
);  


ysyx_041461_EXE_reg EXE_reg(

    .clk                           (clock              ),
    .rst                           (rst_sync           ),
    .EXEreg_enable                 (EXE_ready          ),
      
    .EXEreg_valid_in               (ID_valid_out       ),

    .EXEreg_trap_in                (ID_trap_out        ),
    .EXEreg_rd_in                  (ID_rd              ),
    .EXEreg_rs1_in                 (ID_rs1             ),
    .EXEreg_rs2_in                 (ID_rs2             ),
    .EXEreg_csr_in                 (ID_csr             ),
    .EXEreg_imm_in                 (ID_imm             ),
    .EXEreg_zimm_in                (ID_zimm            ),
    .EXEreg_pc_in                  (IDreg_pc_out       ),
    .EXEreg_EXE_ctrl_in            (ID_EXE_ctrl        ),
    .EXEreg_EXE_src_in             (ID_EXE_src         ),
    .EXEreg_MEM_ctrl_in            (ID_MEM_ctrl        ),
    .EXEreg_WB_ctrl_in             (ID_WB_ctrl         ),
    
    .EXEreg_valid_out              (EXEreg_valid_out   ),
    .EXEreg_trap_out               (EXEreg_trap_out    ),
    .EXEreg_rd_out                 (EXEreg_rd_out      ),
    .EXEreg_rs1_out                (EXEreg_rs1_out     ),
    .EXEreg_rs2_out                (EXEreg_rs2_out     ),
    .EXEreg_csr_out                (EXEreg_csr_out     ),
    .EXEreg_imm_out                (EXEreg_imm_out     ),
    .EXEreg_zimm_out               (EXEreg_zimm_out    ),
    .EXEreg_pc_out                 (EXEreg_pc_out      ),
    .EXEreg_EXE_ctrl_out           (EXEreg_EXE_ctrl_out),
    .EXEreg_EXE_src_out            (EXEreg_EXE_src_out ),
    .EXEreg_MEM_ctrl_out           (EXEreg_MEM_ctrl_out),
    .EXEreg_WB_ctrl_out            (EXEreg_WB_ctrl_out )
);

ysyx_041461_EXE EXE(

    .clk           (clock              ),
    .rst           (rst_sync           ),

    .EXE_valid_in  (EXEreg_valid_out   ),
    .EXE_trap_in   (EXEreg_trap_out    ),
    .EXE_rs1_data  (WB_EXE_rs1_data    ),
    .EXE_rs2_data  (WB_EXE_rs2_data    ),
    .EXE_csr_data  (WB_EXE_csr_data    ),
    .EXE_imm       (EXEreg_imm_out     ),
    .EXE_zimm      (EXEreg_zimm_out    ),
    .EXE_pc        (EXEreg_pc_out      ),
    .EXE_ctrl      (EXEreg_EXE_ctrl_out),
    .EXE_src       (EXEreg_EXE_src_out ),
    .EXE_conflict  (CD_EXE_conflict    ),
    .EXE_MEM_ready (MEM_ready          ),
    .EXE_CD_trap   (CD_EXE_trap        ),

    .EXE_out       (EXE_out            ),
    .EXE_valid_out (EXE_valid_out      ),
    .EXE_ready     (EXE_ready          )
);

ysyx_041461_MEM_reg MEM_reg(

    .clk                           (clock              ),
    .rst                           (rst_sync           ),
    .MEMreg_enable                 (MEM_ready          ),
        
    .MEMreg_valid_in               (EXE_valid_out      ),
    .MEMreg_trap_in                (EXEreg_trap_out    ),
    .MEMreg_EXE_in                 (EXE_out            ),
    .MEMreg_rd_in                  (EXEreg_rd_out      ),
    .MEMreg_rs1_in                 (EXEreg_rs1_out     ),
    .MEMreg_rs2_in                 (EXEreg_rs2_out     ),
    .MEMreg_csr_in                 (EXEreg_csr_out     ),
    .MEMreg_imm_in                 (EXEreg_imm_out     ),
    .MEMreg_zimm_in                (EXEreg_zimm_out    ),
    .MEMreg_pc_in                  (EXEreg_pc_out      ),
    .MEMreg_MEM_ctrl_in            (EXEreg_MEM_ctrl_out),
    .MEMreg_WB_ctrl_in             (EXEreg_WB_ctrl_out ),
  
    .MEMreg_valid_out              (MEMreg_valid_out   ),
    .MEMreg_trap_out               (MEMreg_trap_out    ), 
    .MEMreg_EXE_out                (MEMreg_EXE_out     ),
    .MEMreg_rd_out                 (MEMreg_rd_out      ),
    .MEMreg_rs1_out                (MEMreg_rs1_out     ),
    .MEMreg_rs2_out                (MEMreg_rs2_out     ),
    .MEMreg_csr_out                (MEMreg_csr_out     ),
    .MEMreg_imm_out                (MEMreg_imm_out     ),
    .MEMreg_zimm_out               (MEMreg_zimm_out    ),
    .MEMreg_pc_out                 (MEMreg_pc_out      ),
    .MEMreg_MEM_ctrl_out           (MEMreg_MEM_ctrl_out),
    .MEMreg_WB_ctrl_out            (MEMreg_WB_ctrl_out )
);

ysyx_041461_MEM MEM(

    .clk                    (clock                   ),
    .rst                    (rst_sync                ),

    .MEM_valid_in           (MEMreg_valid_out        ),
    .MEM_EXE_in             (MEMreg_EXE_out          ),
    .MEM_rs2_data           (WB_MEM_rs2_data         ),
    .MEM_ctrl               (MEMreg_MEM_ctrl_out     ),  
    .MEM_trap_in            (MEMreg_trap_out         ), 
    .MEM_WB_ready           (WB_ready                ),
    .MEM_CD_trap            (CD_MEM_trap             ),
    .MEM_conflict           (CD_MEM_conflict         ),

    .MEM_valid_out          (MEM_valid_out           ),
    .MEM_ready              (MEM_ready               ),
    .MEM_out                (MEM_out                 ),
    .MEM_trap_out           (MEM_trap_out            ),

    .MEM_awready            (ARBITER_MEM_awready),
    .MEM_awvalid            (MEM_awvalid             ),
    .MEM_awaddr             (MEM_awaddr              ),
    .MEM_awid               (MEM_awid                ),
    .MEM_awlen              (MEM_awlen               ),
    .MEM_awsize             (MEM_awsize              ),
    .MEM_awburst            (MEM_awburst             ),
        
    .MEM_wready             (ARBITER_MEM_wready ),
    .MEM_wvalid             (MEM_wvalid              ),
    .MEM_wdata              (MEM_wdata               ),
    .MEM_wstrb              (MEM_wstrb               ),
    .MEM_wlast              (MEM_wlast               ),
        
    .MEM_bready             (MEM_bready              ),
    .MEM_bvalid             (ARBITER_MEM_bvalid ),
    .MEM_bresp              (ARBITER_MEM_bresp  ),
    .MEM_bid                (ARBITER_MEM_bid    ),
        
    .MEM_arready            (ARBITER_MEM_arready),
    .MEM_arvalid            (MEM_arvalid             ),
    .MEM_araddr             (MEM_araddr              ),
    .MEM_arid               (MEM_arid                ),
    .MEM_arlen              (MEM_arlen               ),
    .MEM_arsize             (MEM_arsize              ),
    .MEM_arburst            (MEM_arburst             ),
        
    .MEM_rready             (MEM_rready),
    .MEM_rvalid             (ARBITER_MEM_rvalid ),
    .MEM_rresp              (ARBITER_MEM_rresp  ),
    .MEM_rdata              (ARBITER_MEM_rdata  ),
    .MEM_rlast              (ARBITER_MEM_rlast  ),
    .MEM_rid                (ARBITER_MEM_rid    ),
        
    .MEM_sram4_addr         (io_sram4_addr           ), 
    .MEM_sram4_cen          (io_sram4_cen            ), 
    .MEM_sram4_wen          (io_sram4_wen            ), 
    .MEM_sram4_wmask        (io_sram4_wmask          ), 
    .MEM_sram4_wdata        (io_sram4_wdata          ), 
    .MEM_sram4_rdata        (io_sram4_rdata          ),
        
    .MEM_sram5_addr         (io_sram5_addr           ), 
    .MEM_sram5_cen          (io_sram5_cen            ), 
    .MEM_sram5_wen          (io_sram5_wen            ), 
    .MEM_sram5_wmask        (io_sram5_wmask          ), 
    .MEM_sram5_wdata        (io_sram5_wdata          ), 
    .MEM_sram5_rdata        (io_sram5_rdata          ),
        
    .MEM_sram6_addr         (io_sram6_addr           ), 
    .MEM_sram6_cen          (io_sram6_cen            ), 
    .MEM_sram6_wen          (io_sram6_wen            ), 
    .MEM_sram6_wmask        (io_sram6_wmask          ), 
    .MEM_sram6_wdata        (io_sram6_wdata          ), 
    .MEM_sram6_rdata        (io_sram6_rdata          ),
        
    .MEM_sram7_addr         (io_sram7_addr           ), 
    .MEM_sram7_cen          (io_sram7_cen            ), 
    .MEM_sram7_wen          (io_sram7_wen            ), 
    .MEM_sram7_wmask        (io_sram7_wmask          ), 
    .MEM_sram7_wdata        (io_sram7_wdata          ), 
    .MEM_sram7_rdata        (io_sram7_rdata          ),
    .MEM_skip_difftest      (MEM_skip_difftest)
);

ysyx_041461_WB_reg WB_reg(

    .clk                           (clock             ),
    .rst                           (rst_sync          ),
    .WBreg_enable                  (WB_ready          ),
           
    .WBreg_valid_in                (MEM_valid_out     ),
    .WBreg_trap_in                 (MEM_trap_out      ),
    .WBreg_EXE_in                  (MEMreg_EXE_out    ),
    .WBreg_MEM_in                  (MEM_out           ),
    .WBreg_rd_in                   (MEMreg_rd_out     ),
    .WBreg_rs1_in                  (MEMreg_rs1_out    ),
    .WBreg_csr_in                  (MEMreg_csr_out    ),
    .WBreg_imm_in                  (MEMreg_imm_out    ),
    .WBreg_zimm_in                 (MEMreg_zimm_out   ),
    .WBreg_pc_in                   (MEMreg_pc_out     ),
    .WBreg_WB_ctrl_in              (MEMreg_WB_ctrl_out),
    .WBreg_skip_difftets_in        (MEM_skip_difftest),
  
    .WBreg_valid_out               (WBreg_valid_out   ), 
    .WBreg_trap_out                (WBreg_trap_out    ),
    .WBreg_EXE_out                 (WBreg_EXE_out     ),
    .WBreg_MEM_out                 (WBreg_MEM_out     ),
    .WBreg_rd_out                  (WBreg_rd_out      ),
    .WBreg_rs1_out                 (WBreg_rs1_out     ),
    .WBreg_csr_out                 (WBreg_csr_out     ),
    .WBreg_imm_out                 (WBreg_imm_out     ),
    .WBreg_zimm_out                (WBreg_zimm_out    ),
    .WBreg_pc_out                  (WBreg_pc_out      ),
    .WBreg_WB_ctrl_out             (WBreg_WB_ctrl_out ),
    .WBreg_skip_difftets_out       (WBreg_skip_difftets_out)
);


ysyx_041461_WB WB(

    .clk                   (clock            ),
    .rst                   (rst_sync         ),
    .WB_valid              (WBreg_valid_out  ),

    .WB_IF_ready           (IF_ready         ),
            
    .WB_ID_rs1             (ID_rs1           ),
    .WB_ID_rs2             (ID_rs2           ),
            
    .WB_EXE_rs1            (EXEreg_rs1_out   ),
    .WB_EXE_rs2            (EXEreg_rs2_out   ),
    .WB_EXE_csr            (EXEreg_csr_out   ),
            
    .WB_MEM_rs2            (MEMreg_rs2_out   ),
            
    .WB_EXE_in             (WBreg_EXE_out    ),
    .WB_MEM_in             (WBreg_MEM_out    ),
    .WB_rd                 (WBreg_rd_out     ),
    .WB_rs1                (WBreg_rs1_out    ),
    .WB_csr                (WBreg_csr_out    ),
    .WB_imm                (WBreg_imm_out    ),
    .WB_zimm               (WBreg_zimm_out   ),
    .WB_pc                 (WBreg_pc_out     ),
    .WB_ctrl               (WBreg_WB_ctrl_out),
    .WB_trap               (WBreg_trap_out   ),
    .WB_interrupt          (time_interrupt   ),

    .WB_ready              (WB_ready         ),

    .WB_IFreg_mtvec        (WB_IFreg_mtvec   ),
    .WB_IFreg_mepc         (WB_IFreg_mepc    ),
    .WB_IFreg_ctrl         (WB_IFreg_ctrl    ),

    .WB_IF_mstatus         (WB_IF_mstatus    ),
    .WB_IF_mie             (WB_IF_mie        ),
    .WB_IF_mip             (WB_IF_mip        ),

    .WB_ID_rs1_data        (WB_ID_rs1_data   ),
    .WB_ID_rs2_data        (WB_ID_rs2_data   ),

    .WB_EXE_rs1_data       (WB_EXE_rs1_data  ),
    .WB_EXE_rs2_data       (WB_EXE_rs2_data  ),
    .WB_EXE_csr_data       (WB_EXE_csr_data  ),

    .WB_MEM_rs2_data       (WB_MEM_rs2_data  ),
    .WB_skip_difftest      (WBreg_skip_difftets_out)
);



ysyx_041461_CD CD(  
   
    .CD_IF2_valid_in           (IF2reg_valid_out  ),
    .CD_IF2_trap_in            (IF2reg_trap_out   ),

    .CD_ID_valid_in            (IDreg_valid_out    ),
    .CD_ID_TYPE                (ID_TYPE            ),
    .CD_ID_rs1                 (ID_rs1             ),
    .CD_ID_rs2                 (ID_rs2             ),
    .CD_ID_trap_in             (IDreg_trap_out     ),
   
    .CD_EXE_valid_in           (EXEreg_valid_out   ),
    .CD_EXE_ctrl               (EXEreg_EXE_ctrl_out),
    .CD_EXE_src                (EXEreg_EXE_src_out ),
    .CD_EXE_WB_ctrl            (EXEreg_WB_ctrl_out ),
    .CD_EXE_rd                 (EXEreg_rd_out      ),
    .CD_EXE_rs1                (EXEreg_rs1_out     ),
    .CD_EXE_rs2                (EXEreg_rs2_out     ),
    .CD_EXE_csr                (EXEreg_csr_out     ),
    .CD_EXE_trap_in            (EXEreg_trap_out    ),

    .CD_MEM_valid_in           (MEMreg_valid_out   ),
    .CD_MEM_ctrl               (MEMreg_MEM_ctrl_out),   
    .CD_MEM_WB_ctrl            (MEMreg_WB_ctrl_out ),
    .CD_MEM_rd                 (MEMreg_rd_out      ),
    .CD_MEM_rs2                (MEMreg_rs2_out     ),
    .CD_MEM_csr                (MEMreg_csr_out     ),
    .CD_MEM_trap_in            (MEMreg_trap_out    ),
    
    .CD_WB_valid_in            (WBreg_valid_out    ),
    .CD_WB_ctrl                (WBreg_WB_ctrl_out  ),
    .CD_WB_rd                  (WBreg_rd_out       ),
    .CD_WB_csr                 (WBreg_csr_out      ),
    .CD_WB_trap_in             (WBreg_trap_out     ),

    .CD_IF_trap                (CD_IF_trap         ),
    .CD_IF2_trap               (CD_IF2_trap        ),
    .CD_ID_conflict            (CD_ID_conflict     ),
    .CD_ID_trap                (CD_ID_trap         ),
    .CD_EXE_conflict           (CD_EXE_conflict    ),
    .CD_EXE_trap               (CD_EXE_trap        ),
    .CD_MEM_conflict           (CD_MEM_conflict    ),
    .CD_MEM_trap               (CD_MEM_trap        )
);

ysyx_041461_CLINT CLINT(

    .clk            (clock),
    .rst            (rst_sync),
    .time_interrupt (time_interrupt),

    .CLINT_awready (CLINT_awready),
    .CLINT_awvalid (ARBITER_CLINT_awvalid),
    .CLINT_awid    (ARBITER_CLINT_awid   ),
    .CLINT_awaddr  (ARBITER_CLINT_awaddr ),
    .CLINT_awlen   (ARBITER_CLINT_awlen  ),
    .CLINT_awsize  (ARBITER_CLINT_awsize ),
    .CLINT_awburst (ARBITER_CLINT_awburst),

    .CLINT_wready  (CLINT_wready),
    .CLINT_wvalid  (ARBITER_CLINT_wvalid),
    .CLINT_wdata   (ARBITER_CLINT_wdata ),
    .CLINT_wstrb   (ARBITER_CLINT_wstrb ),
    .CLINT_wlast   (ARBITER_CLINT_wlast ),

    .CLINT_bready  (ARBITER_CLINT_bready),
    .CLINT_bvalid  (CLINT_bvalid),
    .CLINT_bid     (CLINT_bid   ),
    .CLINT_bresp   (CLINT_bresp ),

    .CLINT_arready (CLINT_arready),
    .CLINT_arvalid (ARBITER_CLINT_arvalid),
    .CLINT_arid    (ARBITER_CLINT_arid   ),
    .CLINT_araddr  (ARBITER_CLINT_araddr ),
    .CLINT_arlen   (ARBITER_CLINT_arlen  ),
    .CLINT_arsize  (ARBITER_CLINT_arsize ),
    .CLINT_arburst (ARBITER_CLINT_arburst),

    .CLINT_rready  (ARBITER_CLINT_rready),
    .CLINT_rvalid  (CLINT_rvalid),
    .CLINT_rid     (CLINT_rid   ),
    .CLINT_rresp   (CLINT_rresp ),
    .CLINT_rdata   (CLINT_rdata ),
    .CLINT_rlast   (CLINT_rlast )

);

ysyx_041461_ARBITER ARBITER(

    .clk                      (clock),
    .rst                      (rst_sync),

    .ARBITER_IF_arvalid  (IF_arvalid),
    .ARBITER_IF_araddr   (IF_araddr ),
    .ARBITER_IF_arid     (IF_arid   ),
    .ARBITER_IF_arlen    (IF_arlen  ),
    .ARBITER_IF_arsize   (IF_arsize ),
    .ARBITER_IF_arburst  (IF_arburst),
    .ARBITER_IF_arready  (ARBITER_IF_arready),

    .ARBITER_IF_rready   (IF_rready),
    .ARBITER_IF_rvalid   (ARBITER_IF_rvalid),
    .ARBITER_IF_rresp    (ARBITER_IF_rresp ),
    .ARBITER_IF_rdata    (ARBITER_IF_rdata ),
    .ARBITER_IF_rlast    (ARBITER_IF_rlast ),
    .ARBITER_IF_rid      (ARBITER_IF_rid   ),

    .ARBITER_MEM_arvalid (MEM_arvalid),
    .ARBITER_MEM_araddr  (MEM_araddr ),
    .ARBITER_MEM_arid    (MEM_arid   ),
    .ARBITER_MEM_arlen   (MEM_arlen  ),
    .ARBITER_MEM_arsize  (MEM_arsize ),
    .ARBITER_MEM_arburst (MEM_arburst),
    .ARBITER_MEM_arready (ARBITER_MEM_arready),

    .ARBITER_MEM_rready  (MEM_rready),
    .ARBITER_MEM_rvalid  (ARBITER_MEM_rvalid),
    .ARBITER_MEM_rresp   (ARBITER_MEM_rresp ),
    .ARBITER_MEM_rdata   (ARBITER_MEM_rdata ),
    .ARBITER_MEM_rlast   (ARBITER_MEM_rlast ),
    .ARBITER_MEM_rid     (ARBITER_MEM_rid   ),

    .ARBITER_MEM_awready (ARBITER_MEM_awready),
    .ARBITER_MEM_awvalid (MEM_awvalid),
    .ARBITER_MEM_awaddr  (MEM_awaddr ),
    .ARBITER_MEM_awid    (MEM_awid   ),
    .ARBITER_MEM_awlen   (MEM_awlen  ),
    .ARBITER_MEM_awsize  (MEM_awsize ),
    .ARBITER_MEM_awburst (MEM_awburst),

    .ARBITER_MEM_wready  (ARBITER_MEM_wready),
    .ARBITER_MEM_wvalid  (MEM_wvalid),
    .ARBITER_MEM_wdata   (MEM_wdata ),
    .ARBITER_MEM_wstrb   (MEM_wstrb ),
    .ARBITER_MEM_wlast   (MEM_wlast ),

    .ARBITER_MEM_bready  (MEM_bready),
    .ARBITER_MEM_bvalid  (ARBITER_MEM_bvalid),
    .ARBITER_MEM_bresp   (ARBITER_MEM_bresp ),
    .ARBITER_MEM_bid     (ARBITER_MEM_bid   ),

    .ARBITER_CLINT_awready (CLINT_awready),
    .ARBITER_CLINT_awvalid (ARBITER_CLINT_awvalid),
    .ARBITER_CLINT_awid    (ARBITER_CLINT_awid   ),
    .ARBITER_CLINT_awaddr  (ARBITER_CLINT_awaddr ),
    .ARBITER_CLINT_awlen   (ARBITER_CLINT_awlen  ),
    .ARBITER_CLINT_awsize  (ARBITER_CLINT_awsize ),
    .ARBITER_CLINT_awburst (ARBITER_CLINT_awburst),

    .ARBITER_CLINT_wready  (CLINT_wready),
    .ARBITER_CLINT_wvalid  (ARBITER_CLINT_wvalid),
    .ARBITER_CLINT_wdata   (ARBITER_CLINT_wdata ),
    .ARBITER_CLINT_wstrb   (ARBITER_CLINT_wstrb ),
    .ARBITER_CLINT_wlast   (ARBITER_CLINT_wlast ),

    .ARBITER_CLINT_bready  (ARBITER_CLINT_bready),
    .ARBITER_CLINT_bvalid  (CLINT_bvalid),
    .ARBITER_CLINT_bid     (CLINT_bid   ),
    .ARBITER_CLINT_bresp   (CLINT_bresp ),

    .ARBITER_CLINT_arready (CLINT_arready),
    .ARBITER_CLINT_arvalid (ARBITER_CLINT_arvalid),
    .ARBITER_CLINT_arid    (ARBITER_CLINT_arid   ),
    .ARBITER_CLINT_araddr  (ARBITER_CLINT_araddr ),
    .ARBITER_CLINT_arlen   (ARBITER_CLINT_arlen  ),
    .ARBITER_CLINT_arsize  (ARBITER_CLINT_arsize ),
    .ARBITER_CLINT_arburst (ARBITER_CLINT_arburst),

    .ARBITER_CLINT_rready  (ARBITER_CLINT_rready),
    .ARBITER_CLINT_rvalid  (CLINT_rvalid),
    .ARBITER_CLINT_rid     (CLINT_rid   ),
    .ARBITER_CLINT_rresp   (CLINT_rresp ),
    .ARBITER_CLINT_rdata   (CLINT_rdata ),
    .ARBITER_CLINT_rlast   (CLINT_rlast ),

    .ARBITER_io_awready  (io_master_awready),
    .ARBITER_io_awvalid  (io_master_awvalid),
    .ARBITER_io_awid     (io_master_awid   ),
    .ARBITER_io_awaddr   (io_master_awaddr ),
    .ARBITER_io_awlen    (io_master_awlen  ),
    .ARBITER_io_awsize   (io_master_awsize ),
    .ARBITER_io_awburst  (io_master_awburst),

    .ARBITER_io_wready   (io_master_wready ),
    .ARBITER_io_wvalid   (io_master_wvalid ),
    .ARBITER_io_wdata    (io_master_wdata  ),
    .ARBITER_io_wstrb    (io_master_wstrb  ),
    .ARBITER_io_wlast    (io_master_wlast  ),

    .ARBITER_io_bready   (io_master_bready ),
    .ARBITER_io_bvalid   (io_master_bvalid ),
    .ARBITER_io_bid      (io_master_bid    ),
    .ARBITER_io_bresp    (io_master_bresp  ),

    .ARBITER_io_arready   (io_master_arready),
    .ARBITER_io_arvalid   (io_master_arvalid),
    .ARBITER_io_araddr    (io_master_araddr ),
    .ARBITER_io_arid      (io_master_arid   ),
    .ARBITER_io_arlen     (io_master_arlen  ),
    .ARBITER_io_arsize    (io_master_arsize ),
    .ARBITER_io_arburst   (io_master_arburst),

    .ARBITER_io_rready    (io_master_rready),
    .ARBITER_io_rvalid    (io_master_rvalid),
    .ARBITER_io_rresp     (io_master_rresp ),
    .ARBITER_io_rdata     (io_master_rdata ),
    .ARBITER_io_rlast     (io_master_rlast ),
    .ARBITER_io_rid       (io_master_rid   )
);


endmodule
