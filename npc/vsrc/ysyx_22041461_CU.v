module ysyx_22041461_CU(
    
    input   wire [31:0] inst        ,
  
    output  wire [4:0]  rs1         ,
    output  wire [4:0]  rs2         ,   
    output  wire [4:0]  rd          ,
    output  reg  [63:0] imm         ,
    output  reg  [2:0]  ctrl_ALU    ,    //ALU控制信号               
    output  reg  [2:0]  sel_ALU     ,    //ALU输入选择信号
    output  reg  [2:0]  sel_REGS    ,    //寄存器输入选择信号
    output  reg  [1:0]  sel_PC      ,    //pc输入选择信号
    output  reg  [1:0]  ctrl_MEM    ,
    output  reg  [2:0]  sel_MEM_addr,
    output  reg  [2:0]  sel_MEM_data    
);

//ctrl_ALU     操作                sel_ALU       操作数来源                  
//  000         无                  000       rs1_data,rs2_data
//  001         +                   001       rs1_data,imm 
//  010    +且设最低有效位为0         010       rs1_data,pc
//  011         <<                  011       rs1_data,snpc
//                                  100       imm,pc  
//                                  101       imm,snpc  


//sel_REGS     输入来源         sel_PC         输入来源
//  000         不变             00             snpc
//  001         ALU             01              ALU
//  010         pc              10              
//  011         snpc
//  100         imm
//  101         memory


import "DPI-C" function void ebreak();

wire [2:0]  funct3;
wire [6:0]  funct7;
wire [6:0]  opcode;

assign rs1    = inst[19:15];
assign rs2    = inst[24:20];
assign rd     = inst[11:7] ;
assign funct3 = inst[14:12];
assign funct7 = inst[31:25];
assign opcode = inst[6:0]  ;

function [63:0] immI(
    input  [31:0] INST
);

immI = {{52{INST[31:31]}}, INST[31:20]};

endfunction

function [63:0] immS(
    input  [31:0] INST
);

immS = {{52{INST[31:31]}}, INST[31:25], INST[11:7]};

endfunction

function [63:0] immB(
    input  [31:0] INST
);

immB = {{51{INST[31:31]}}, INST[31:31], INST[7:7], INST[30:25], INST[11:8],1'b0};

endfunction

function [63:0] immU(
    input  [31:0] INST
);

immU = {{32{INST[31:31]}}, INST[31:12], 12'b0};

endfunction

function [63:0] immJ(
    input  [31:0] INST
);

immJ = {{43{INST[31:31]}}, INST[31:31], INST[19:12], INST[20:20], INST[30:21], 1'b0};

endfunction

/* verilator lint_off CASEX */
always@(*) begin             
    casex({funct7, funct3, opcode})
        17'bxxxxxxx_000_0010011: begin //addi
            imm          = immI(inst);     
            ctrl_ALU     = 3'b001    ;         
            sel_ALU      = 3'b001    ;         
            sel_REGS     = 3'b001    ;         
            sel_PC       = 2'b00     ;
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;
        end  
        17'bxxxxxxx_000_1100111: begin //jalr
            imm          = immI(inst);     
            ctrl_ALU     = 3'b010    ;         
            sel_ALU      = 3'b001    ;         
            sel_REGS     = 3'b011    ;         
            sel_PC       = 2'b01     ; 
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;   
        end
        17'b000000x_001_0010011: begin //slli
            imm          = immI(inst);     
            ctrl_ALU     = 3'b011    ;         
            sel_ALU      = 3'b001    ;         
            sel_REGS     = 3'b001    ;         
            sel_PC       = 2'b00     ; 
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;   
        end
        17'bxxxxxxx_011_0100011: begin //sd
            imm          = immI(inst);     
            ctrl_ALU     = 3'b001    ;         
            sel_ALU      = 3'b001    ;         
            sel_REGS     = 3'b000    ;         
            sel_PC       = 2'b00     ;
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b010    ;                
        end
        17'bxxxxxxx_xxx_0010111: begin //auipc      
            imm          = immU(inst);     
            ctrl_ALU     = 3'b001    ;         
            sel_ALU      = 3'b100    ;         
            sel_REGS     = 3'b001    ;         
            sel_PC       = 2'b00     ;
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;         
        end
        17'bxxxxxxx_xxx_0110111: begin //lui
            imm          = immU(inst);     
            ctrl_ALU     = 3'b000    ;         
            sel_ALU      = 3'b000    ;         
            sel_REGS     = 3'b100    ;         
            sel_PC       = 2'b00     ;
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;    
        end
        17'bxxxxxxx_xxx_1101111: begin //jal
            imm          = immJ(inst);     
            ctrl_ALU     = 3'b001    ;         
            sel_ALU      = 3'b100    ;         
            sel_REGS     = 3'b011    ;         
            sel_PC       = 2'b01     ;
            ctrl_MEM     = 2'b00     ;
            sel_MEM_addr = 3'b000    ;
            sel_MEM_data = 3'b000    ;            
        end
        default: begin
            
        end
    endcase
end
/* verilator lint_on CASEX */

endmodule
