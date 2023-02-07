`include "ysyx_041461_macro.v"
module ysyx_041461_MUL(

    input  wire   [0:0]  clk             ,
    input  wire   [0:0]  rst             ,

    input  wire   [0:0]  MUL_valid_in    ,
    input  wire   [1:0]  MUL_signed      ,
    input  wire   [63:0] MUL_multiplicand,
    input  wire   [63:0] MUL_multiplier  ,

    output reg    [0:0]  MUL_valid_out   ,
    output reg    [63:0] MUL_result_hi   ,
    output reg    [63:0] MUL_result_lo
);

reg [127:0] multiplicand;
reg [65:0] multiplier;

always@(*) begin
    case(MUL_signed)
        `ysyx_041461_MUL_unsigned_x_unsigned: begin
            multiplicand = {64'b0, MUL_multiplicand};
            multiplier = {2'b0, MUL_multiplier};
        end
        `ysyx_041461_MUL_signed_x_unsigned: begin
            multiplicand = {{64{MUL_multiplicand[63:63]}}, MUL_multiplicand};
            multiplier = {2'b0, MUL_multiplier};
        end
        `ysyx_041461_MUL_signed_x_signed: begin
            multiplicand = {{64{MUL_multiplicand[63:63]}}, MUL_multiplicand};
            multiplier = {{2{MUL_multiplier[63:63]}}, MUL_multiplier};
        end
        default: begin
            multiplicand = 128'b0;
            multiplier = 66'b0;
        end
    endcase
end

wire [127:0] Booth_core_p [32:0];
wire [0:0] Booth_core_c [32:0];

ysyx_041461_Booth_core Booth_core0(

    .Booth_core_src ({multiplier[1:0], 1'b0}),
    .Booth_core_x   (multiplicand),

    .Booth_core_p   (Booth_core_p[0]),
    .Booth_core_c   (Booth_core_c[0])
);
genvar i;
generate  
    for(i = 2; i < 65; i = i + 2) begin: Booth_core
        ysyx_041461_Booth_core Booth_core(

            .Booth_core_src (multiplier[i + 1:i - 1]),
            .Booth_core_x   (multiplicand << i      ),

            .Booth_core_p   (Booth_core_p[i / 2]),
            .Booth_core_c   (Booth_core_c[i / 2])
        );
   	end 
endgenerate

reg [32:0] switch_out [127:0];
reg [32:0] switch_c;

genvar j, k, m;
generate
    for(j = 0; j < 128; j = j + 1) begin: switch1
        for(k = 0; k < 33; k = k + 1) begin: switch2
            always@(posedge clk or posedge rst) begin
                if(rst == 1'b1) begin
                    switch_out[j][k] <= 1'b0;
                end
                else begin
                    switch_out[j][k] <= Booth_core_p[k][j];
                end
            end
        end
    end
endgenerate
generate
    for(m = 0; m < 33; m = m + 1) begin: switch3
        always@(posedge clk or posedge rst) begin
            if(rst == 1'b1) begin
                switch_c[m] <= 1'b0;
            end
            else begin
                switch_c[m] <= Booth_core_c[m];
            end
        end
    end
endgenerate


wire   [10:0] Walloc_33bits_cout1 [127:0];
wire   [6:0]  Walloc_33bits_cout2 [127:0];
wire   [4:0]  Walloc_33bits_cout3 [127:0];
wire   [2:0]  Walloc_33bits_cout4 [127:0];
wire   [1:0]  Walloc_33bits_cout5 [127:0];
wire   [1:0]  Walloc_33bits_cout6 [127:0];
wire   [0:0]  Walloc_33bits_cout7 [127:0];
wire   [0:0]  Walloc_33bits_cout  [127:0];
wire   [0:0]  Walloc_33bits_sout  [127:0];

ysyx_041461_Walloc_33bits Walloc0(

    .clk                 (clk),
    .rst                 (rst),

    .Walloc_33bits_src   (switch_out[0]  ),
    .Walloc_33bits_cin2  (switch_c[10:0] ),
    .Walloc_33bits_cin3  (switch_c[17:11]),
    .Walloc_33bits_cin4  (switch_c[22:18]),
    .Walloc_33bits_cin5  (switch_c[25:23]),
    .Walloc_33bits_cin6  (switch_c[27:26]),
    .Walloc_33bits_cin7  (switch_c[29:28]),
    .Walloc_33bits_cin8  (switch_c[30:30]),

    .Walloc_33bits_cout1 (Walloc_33bits_cout1[0]),
    .Walloc_33bits_cout2 (Walloc_33bits_cout2[0]),
    .Walloc_33bits_cout3 (Walloc_33bits_cout3[0]),
    .Walloc_33bits_cout4 (Walloc_33bits_cout4[0]),
    .Walloc_33bits_cout5 (Walloc_33bits_cout5[0]),
    .Walloc_33bits_cout6 (Walloc_33bits_cout6[0]),
    .Walloc_33bits_cout7 (Walloc_33bits_cout7[0]),
    .Walloc_33bits_cout  (Walloc_33bits_cout [0]),
    .Walloc_33bits_sout  (Walloc_33bits_sout [0])
);
genvar t;
generate  
    for(t = 1; t < 128; t = t + 1) begin: Walloc
        ysyx_041461_Walloc_33bits Walloc(

            .clk                 (clk),
            .rst                 (rst),

            .Walloc_33bits_src   (switch_out[t]  ),
            .Walloc_33bits_cin2  (Walloc_33bits_cout1[t-1]),
            .Walloc_33bits_cin3  (Walloc_33bits_cout2[t-1]),
            .Walloc_33bits_cin4  (Walloc_33bits_cout3[t-1]),
            .Walloc_33bits_cin5  (Walloc_33bits_cout4[t-1]),
            .Walloc_33bits_cin6  (Walloc_33bits_cout5[t-1]),
            .Walloc_33bits_cin7  (Walloc_33bits_cout6[t-1]),
            .Walloc_33bits_cin8  (Walloc_33bits_cout7[t-1]),

            .Walloc_33bits_cout1 (Walloc_33bits_cout1[t]),
            .Walloc_33bits_cout2 (Walloc_33bits_cout2[t]),
            .Walloc_33bits_cout3 (Walloc_33bits_cout3[t]),
            .Walloc_33bits_cout4 (Walloc_33bits_cout4[t]),
            .Walloc_33bits_cout5 (Walloc_33bits_cout5[t]),
            .Walloc_33bits_cout6 (Walloc_33bits_cout6[t]),
            .Walloc_33bits_cout7 (Walloc_33bits_cout7[t]),
            .Walloc_33bits_cout  (Walloc_33bits_cout [t]),
            .Walloc_33bits_sout  (Walloc_33bits_sout [t])
        );
   	end 
endgenerate


reg [127:0] adder_src1;
reg [127:0] adder_src2;

integer r;
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        adder_src1 <= 128'b0;
        adder_src2 <= 128'b0;
    end
    else begin
        adder_src1[0:0] <= switch_c[31:31];
        adder_src2[0:0] <= Walloc_33bits_sout[0];
        for(r = 1; r < 128; r = r + 1) begin
            adder_src1[r] <= Walloc_33bits_cout[r - 1];
            adder_src2[r] <= Walloc_33bits_sout[r];
        end
    end
end

assign {MUL_result_hi, MUL_result_lo} = adder_src1 + adder_src2 + {127'b0, switch_c[32:32]};

reg [2:0] state; 

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= 3'b0;
    end
    else begin
        if(state == 3'b0) begin
            if(MUL_valid_in == 1'b1) begin
                state <= state + 1'b1;
            end
            else begin
                state <= state;
            end
        end
        else if(state == 3'd5) begin
            state <= 3'b0;
        end
        else begin
            state <= state + 1'b1;
        end
    end
end

always@(*) begin
    if(state == 3'd5) begin
        MUL_valid_out = 1'b1;
    end
    else begin
        MUL_valid_out = 1'b0;
    end
end

endmodule
