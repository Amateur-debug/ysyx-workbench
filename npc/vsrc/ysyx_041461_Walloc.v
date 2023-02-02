module ysyx_041461_Walloc_33bits(

    input  wire   [0:0]  clk               ,
    input  wire   [0:0]  rst               ,

    input  wire   [32:0] Walloc_33bits_src ,
    input  wire   [10:0] Walloc_33bits_cin2,
    input  wire   [6:0]  Walloc_33bits_cin3,
    input  wire   [4:0]  Walloc_33bits_cin4,
    input  wire   [2:0]  Walloc_33bits_cin5,
    input  wire   [1:0]  Walloc_33bits_cin6,
    input  wire   [1:0]  Walloc_33bits_cin7,
    input  wire   [0:0]  Walloc_33bits_cin8,

    output wire   [10:0] Walloc_33bits_cout1,
    output wire   [6:0]  Walloc_33bits_cout2,
    output wire   [4:0]  Walloc_33bits_cout3,
    output wire   [2:0]  Walloc_33bits_cout4,
    output wire   [1:0]  Walloc_33bits_cout5,
    output wire   [1:0]  Walloc_33bits_cout6,
    output wire   [0:0]  Walloc_33bits_cout7,
    output wire   [0:0]  Walloc_33bits_cout ,
    output wire   [0:0]  Walloc_33bits_sout
);

///////////////first////////////////
wire [10:0] sout1;
genvar i;
generate
    for(i = 0; i < 11; i = i + 1) begin: first
        ysyx_041461_CSA CSA(

            .a    (Walloc_33bits_src[3*i:3*i]),
            .b    (Walloc_33bits_src[3*i + 1:3*i + 1]),
            .cin  (Walloc_33bits_src[3*i + 2:3*i + 2]),
            .cout (Walloc_33bits_cout1[i:i]),
            .s    (sout1[i:i])
        );
    end
endgenerate
///////////////secnod///////////////
wire [21:0] src2;
wire [7:0] sout2;
assign src2 = {Walloc_33bits_cin2, sout1};
assign sout2[7:7] = src2[21:21];
genvar j;
generate
    for(j = 0; j < 7; j = j + 1) begin: second
        ysyx_041461_CSA CSA(

            .a    (src2[3*j:3*j]),
            .b    (src2[3*j + 1:3*j + 1]),
            .cin  (src2[3*j + 2:3*j + 2]),
            .cout (Walloc_33bits_cout2[j:j]),
            .s    (sout2[j:j])
        );
    end
endgenerate
///////////////thrid///////////////
reg  [14:0] src3;
wire [4:0] sout3;
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        src3 <= 15'b0;
    end
    else begin
        src3 <= {Walloc_33bits_cin3, sout2};
    end
end
genvar k;
generate
    for(k = 0; k < 5; k = k + 1) begin: thrid
        ysyx_041461_CSA CSA(

            .a    (src3[3*k:3*k]),
            .b    (src3[3*k + 1:3*k + 1]),
            .cin  (src3[3*k + 2:3*k + 2]),
            .cout (Walloc_33bits_cout3[k:k]),
            .s    (sout3[k:k])
        );
    end
endgenerate
///////////////fourth///////////////
wire [9:0] src4;
wire [3:0] sout4;
assign src4 = {Walloc_33bits_cin4, sout3};
assign sout4[3:3] = src4[9:9];
genvar m;
generate
    for(m = 0; m < 3; m = m + 1) begin: fourth
        ysyx_041461_CSA CSA(

            .a    (src4[3*m:3*m]),
            .b    (src4[3*m + 1:3*m + 1]),
            .cin  (src4[3*m + 2:3*m + 2]),
            .cout (Walloc_33bits_cout4[m:m]),
            .s    (sout4[m:m])
        );
    end
endgenerate
///////////////fifth///////////////
reg  [6:0] src5;
wire [2:0] sout5;
assign sout5[2:2] = src5[6:6];
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        src5 <= 7'b0;
    end
    else begin
        src5 <= {Walloc_33bits_cin5, sout4};
    end
end
genvar n;
generate
    for(n = 0; n < 2; n = n + 1) begin: fifth
        ysyx_041461_CSA CSA(

            .a    (src5[3*n:3*n]),
            .b    (src5[3*n + 1:3*n + 1]),
            .cin  (src5[3*n + 2:3*n + 2]),
            .cout (Walloc_33bits_cout5[n:n]),
            .s    (sout5[n:n])
        );
    end
endgenerate
///////////////sixth///////////////
wire [5:0] src6;
wire [1:0] sout6;
assign src6 = {Walloc_33bits_cin6, sout5, 1'b0};
genvar r;
generate
    for(r = 0; r < 2; r = r + 1) begin: sixth
        ysyx_041461_CSA CSA(

            .a    (src6[3*r:3*r]),
            .b    (src6[3*r + 1:3*r + 1]),
            .cin  (src6[3*r + 2:3*r + 2]),
            .cout (Walloc_33bits_cout6[r:r]),
            .s    (sout6[r:r])
        );
    end
endgenerate
///////////////seventh///////////////
reg  [3:0] src7;
wire [1:0] sout7;
assign sout7[1:1] = src7[3:3];
always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        src7 <= 4'b0;
    end
    else begin
        src7 <= {Walloc_33bits_cin7, sout6};
    end
end
ysyx_041461_CSA CSA7(
    .a    (src7[0:0]),
    .b    (src7[1:1]),
    .cin  (src7[2:2]),
    .cout (Walloc_33bits_cout7),
    .s    (sout7[0:0])
);
///////////////eighth///////////////
wire [2:0] src8;
assign src8 = {Walloc_33bits_cin8, sout7};
ysyx_041461_CSA CSA8(
    .a    (src8[0:0]),
    .b    (src8[1:1]),
    .cin  (src8[2:2]),
    .cout (Walloc_33bits_cout),
    .s    (Walloc_33bits_sout)
);

endmodule
