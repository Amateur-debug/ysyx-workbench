// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_041461_TOP.h for the primary calling header

#ifndef VERILATED_VYSYX_041461_TOP_YSYX_041461_WALLOC_33BITS_H_
#define VERILATED_VYSYX_041461_TOP_YSYX_041461_WALLOC_33BITS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_041461_TOP__Syms;
class Vysyx_041461_TOP_VerilatedVcd;


//----------

VL_MODULE(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(Walloc_33bits_cin3,6,0);
    VL_IN8(Walloc_33bits_cin4,4,0);
    VL_IN8(Walloc_33bits_cin5,2,0);
    VL_IN8(Walloc_33bits_cin6,1,0);
    VL_IN8(Walloc_33bits_cin7,1,0);
    VL_IN8(Walloc_33bits_cin8,0,0);
    VL_OUT8(Walloc_33bits_cout2,6,0);
    VL_OUT8(Walloc_33bits_cout3,4,0);
    VL_OUT8(Walloc_33bits_cout4,2,0);
    VL_OUT8(Walloc_33bits_cout5,1,0);
    VL_OUT8(Walloc_33bits_cout6,1,0);
    VL_OUT8(Walloc_33bits_cout7,0,0);
    VL_OUT8(Walloc_33bits_cout,0,0);
    VL_OUT8(Walloc_33bits_sout,0,0);
    VL_IN16(Walloc_33bits_cin2,10,0);
    VL_OUT16(Walloc_33bits_cout1,10,0);
    VL_IN64(Walloc_33bits_src,32,0);

    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__sout2;
    CData/*4:0*/ __PVT__sout3;
    CData/*3:0*/ __PVT__sout4;
    CData/*6:0*/ __PVT__src5;
    CData/*2:0*/ __PVT__sout5;
    CData/*5:0*/ __PVT__src6;
    CData/*1:0*/ __PVT__sout6;
    CData/*3:0*/ __PVT__src7;
    CData/*1:0*/ __PVT__sout7;
    CData/*2:0*/ __PVT__src8;
    SData/*10:0*/ __PVT__sout1;
    SData/*14:0*/ __PVT__src3;
    SData/*9:0*/ __PVT__src4;
    IData/*21:0*/ __PVT__src2;

    // INTERNAL VARIABLES
    Vysyx_041461_TOP__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits);  ///< Copying not allowed
  public:
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits(const char* name);
    ~Vysyx_041461_TOP_ysyx_041461_Walloc_33bits();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_041461_TOP__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
