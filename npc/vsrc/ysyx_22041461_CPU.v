module ysyx_22041461_CPU(

    input   wire [0:0]  clk , 
    input   wire [0:0]  rst ,
    input   wire [31:0] inst,

    output  wire [63:0] pc  ,
    output  wire [0:0]  flag
);

wire    [4:0]   rs1       ;
wire    [4:0]   rd        ;
wire    [63:0]  imm       ;
wire    [0:0]   en_regw   ;
wire    [63:0]  data_rs1  ;
wire    [63:0]  data_write;

ysyx_22041461_IDU   IDU(
    
    .inst       (inst),

    .rs1        (rs1),
    .rd         (rd),
    .imm        (imm),
    .en_regw    (en_regw)   //寄存器写使能信号   
);

ysyx_22041461_PC    PC(

    .clk    (clk),
    .rst    (rst),

    .pc     (pc)   
);

ysyx_22041461_ADDER ADDER(
    
    .in1    (data_rs1),
    .in2    (imm),

    .sum    (data_write),
    .flag   (flag)   
);

ysyx_22041461_REGS  REGS(

    .clk        (clk),
    .rst        (rst),
    .rs1        (rs1),
    .rd         (rd),
    .en_regw    (en_regw),
    .data_write (data_write),

    .data_rs1   (data_rs1)
);

endmodule
