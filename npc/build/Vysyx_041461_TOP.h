// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_041461_TOP_H_
#define VERILATED_VYSYX_041461_TOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vysyx_041461_TOP__Syms;
class Vysyx_041461_TOP___024root;
class VerilatedVcdC;
class Vysyx_041461_TOP_VerilatedVcd;
class Vysyx_041461_TOP_ysyx_041461_Walloc_33bits;


// This class is the main interface to the Verilated model
class Vysyx_041461_TOP VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_041461_TOP__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc;
    Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* const __PVT__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_041461_TOP___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_041461_TOP(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_041461_TOP(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_041461_TOP();
  private:
    VL_UNCOPYABLE(Vysyx_041461_TOP);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
