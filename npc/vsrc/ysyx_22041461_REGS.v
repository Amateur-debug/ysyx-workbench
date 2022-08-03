module ysyx_22041461_REGS(

    input   wire [0:0]  clk       ,
    input   wire [0:0]  rst       ,
    input   wire [4:0]  rs1       ,
    input   wire [4:0]  rd        ,
    input   wire [0:0]  en_regw   ,
    input   wire [63:0] data_write,

    output  wire [63:0] data_rs1  
);

reg [63:0] x [31:0];
reg [63:0] d [31:0];

integer i;
integer j;

assign  data_rs1 = x[rs1];

always@(*) begin
    if(en_regw == 1'b1) begin
        for(i = 0; i < 64; i = i + 1) begin
            d[i] = x[i];
        end
        d[rd] = data_write;
    end
    else begin
        for(i = 0; i < 64; i = i + 1) begin
            d[i] = x[i];
        end
    end
end

always@(posedge clk) begin
    if(rst == 1'b0) begin
        for(j = 0; j < 64; j = j + 1) begin
            x[j] <= 64'd0;
        end
    end
    else begin
        for(j = 0; j < 64; j = j + 1) begin
            x[j] <= d[j];
        end
    end
end

endmodule
