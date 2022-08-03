module ysyx_22041461_IDU(
    
    input   wire [31:0] inst,

    output  wire [4:0]  rs1     ,
    output  wire [4:0]  rd      ,
    output  reg  [63:0] imm     ,
    output  reg  [0:0]  en_regw    //寄存器写使能信号   
);

import "DPI-C" function void ebreak();

wire [2:0]  funct3;
wire [6:0]  opcode;

assign rs1    = inst[19:15];
assign rd     = inst[11:7] ;
assign funct3 = inst[14:12];
assign opcode = inst[6:0]  ;

always@(*)
    case({funct3, opcode})
        10'b000_0010011: begin
            imm      =  {{52{inst[31:31]}}, inst[31:20]};
            en_regw  =  1'b1                            ;
        end  
        default: begin
            imm      =  64'd0;
            en_regw  =  1'd0 ;
            ebreak();
        end
    endcase

endmodule
