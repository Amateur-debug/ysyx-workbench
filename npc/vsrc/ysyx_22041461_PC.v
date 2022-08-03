module ysyx_22041461_PC(

    input   wire  [0:0]   clk,
    input   wire  [0:0]   rst,

    output  reg   [63:0]  pc    
);

always@(posedge clk) begin
    if(rst == 1'b0) begin
        pc <= 64'h0000_0000_8000_0000;
    end
    else begin
        pc <= pc + 4;
    end
end



endmodule
