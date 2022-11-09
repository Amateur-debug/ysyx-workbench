module  ysyx_041461_AXI_Crossbar(

    input   wire [0:0]    clk                     ,
    input   wire [0:0]    rst                     ,

    input   wire [0:0]    AXI_Crossbar_IF_arvalid ,
    input   wire [31:0]   AXI_Crossbar_IF_araddr  ,
    input   wire [3:0]    AXI_Crossbar_IF_arid    ,
    input   wire [7:0]    AXI_Crossbar_IF_arlen   ,
    input   wire [2:0]    AXI_Crossbar_IF_arsize  ,
    input   wire [1:0]    AXI_Crossbar_IF_arburst ,
    output  reg  [0:0]    AXI_Crossbar_IF_arready ,

    input   wire [0:0]    AXI_Crossbar_IF_rready  ,
    output  wire [0:0]    AXI_Crossbar_IF_rvalid  ,
    output  wire [1:0]    AXI_Crossbar_IF_rresp   ,
    output  wire [63:0]   AXI_Crossbar_IF_rdata   ,
    output  wire [0:0]    AXI_Crossbar_IF_rlast   ,
    output  wire [3:0]    AXI_Crossbar_IF_rid     ,

    input   wire [0:0]    AXI_Crossbar_MEM_arvalid,
    input   wire [31:0]   AXI_Crossbar_MEM_araddr ,
    input   wire [3:0]    AXI_Crossbar_MEM_arid   ,
    input   wire [7:0]    AXI_Crossbar_MEM_arlen  ,
    input   wire [2:0]    AXI_Crossbar_MEM_arsize ,
    input   wire [1:0]    AXI_Crossbar_MEM_arburst,
    output  reg  [0:0]    AXI_Crossbar_MEM_arready,

    input   wire [0:0]    AXI_Crossbar_MEM_rready ,
    output  wire [0:0]    AXI_Crossbar_MEM_rvalid ,
    output  wire [1:0]    AXI_Crossbar_MEM_rresp  ,
    output  wire [63:0]   AXI_Crossbar_MEM_rdata  ,
    output  wire [0:0]    AXI_Crossbar_MEM_rlast  ,
    output  wire [3:0]    AXI_Crossbar_MEM_rid    ,

    input   wire [0:0]    AXI_Crossbar_arready    ,
    output  reg  [0:0]    AXI_Crossbar_arvalid    ,
    output  reg  [31:0]   AXI_Crossbar_araddr     ,
    output  reg  [3:0]    AXI_Crossbar_arid       ,
    output  reg  [7:0]    AXI_Crossbar_arlen      ,
    output  reg  [2:0]    AXI_Crossbar_arsize     ,
    output  reg  [1:0]    AXI_Crossbar_arburst    ,

    output  reg  [0:0]    AXI_Crossbar_rready     ,
    input   wire [0:0]    AXI_Crossbar_rvalid     ,
    input   wire [1:0]    AXI_Crossbar_rresp      ,
    input   wire [63:0]   AXI_Crossbar_rdata      ,
    input   wire [0:0]    AXI_Crossbar_rlast      ,
    input   wire [3:0]    AXI_Crossbar_rid        
);

parameter IF_AXI_id = 4'b0000;
parameter MEM_AXI_id = 4'b0001;

parameter OKAY = 2'b00;
parameter EXOKAY = 2'b01;
parameter SLVERR = 2'b10;
parameter DECERR = 2'b11;

parameter FIXED = 2'b00;
parameter INCR = 2'b01;
parameter WRAP = 2'b10;
parameter Rserved = 2'b11;

reg [1:0]  state;


always@(posedge clk or posedge rst) begin
    if(rst == 1'b1) begin
        state <= 2'b00;
    end
    else begin
        case(state)
            2'b00: begin
                if(AXI_Crossbar_IF_arvalid == 1'b1) begin
                    state <= 2'b01;
                end
                else if(AXI_Crossbar_MEM_arvalid == 1'b1) begin
                    state <= 2'b10;
                end
                else begin
                    state <= state;
                end
            end
            2'b01: begin
                if(AXI_Crossbar_rvalid == 1'b1 && AXI_Crossbar_rresp == OKAY && AXI_Crossbar_rlast == 1'b1 && AXI_Crossbar_rid == IF_AXI_id) begin
                    if(AXI_Crossbar_MEM_arvalid == 1'b1) begin
                        state <= 2'b10;
                    end
                    else begin
                        state <= 2'b00;
                    end
                end
                else begin
                    state <= state;
                end
            end
            2'b10: begin
                if(AXI_Crossbar_rvalid == 1'b1 && AXI_Crossbar_rresp == OKAY && AXI_Crossbar_rlast == 1'b1 && AXI_Crossbar_rid == MEM_AXI_id) begin
                    state <= 2'b00;
                end
                else begin
                    state <= state;
                end
            end
            2'b11: begin
                state <= 2'b00;
            end
        endcase
    end
end

always@(*) begin
    if(state == 2'b00 || state == 2'b01 || state == 2'b11) begin
        AXI_Crossbar_arvalid = AXI_Crossbar_IF_arvalid;
        AXI_Crossbar_araddr  = AXI_Crossbar_IF_araddr ;
        AXI_Crossbar_arid    = AXI_Crossbar_IF_arid   ;
        AXI_Crossbar_arlen   = AXI_Crossbar_IF_arlen  ;
        AXI_Crossbar_arsize  = AXI_Crossbar_IF_arsize ;
        AXI_Crossbar_arburst = AXI_Crossbar_IF_arburst;
        AXI_Crossbar_rready  = AXI_Crossbar_IF_rready ;
    end
    else begin
        AXI_Crossbar_arvalid = AXI_Crossbar_MEM_arvalid;
        AXI_Crossbar_araddr  = AXI_Crossbar_MEM_araddr ;
        AXI_Crossbar_arid    = AXI_Crossbar_MEM_arid   ;
        AXI_Crossbar_arlen   = AXI_Crossbar_MEM_arlen  ;
        AXI_Crossbar_arsize  = AXI_Crossbar_MEM_arsize ;
        AXI_Crossbar_arburst = AXI_Crossbar_MEM_arburst;
        AXI_Crossbar_rready  = AXI_Crossbar_MEM_rready ;
    end
end

assign AXI_Crossbar_IF_rvalid = AXI_Crossbar_rvalid;
assign AXI_Crossbar_IF_rresp  = AXI_Crossbar_rresp ;
assign AXI_Crossbar_IF_rdata  = AXI_Crossbar_rdata ;
assign AXI_Crossbar_IF_rlast  = AXI_Crossbar_rlast ;
assign AXI_Crossbar_IF_rid    = AXI_Crossbar_rid   ;

assign AXI_Crossbar_MEM_rvalid = AXI_Crossbar_rvalid;
assign AXI_Crossbar_MEM_rresp  = AXI_Crossbar_rresp ;
assign AXI_Crossbar_MEM_rdata  = AXI_Crossbar_rdata ;
assign AXI_Crossbar_MEM_rlast  = AXI_Crossbar_rlast ;
assign AXI_Crossbar_MEM_rid    = AXI_Crossbar_rid   ;

always@(*) begin
    if(state == 2'b00 || state == 2'b01 || state == 2'b11) begin
        AXI_Crossbar_IF_arready = AXI_Crossbar_arready;
    end
    else begin
        AXI_Crossbar_IF_arready = 1'b0;
    end
end

always@(*) begin
    if(state == 2'b10) begin
        AXI_Crossbar_MEM_arready = AXI_Crossbar_arready;
    end
    else begin
        AXI_Crossbar_MEM_arready = 1'b0;
    end
end

endmodule