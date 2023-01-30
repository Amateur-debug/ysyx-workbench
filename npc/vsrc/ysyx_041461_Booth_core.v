module ysyx_041461_Booth_core(

    input  wire  [2:0]    Booth_core_src,
    input  wire  [127:0]  Booth_core_x  ,

    output reg   [127:0]  Booth_core_p  ,
    output reg   [0:0]    Booth_core_c
);

wire [0:0] y_add;
wire [0:0] y;
wire [0:0] y_sub;
wire [0:0] sel_negative;
wire [0:0] sel_double_negative;
wire [0:0] sel_positive;
wire [0:0] sel_double_positive;

assign y_add = Booth_core_src[2:2];
assign y = Booth_core_src[1:1];
assign y_sub = Booth_core_src[0:0];
assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
assign sel_double_negative =  y_add & ~y & ~y_sub;
assign sel_double_positive = ~y_add &  y &  y_sub;

always@(*) begin
    if(sel_negative == 1'b1) begin
        Booth_core_p = ~Booth_core_x;
        Booth_core_c = 1'b1;
    end
    else if(sel_positive == 1'b1) begin
        Booth_core_p = Booth_core_x;
        Booth_core_c = 1'b0;
    end
    else if(sel_double_negative == 1'b1) begin
        Booth_core_p = ~(Booth_core_x << 1);
        Booth_core_c = 1'b1;
    end
    else if(sel_double_positive == 1'b1) begin
        Booth_core_p = Booth_core_x << 1;
        Booth_core_c = 1'b0;
    end
    else begin
        Booth_core_p = 128'b0;
        Booth_core_c = 1'b0;
    end
end

endmodule
