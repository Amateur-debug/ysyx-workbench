
module ysyx_041461_IF_reg(

    input   wire [0:0]   clk                 ,
    input   wire [0:0]   rst                 ,
    input   wire [0:0]   IFreg_enable        ,
    input   wire [0:0]   IFreg_ctrl_fromID   ,
    input   wire [1:0]   IFreg_ctrl_fromWB   ,

    input   wire [63:0]  IFreg_next_pc       ,
    input   wire [63:0]  IFreg_mtvec         ,
    input   wire [63:0]  IFreg_mepc          ,
    input   wire [62:0]  IFreg_CAUSE         ,
    
    output  reg  [63:0]  IFreg_pc          
);


//PC寄存器功能实现
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        IFreg_pc <= 64'h0000_0000_3000_0000;
    end
    else if(IFreg_enable == 1'b0) begin
        IFreg_pc <= IFreg_pc;
    end
    else if(IFreg_ctrl_fromWB != `ysyx_041461_WB_IFreg_ctrl_NOP) begin
        case(IFreg_ctrl_fromWB)
            `ysyx_041461_WB_IFreg_ctrl_MTVEC: begin
                if(IFreg_mtvec[1:0] == 2'b00) begin
                    IFreg_pc <= IFreg_mtvec;
                end
                else if(IFreg_mtvec[1:0] == 2'b01) begin
                    IFreg_pc <= {IFreg_mtvec[63:2], 2'b00} + {IFreg_CAUSE, 1'b0} + {IFreg_CAUSE, 1'b0} + {IFreg_CAUSE, 1'b0} + {IFreg_CAUSE, 1'b0};
                end
            end
            `ysyx_041461_WB_IFreg_ctrl_MEPC: begin
                IFreg_pc <= IFreg_mepc;
            end
            default:begin
                IFreg_pc <= IFreg_pc;
            end
        endcase
    end
    else begin
        case(IFreg_ctrl_fromID)
            `ysyx_041461_ID_IFreg_ctrl_NOP: begin
                IFreg_pc <= IFreg_pc + 64'd4;
            end
            `ysyx_041461_ID_IFreg_ctrl_IDpc: begin
                IFreg_pc <= IFreg_next_pc;
            end
        endcase
    end
end


endmodule
