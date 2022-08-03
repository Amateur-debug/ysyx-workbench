// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22041461_ADDER.h for the primary calling header

#ifndef VERILATED_VYSYX_22041461_ADDER___024ROOT_H_
#define VERILATED_VYSYX_22041461_ADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22041461_ADDER__Syms;
class Vysyx_22041461_ADDER_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22041461_ADDER___024root) {
  public:

    // PORTS
    VL_OUT8(flag,0,0);
    VL_IN64(in1,63,0);
    VL_IN64(in2,63,0);
    VL_OUT64(sum,63,0);

    // INTERNAL VARIABLES
    Vysyx_22041461_ADDER__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22041461_ADDER___024root);  ///< Copying not allowed
  public:
    Vysyx_22041461_ADDER___024root(const char* name);
    ~Vysyx_22041461_ADDER___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22041461_ADDER__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
