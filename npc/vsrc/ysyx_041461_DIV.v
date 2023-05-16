
module ysyx_041461_DIV(

    input  wire   [0:0]  clk          ,
    input  wire   [0:0]  rst          ,

    input  wire   [0:0]  DIV_valid_in ,
    input  wire   [0:0]  DIV_signed   ,
    input  wire   [0:0]  DIV_divw     ,
    input  wire   [63:0] DIV_dividend ,
    input  wire   [63:0] DIV_divisor  ,

    output reg    [0:0]  DIV_valid_out,
    output reg    [63:0] DIV_quotient ,
    output reg    [63:0] DIV_remainder
);

reg  [0:0]  signed_buffer  ;   
reg  [0:0]  divw_buffer    ;     
reg  [63:0] dividend_buffer; 
reg  [63:0] divisor_buffer ;  

reg  [127:0] dividend;
reg  [64:0] divisor;
reg  [63:0] quotient;
wire [64:0] sub_out; 

reg  [63:0] dividend_w;
reg  [32:0] divisor_w;
reg  [31:0] quotient_w;
wire [32:0] subw_out;

reg  [63:0] quotient_out;
reg  [63:0] remainder_out;

reg  [0:0] quotient_positive;
reg  [0:0] remainder_positive;

reg  [6:0] state;

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        signed_buffer   <= 1'b0; 
        divw_buffer     <= 1'b0; 
        dividend_buffer <= 64'b0; 
        divisor_buffer  <= 64'b0; 
    end
    else begin
        if(state == 7'b0 && DIV_valid_in == 1'b1) begin
            signed_buffer   <= DIV_signed  ; 
            divw_buffer     <= DIV_divw    ; 
            dividend_buffer <= DIV_dividend; 
            divisor_buffer  <= DIV_divisor ; 
        end
        else begin
            signed_buffer   <= signed_buffer  ;
            divw_buffer     <= divw_buffer    ;
            dividend_buffer <= dividend_buffer;
            divisor_buffer  <= divisor_buffer ;
        end
    end
end

always@(*) begin
    if(signed_buffer == 1'b1) begin
        if(divisor_buffer[63:63] == 1'b1) begin
            divisor = {1'b0, ~divisor_buffer + 1'b1};
        end
        else begin
            divisor = {1'b0, divisor_buffer};
        end
    end
    else begin
        divisor = {1'b0, divisor_buffer};
    end
end

always@(*) begin
    if(signed_buffer == 1'b1) begin
        if(divisor_buffer[31:31] == 1'b1) begin
            divisor_w = {1'b0, ~divisor_buffer[31:0] + 1'b1};
        end
        else begin
            divisor_w = {1'b0, divisor_buffer[31:0]};
        end
    end
    else begin
        divisor_w = {1'b0, divisor_buffer[31:0]};
    end
end

assign sub_out = dividend[127:63] - divisor;
assign subw_out = dividend_w[63:31] - divisor_w;

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        dividend <= 128'b0;
    end
    else begin
        if(state == 7'b1) begin
            if(signed_buffer == 1'b1) begin
                if(dividend_buffer[63:63] == 1'b1) begin
                    dividend <= {64'b0, ~dividend_buffer + 1'b1};
                end
                else begin
                    dividend <= {64'b0, dividend_buffer};
                end
            end
            else begin
                dividend <= {64'b0, dividend_buffer};
            end
        end
        else begin
            if(sub_out[64:64] == 1'b1) begin
                dividend <= dividend << 1;
            end
            else begin
                dividend <= {sub_out, dividend[62:0]} << 1;
            end
        end
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        quotient <= 64'b0;
    end
    else begin
        if(state == 7'b1) begin
            quotient <= 64'b0;
        end
        else begin
            if(sub_out[64:64] == 1'b1) begin
                quotient <= {quotient[63:1], 1'b0} << 1;
            end
            else begin
                quotient <= {quotient[63:1], 1'b1} << 1;
            end
        end
    end
end


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        dividend_w <= 64'b0;
    end
    else begin
        if(state == 7'b1) begin
            if(signed_buffer == 1'b1) begin
                if(dividend_buffer[31:31] == 1'b1) begin
                    dividend_w <= {32'b0, ~dividend_buffer[31:0] + 1'b1};
                end
                else begin
                    dividend_w <= {32'b0, dividend_buffer[31:0]};
                end
            end
            else begin
                dividend_w <= {32'b0, dividend_buffer[31:0]};
            end
        end
        else begin
            if(subw_out[32:32] == 1'b1) begin
                dividend_w <= dividend_w << 1;
            end
            else begin
                dividend_w <= {subw_out, dividend_w[30:0]} << 1;
            end
        end
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        quotient_w <= 32'b0;
    end
    else begin
        if(state == 7'b1) begin
            quotient_w <= 32'b0;
        end
        else begin
            if(subw_out[32:32] == 1'b1) begin
                quotient_w <= {quotient_w[31:1], 1'b0} << 1;
            end
            else begin
                quotient_w <= {quotient_w[31:1], 1'b1} << 1;
            end
        end
    end
end

always@(*) begin
    if(divw_buffer == 1'b0) begin
        if(sub_out[64:64] == 1'b1) begin
            quotient_out = {quotient[63:1], 1'b0};
        end
        else begin
            quotient_out = {quotient[63:1], 1'b1};
        end
    end
    else begin
        if(subw_out[32:32] == 1'b1) begin
            quotient_out = {32'b0, quotient_w[31:1], 1'b0};
        end
        else begin
            quotient_out = {32'b0, quotient_w[31:1], 1'b1};
        end
    end
end

always@(*) begin
    if(divw_buffer == 1'b0) begin
        if(sub_out[64:64] == 1'b1) begin
            remainder_out = dividend[126:63];
        end
        else begin
            remainder_out = sub_out[63:0];
        end
    end
    else begin
        if(subw_out[32:32] == 1'b1) begin
            remainder_out = {32'b0, dividend_w[62:31]};
        end
        else begin
            remainder_out = {32'b0, subw_out[31:0]};
        end
    end
end

always@(*) begin
    if(signed_buffer == 1'b1) begin
        if(divw_buffer == 1'b0) begin
            quotient_positive = ~dividend_buffer[63:63] ^ divisor_buffer[63:63];
            remainder_positive = ~dividend_buffer[63:63];
        end
        else begin
            quotient_positive = ~dividend_buffer[31:31] ^ divisor_buffer[31:31];
            remainder_positive = ~dividend_buffer[31:31];
        end
    end
    else begin
        quotient_positive = 1'b1;
        remainder_positive = 1'b1;
    end
end

always@(*) begin
    if(quotient_positive == 1'b1) begin
        DIV_quotient = quotient_out;
    end
    else begin
        DIV_quotient = ~quotient_out + 1'b1;
    end
end

always@(*) begin
    if(remainder_positive == 1'b1) begin
        DIV_remainder = remainder_out;
    end
    else begin
        DIV_remainder = ~remainder_out + 1'b1;
    end
end

always@(*) begin
    if(state == 7'd33 && divw_buffer == 1'b1) begin
        DIV_valid_out = 1'b1;
    end
    else if(state == 7'd65) begin
        DIV_valid_out = 1'b1;
    end
    else begin
        DIV_valid_out = 1'b0;
    end
end

always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= 7'b0;
    end
    else begin
        if(state == 7'b0) begin
            if(DIV_valid_in == 1'b1) begin
                state <= state + 1'b1;
            end
            else begin
                state <= state;
            end
        end
        else if(state == 7'd33 && divw_buffer == 1'b1) begin
            state <= 7'b0;
        end
        else if(state == 7'd65) begin
            state <= 7'b0;
        end
        else begin
            state <= state + 1'b1;
        end
    end
end


endmodule
