module ysyx_041461_RAM(
    input                CLK ,
    input                CEN ,
    input                WEN ,
    input       [127:0]  BWEN,
    input       [5:0]    A   ,
    input       [127:0]  D   ,
    output reg  [127:0]  Q   
);

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [127:0] bwen = ~BWEN;

reg [127:0] ram [0:63];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
end

endmodule