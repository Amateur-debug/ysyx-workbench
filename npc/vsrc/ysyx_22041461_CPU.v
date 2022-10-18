module ysyx_22041461_CPU(

    input   wire [0:0]  clk , 
    input   wire [0:0]  rst ,

    output  wire [31:0] inst
);



ysyx_22041461_IF_reg IF_reg(

    .clk                (clk               ),
    .flush              (rst               ),
    .IFreg_valid_fromCD (IFreg_valid_fromCD),
    .IFreg_enable       (IFreg_enable      ),
    .IFreg_ctrl         (IFreg_ctrl        ),
    .IFreg_next_pc      (IFreg_next_pc     ),
 
    .IFreg_pc           (IFreg_pc          ),
    .IFreg_valid_out    (IFreg_valid_out   )
);

ysyx_22041461_IF IF(
    .IF_valid_in  (IF_valid_in ),
    .IF_pc        (IF_pc       ),

    .IF_valid_out (IF_valid_out),
    .IF_inst      (IF_inst     )
);

ysyx_22041461_ID_reg ID_reg(

    .clk                (clk               ),
    .flush              (rst               ),
    .IDreg_enable       (IDreg_enable      ),

    .IDreg_valid_fromIF (IDreg_valid_fromIF),
    .IDreg_valid_fromCD (IDreg_valid_fromCD),
    .IDreg_inst_in      (IDreg_inst_in     ),
    .IDreg_pc_in        (IDreg_pc_in       ),

    .IDreg_valid_out    (IDreg_valid_out   ),  
    .IDreg_inst_out     (IDreg_inst_out    ),   
    .IDreg_pc_out       (IDreg_pc_out      )
);

ysyx_22041461_ID ID( 
    
    .ID_inst      (ID_inst     ),
    .ID_valid_in  (ID_valid_in ),
    .ID_pc        (ID_pc       ),
    .ID_rs1_data  (ID_rs1_data ),
    .ID_rs2_data  (ID_rs2_data ),
    .ID_csr_mtvec (ID_csr_mtvec),
    .ID_csr_mepc  (ID_csr_mepc ),
    
    .ID_rd        (ID_rd       ),
    .ID_rs1       (ID_rs1      ),
    .ID_rs2       (ID_rs2      ),
    .ID_csr       (ID_csr      ),
    .ID_imm       (ID_imm      ),
    .ID_shamt     (ID_shamt    ),
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


endmodule



