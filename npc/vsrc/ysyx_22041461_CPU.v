`include "/home/cxy/ysyx-workbench/npc/vsrc/ysyx_22041461_macro.v"

module ysyx_22041461_CPU(
    input   wire [0:0]  clk , 
    input   wire [0:0]  rst ,
    output  wire [63:0] pc  ,
    output  wire [31:0] inst
); 


wire [0:0]  CD_IFreg_valid   ; 
wire [0:0]  CD_IFreg_enable  ; 
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

wire [0:0]  IF_valid_out;
wire [31:0] IF_inst;

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
wire [0:0]  ID_PC_ctrl  ;
wire [2:0]  ID_CD_ctrl  ;
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
wire [3:0]  EXEreg_WB_ctrl_out;

wire [63:0] EXE_out      ;
wire [0:0]  EXE_valid_out;

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
wire [63:0] MEM_out      ;

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


assign pc = IDreg_pc_out;
assign inst = IDreg_inst_out;

ysyx_22041461_IF_reg IF_reg(

    .clk                (clk),
    .flush              (rst),
    .IFreg_valid_fromCD (CD_IFreg_valid),
    .IFreg_enable       (CD_IFreg_enable),
    .IFreg_ctrl         (ID_PC_ctrl),
    .IFreg_next_pc      (ID_next_pc),

    .IFreg_pc           (IFreg_pc),
    .IFreg_valid_out    (IFreg_valid_out)
);


ysyx_22041461_IF IF(
    .clk          (clk),
    .rst          (rst),
    .IF_valid_in  (IFreg_valid_out),
    .IF_pc        (IFreg_pc),

    .IF_valid_out (IF_valid_out),
    .IF_inst      (IF_inst)
);


ysyx_22041461_ID_reg ID_reg(

    .clk                (clk),
    .flush              (rst),
    .IDreg_enable       (CD_IDreg_enable),

    .IDreg_valid_fromIF (IF_valid_out),
    .IDreg_valid_fromCD (CD_IDreg_valid),
    .IDreg_inst_in      (IF_inst),
    .IDreg_pc_in        (IFreg_pc),

    .IDreg_valid_out    (IDreg_valid_out),  
    .IDreg_inst_out     (IDreg_inst_out),   
    .IDreg_pc_out       (IDreg_pc_out)
);

ysyx_22041461_ID ID( 
    
    .ID_inst      (IDreg_inst_out),
    .ID_valid_in  (IDreg_valid_out),
    .ID_pc        (IDreg_pc_out),
    .ID_rs1_data  (WB_ID_rs1_data ),
    .ID_rs2_data  (WB_ID_rs2_data ),
    .ID_csr_mtvec (WB_ID_csr_mtvec),
    .ID_csr_mepc  (WB_ID_csr_mepc ),

    .ID_rd        (ID_rd),
    .ID_rs1       (ID_rs1),
    .ID_rs2       (ID_rs2),
    .ID_csr       (ID_csr      ),
    .ID_imm       (ID_imm      ),
    .ID_zimm      (ID_zimm     ),
    .ID_next_pc   (ID_next_pc  ),
    .ID_valid_out (ID_valid_out),
    .ID_PC_ctrl   (ID_PC_ctrl  ),
    .ID_CD_ctrl   (ID_CD_ctrl  ),
    .ID_EXE_ctrl  (ID_EXE_ctrl ),
    .ID_EXE_src   (ID_EXE_src  ),
    .ID_MEM_ctrl  (ID_MEM_ctrl ),   
    .ID_WB_ctrl   (ID_WB_ctrl  )    
); 


ysyx_22041461_EXE_reg EXE_reg(

    .clk                 (clk),
    .flush               (rst),
    .EXEreg_enable       (CD_EXEreg_enable),

    .EXEreg_valid_fromCD (CD_EXEreg_valid) ,
    .EXEreg_valid_fromID (ID_valid_out),

    .EXEreg_rd_in        (ID_rd),
    .EXEreg_rs1_in       (ID_rs1),
    .EXEreg_rs2_in       (ID_rs2),
    .EXEreg_csr_in       (ID_csr),
    .EXEreg_imm_in       (ID_imm),
    .EXEreg_zimm_in      (ID_zimm),
    .EXEreg_pc_in        (IDreg_pc_out),
    .EXEreg_EXE_ctrl_in  (ID_EXE_ctrl),
    .EXEreg_EXE_src_in   (ID_EXE_src),
    .EXEreg_MEM_ctrl_in  (ID_MEM_ctrl),
    .EXEreg_WB_ctrl_in   (ID_WB_ctrl),

    .EXEreg_valid_out    (EXEreg_valid_out   ),
    .EXEreg_rd_out       (EXEreg_rd_out      ),
    .EXEreg_rs1_out      (EXEreg_rs1_out     ),
    .EXEreg_rs2_out      (EXEreg_rs2_out     ),
    .EXEreg_csr_out      (EXEreg_csr_out     ),
    .EXEreg_imm_out      (EXEreg_imm_out     ),
    .EXEreg_zimm_out     (EXEreg_zimm_out    ),
    .EXEreg_pc_out       (EXEreg_pc_out      ),
    .EXEreg_EXE_ctrl_out (EXEreg_EXE_ctrl_out),
    .EXEreg_EXE_src_out  (EXEreg_EXE_src_out ),
    .EXEreg_MEM_ctrl_out (EXEreg_MEM_ctrl_out),
    .EXEreg_WB_ctrl_out  (EXEreg_WB_ctrl_out )
);

ysyx_22041461_EXE EXE(

    .EXE_valid_in  (EXEreg_valid_out),
    .EXE_rs1_data  (WB_EXE_rs1_data),
    .EXE_rs2_data  (WB_EXE_rs2_data),
    .EXE_csr_data  (WB_EXE_csr_data),
    .EXE_imm       (EXEreg_imm_out     ),
    .EXE_zimm      (EXEreg_zimm_out    ),
    .EXE_pc        (EXEreg_pc_out      ),
    .EXE_ctrl      (EXEreg_EXE_ctrl_out),
    .EXE_src       (EXEreg_EXE_src_out ),

    .EXE_out       (EXE_out      ),
    .EXE_valid_out (EXE_valid_out)

);

ysyx_22041461_MEM_reg MEM_reg(

    .clk                  (clk),
    .flush                (rst),
    .MEMreg_enable        (CD_MEMreg_enable),

    .MEMreg_valid_fromEXE (EXE_valid_out),
    .MEMreg_valid_fromCD  (CD_MEMreg_valid),

    .MEMreg_EXE_in        (EXE_out),
    .MEMreg_rd_in         (EXEreg_rd_out ),
    .MEMreg_rs1_in        (EXEreg_rs1_out),
    .MEMreg_rs2_in        (EXEreg_rs2_out),
    .MEMreg_csr_in        (EXEreg_csr_out),
    .MEMreg_imm_in        (EXEreg_imm_out ),
    .MEMreg_zimm_in       (EXEreg_zimm_out),
    .MEMreg_pc_in         (EXEreg_pc_out  ),
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

ysyx_22041461_MEM MEM(

    .MEM_valid_in       (MEMreg_valid_out),
    .MEM_write_valid    (CD_MEM_valid),
    .MEM_EXE_in         (MEMreg_EXE_out),
    .MEM_rs2_data       (WB_MEM_rs2_data),
    .MEM_ctrl           (MEMreg_MEM_ctrl_out),

    .MEM_valid_out      (MEM_valid_out),
    .MEM_out            (MEM_out) 
);

ysyx_22041461_WB_reg WB_reg(

    .clk                 (clk),
    .flush               (rst),
    .WBreg_enable        (1'b1),

    .WBreg_valid_fromMEM (MEM_valid_out),
    .WBreg_valid_fromCD  (CD_WBreg_valid),

    .WBreg_EXE_in        (MEMreg_EXE_out),
    .WBreg_MEM_in        (MEM_out),
    .WBreg_rd_in         (MEMreg_rd_out),
    .WBreg_rs1_in        (MEMreg_rs1_out),
    .WBreg_csr_in        (MEMreg_csr_out ),
    .WBreg_imm_in        (MEMreg_imm_out ),
    .WBreg_zimm_in       (MEMreg_zimm_out),
    .WBreg_pc_in         (MEMreg_pc_out  ),
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


ysyx_22041461_WB WB(

    .clk             (clk),
    .flush           (rst),
    .WB_valid        (WBreg_valid_out),

    .WB_ID_rs1       (ID_rs1),
    .WB_ID_rs2       (ID_rs2),

    .WB_EXE_rs1      (EXEreg_rs1_out),
    .WB_EXE_rs2      (EXEreg_rs2_out),
    .WB_EXE_csr      (EXEreg_csr_out),

    .WB_MEM_rs2      (MEMreg_rs2_out),

    .WB_EXE_in       (WBreg_EXE_out),
    .WB_MEM_in       (WBreg_MEM_out    ),
    .WB_rd           (WBreg_rd_out     ),
    .WB_rs1          (WBreg_rs1_out    ),
    .WB_csr          (WBreg_csr_out    ),
    .WB_imm          (WBreg_imm_out    ),
    .WB_zimm         (WBreg_zimm_out   ),
    .WB_pc           (WBreg_pc_out     ),
    .WB_ctrl         (WBreg_WB_ctrl_out),

    .WB_ID_rs1_data  (WB_ID_rs1_data ),
    .WB_ID_rs2_data  (WB_ID_rs2_data ),
    .WB_ID_csr_mtvec (WB_ID_csr_mtvec),
    .WB_ID_csr_mepc  (WB_ID_csr_mepc ),

    .WB_EXE_rs1_data (WB_EXE_rs1_data),
    .WB_EXE_rs2_data (WB_EXE_rs2_data),
    .WB_EXE_csr_data (WB_EXE_csr_data),

    .WB_MEM_rs2_data (WB_MEM_rs2_data)
);



ysyx_22041461_CD CD(  
    
    .CD_ctrl         (ID_CD_ctrl),

    .CD_IF_ctrl      (ID_PC_ctrl),
    .CD_IF_valid_out (IF_valid_out),

    .CD_ID_valid_in  (IDreg_valid_out),
    .CD_ID_rs1       (ID_rs1),
    .CD_ID_rs2       (ID_rs2),

    .CD_EXE_valid_in (EXEreg_valid_out),
    .CD_EXE_ctrl     (EXEreg_EXE_ctrl_out),
    .CD_EXE_src      (EXEreg_EXE_src_out),
    .CD_EXE_WB_ctrl  (EXEreg_WB_ctrl_out),
    .CD_EXE_rd       (EXEreg_rd_out),
    .CD_EXE_rs1      (EXEreg_rs1_out),
    .CD_EXE_rs2      (EXEreg_rs2_out),
    .CD_EXE_csr      (EXEreg_csr_out),

    .CD_MEM_valid_in (MEMreg_valid_out),
    .CD_MEM_ctrl     (MEMreg_MEM_ctrl_out),   
    .CD_MEM_WB_ctrl  (MEMreg_WB_ctrl_out),
    .CD_MEM_rd       (MEMreg_rd_out),
    .CD_MEM_rs2      (MEMreg_rs2_out),
    .CD_MEM_csr      (MEMreg_csr_out),
 
    .CD_WB_valid_in  (WBreg_valid_out),
    .CD_WB_ctrl      (WBreg_WB_ctrl_out),
    .CD_WB_rd        (WBreg_rd_out),
    .CD_WB_csr       (WBreg_csr_out),

    .CD_IFreg_valid     (CD_IFreg_valid  ),
    .CD_IFreg_enable    (CD_IFreg_enable ),
    .CD_IDreg_valid     (CD_IDreg_valid  ),
    .CD_IDreg_enable    (CD_IDreg_enable ),
    .CD_EXEreg_valid    (CD_EXEreg_valid ),
    .CD_EXEreg_enable   (CD_EXEreg_enable),
    .CD_MEMreg_valid    (CD_MEMreg_valid ),
    .CD_MEM_valid       (CD_MEM_valid),
    .CD_MEMreg_enable   (CD_MEMreg_enable),
    .CD_WBreg_valid     (CD_WBreg_valid  )
);

endmodule



