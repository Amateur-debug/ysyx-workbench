module ysyx_22041461_SRAM
#(
    parameter Bits = 128;
    parameter Word_Depth = 64;
    parameter Add_Width = 6;
    parameter Wen_Width = 128;
)
(
    input                 CLK,
    input                 CEN,
    input                 WEN,
    input [Wen_Width-1:0] BWEN,
    input [Add_Width-1:0] A,
    input [Bits-1:0]      D,

    output reg [Bits-1:0] Q
);

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : 64'b0;
end

endmodule