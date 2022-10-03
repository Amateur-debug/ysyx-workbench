module ysyx_22041461_CPU(

    input   wire [0:0]  clk , 
    input   wire [0:0]  rst ,

    output  wire [63:0] pc  ,
    output  wire [0:0]  flag,
    output  wire [31:0] inst
);


wire    [4:0]   rs1         ;
wire    [4:0]   rs2         ;
wire    [4:0]   rd          ;
wire    [63:0]  imm         ;
wire    [63:0]  snpc        ;
wire    [63:0]  rs1_data    ;
wire    [63:0]  rs2_data    ;
wire    [63:0]  dest        ;
wire    [63:0]  mem         ;
wire    [4:0]   ctrl_ALU    ;
wire    [2:0]   sel_ALU     ;
wire    [1:0]   sel_CMP     ;
wire    [0:0]   ctrl_CMP    ;
/*verilator lint_off UNOPTFLAT*/
wire    [1:0]   CMP_out     ;
/*verilator lint_on UNOPTFLAT*/
wire    [3:0]   sel_REGS    ;
wire    [1:0]   sel_PC      ;
wire    [3:0]   ctrl_MEM    ;
wire    [2:0]   sel_MEM_addr;
wire    [2:0]   sel_MEM_data;
wire    [1:0]   ctrl_CSRS   ;
wire    [63:0]  csr_data    ;
wire    [63:0]  csr_mepc    ;
wire    [63:0]  csr_mtvec   ;

ysyx_22041461_CU   CU(

    .inst           (inst        ),
    .CMP_out        (CMP_out     ),
         
    .rs1            (rs1         ),
    .rs2            (rs2         ),
    .rd             (rd          ),
    .imm            (imm         ),
    .ctrl_ALU       (ctrl_ALU    ),
    .sel_ALU        (sel_ALU     ),
    .ctrl_CMP       (ctrl_CMP    ),
    .sel_CMP        (sel_CMP     ),
    .sel_REGS       (sel_REGS    ),
    .sel_PC         (sel_PC      ),
    .ctrl_MEM       (ctrl_MEM    ),
    .sel_MEM_addr   (sel_MEM_addr),
    .sel_MEM_data   (sel_MEM_data),
    .ctrl_CSRS      (ctrl_CSRS   )
);

ysyx_22041461_PC    PC(

    .clk        (clk   )   , 
    .rst        (rst   )   , 
    .sel_PC     (sel_PC)   , 
    .dest       (dest  )   ,
    .csr_mepc   (csr_mepc) ,
    .csr_mtvec  (csr_mtvec),

    .snpc       (snpc  )   ,
    .pc         (pc    )
);

ysyx_22041461_REGS  REGS(

    .clk        (clk     ),
    .rst        (rst     ),
    .sel_REGS   (sel_REGS),
    .rs1        (rs1     ),
    .rs2        (rs2     ),
    .rd         (rd      ),
    .imm        (imm     ),
    .dest       (dest    ),
    .pc         (pc      ),
    .snpc       (snpc    ),
    .mem        (mem     ),
    .csr_data   (csr_data),

    .rs1_data   (rs1_data),
    .rs2_data   (rs2_data)
);

ysyx_22041461_CMP   CMP(

    .imm        (imm)     ,
    .rs1_data   (rs1_data),
    .rs2_data   (rs2_data),
    .sel_CMP    (sel_CMP) ,
    .ctrl_CMP   (ctrl_CMP),

    .CMP_out    (CMP_out)
);

ysyx_22041461_ALU   ALU(

    .ctrl_ALU   (ctrl_ALU),
    .sel_ALU    (sel_ALU ),
    .rs1_data   (rs1_data),
    .rs2_data   (rs2_data),
    .imm        (imm     ),
    .pc         (pc      ),
    .snpc       (snpc    ),
    .csr_data   (csr_data),

    .dest       (dest    ),
    .flag       (flag    )
);

ysyx_22041461_MEM   MEM(

    .clk            (clk         ),
    .rst            (rst         ),
    .dest           (dest        ),
    .rs1_data       (rs1_data    ),
    .rs2_data       (rs2_data    ),
    .imm            (imm         ),
    .pc             (pc          ),
    .snpc           (snpc        ),
    .ctrl_MEM       (ctrl_MEM    ),
    .sel_MEM_addr   (sel_MEM_addr),
    .sel_MEM_data   (sel_MEM_data),

    .read_data      (mem         ),
    .inst           (inst        )
);

ysyx_22041461_CSR CSR(

    .clk       (clk      ),
    .rst       (rst      ),
    .ctrl_CSRS (ctrl_CSRS),
    .imm       (imm      ),
    .dest      (dest     ),
    .pc        (pc       ),
    .rs1_data  (rs1_data ),

    .csr_data  (csr_data ),
    .csr_mepc  (csr_mepc ),
    .csr_mtvec (csr_mtvec)
);

endmodule
