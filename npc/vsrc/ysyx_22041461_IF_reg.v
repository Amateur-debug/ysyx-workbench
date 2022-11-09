module ysyx_041461_IF_reg(

    input   wire [0:0]   clk               ,
    input   wire [0:0]   rst               ,
    input   wire [0:0]   IFreg_enable      ,
    input   wire [0:0]   IFreg_ctrl        ,
    input   wire [63:0]  IFreg_next_pc     ,
 
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
    else if(IFreg_ctrl == 1'b0) begin
        IFreg_pc <= IFreg_pc + 4;
    end
    else begin
        IFreg_pc <= IFreg_next_pc;
    end
end


endmodule
