// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP_ysyx_041461_Walloc_33bits.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc__171(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc__171\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2aU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2aU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2aU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2aU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc__44(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc__44\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x2cU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2cU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2cU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2cU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2cU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2cU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2cU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2cU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2cU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2cU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2cU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2cU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2cU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2cU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2cU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2cU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2cU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2cU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2cU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2cU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2cU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2cU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2cU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2cU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x2cU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2cU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2cU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2cU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2cU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2cU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2cU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2cU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2cU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2cU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2cU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2cU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2cU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2cU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2cU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2cU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2bU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2bU] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2bU] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc__172(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc__172\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2bU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2bU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2bU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2bU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc__45(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc__45\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x2dU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2dU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2dU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2dU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2dU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2dU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2dU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2dU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2dU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2dU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2dU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2dU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2dU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2dU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2dU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2dU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2dU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2dU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2dU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2dU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2dU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2dU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2dU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2dU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x2dU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2dU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2dU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2dU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2dU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2dU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2dU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2dU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2dU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2dU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2dU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2dU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2dU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2dU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2dU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2dU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2cU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2cU] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2cU] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc__173(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc__173\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2cU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2cU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2cU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2cU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc__46(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc__46\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x2eU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2eU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2eU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2eU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2eU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2eU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2eU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2eU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2eU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2eU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2eU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2eU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2eU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2eU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2eU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2eU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2eU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2eU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2eU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2eU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2eU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2eU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2eU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2eU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x2eU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2eU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2eU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2eU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2eU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2eU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2eU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2eU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2eU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2eU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2eU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2eU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2eU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2eU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2eU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2eU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2dU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2dU] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2dU] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc__174(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc__174\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2dU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2dU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2dU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2dU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc__47(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc__47\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x2fU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2fU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2fU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2fU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2fU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2fU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2fU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2fU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2fU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x2fU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x2fU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x2fU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2fU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2fU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2fU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x2fU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2fU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2fU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x2fU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2fU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x2fU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x2fU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2fU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2fU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x2fU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2fU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2fU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2fU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2fU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x2fU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x2fU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x2fU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x2fU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2fU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2fU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x2fU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x2fU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x2fU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x2fU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x2fU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2eU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2eU] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2eU] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc__175(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc__175\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2eU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2eU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2eU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2eU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc__48(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc__48\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x30U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x30U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x30U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x30U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x30U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x30U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x30U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x30U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x30U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x30U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x30U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x30U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x30U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x30U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x30U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x30U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x30U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x30U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x30U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x30U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x30U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x30U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x30U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x30U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x30U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x30U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x30U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x30U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x30U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x30U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x30U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x30U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x30U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x30U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x30U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x30U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x30U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x30U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x30U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x30U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2fU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2fU] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2fU] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc__176(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc__176\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x2fU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x2fU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x2fU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x2fU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc__49(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc__49\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x31U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x31U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x31U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x31U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x31U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x31U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x31U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x31U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x31U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x31U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x31U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x31U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x31U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x31U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x31U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x31U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x31U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x31U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x31U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x31U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x31U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x31U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x31U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x31U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x31U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x31U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x31U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x31U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x31U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x31U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x31U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x31U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x31U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x31U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x31U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x31U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x31U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x31U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x31U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x31U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x30U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x30U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x30U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc__177(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc__177\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x30U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x30U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x30U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x30U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc__50(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc__50\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x32U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x32U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x32U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x32U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x32U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x32U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x32U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x32U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x32U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x32U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x32U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x32U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x32U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x32U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x32U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x32U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x32U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x32U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x32U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x32U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x32U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x32U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x32U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x32U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x32U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x32U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x32U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x32U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x32U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x32U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x32U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x32U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x32U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x32U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x32U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x32U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x32U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x32U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x32U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x32U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x31U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x31U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x31U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc__178(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc__178\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x31U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x31U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x31U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x31U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc__51(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc__51\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x33U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x33U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x33U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x33U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x33U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x33U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x33U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x33U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x33U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x33U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x33U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x33U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x33U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x33U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x33U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x33U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x33U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x33U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x33U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x33U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x33U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x33U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x33U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x33U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x33U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x33U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x33U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x33U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x33U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x33U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x33U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x33U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x33U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x33U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x33U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x33U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x33U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x33U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x33U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x33U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x32U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x32U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x32U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc__179(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc__179\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x32U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x32U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x32U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x32U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc__52(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc__52\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x34U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x34U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x34U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x34U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x34U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x34U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x34U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x34U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x34U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x34U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x34U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x34U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x34U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x34U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x34U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x34U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x34U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x34U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x34U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x34U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x34U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x34U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x34U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x34U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x34U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x34U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x34U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x34U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x34U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x34U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x34U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x34U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x34U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x34U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x34U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x34U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x34U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x34U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x34U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x34U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x33U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x33U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x33U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc__180(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc__180\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x33U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x33U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x33U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x33U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc__53(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc__53\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x35U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x35U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x35U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x35U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x35U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x35U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x35U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x35U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x35U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x35U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x35U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x35U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x35U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x35U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x35U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x35U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x35U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x35U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x35U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x35U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x35U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x35U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x35U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x35U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x35U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x35U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x35U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x35U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x35U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x35U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x35U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x35U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x35U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x35U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x35U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x35U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x35U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x35U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x35U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x35U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x34U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x34U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x34U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc__181(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc__181\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x34U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x34U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x34U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x34U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__sout2 = ((0x7fU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x80U & (vlSelf->__PVT__src2 
                                        >> 0xeU)));
    vlSelf->__PVT__sout2 = ((0xfeU & (IData)(vlSelf->__PVT__sout2)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & vlSelf->__PVT__src2))));
    vlSelf->__PVT__sout2 = ((0xfdU & (IData)(vlSelf->__PVT__sout2)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 1U)));
    vlSelf->__PVT__sout2 = ((0xfbU & (IData)(vlSelf->__PVT__sout2)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 2U)));
    vlSelf->__PVT__sout2 = ((0xf7U & (IData)(vlSelf->__PVT__sout2)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & vlSelf->__PVT__src2)) 
                                     << 3U)));
    vlSelf->__PVT__sout2 = ((0xefU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 4U)));
    vlSelf->__PVT__sout2 = ((0xdfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x20U & (VL_REDXOR_32(
                                                     (0x38000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 5U)));
    vlSelf->__PVT__sout2 = ((0xbfU & (IData)(vlSelf->__PVT__sout2)) 
                            | (0x40U & (VL_REDXOR_32(
                                                     (0x1c0000U 
                                                      & vlSelf->__PVT__src2)) 
                                        << 6U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7eU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (1U & (((vlSelf->__PVT__src2 
                                              & (vlSelf->__PVT__src2 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & vlSelf->__PVT__src2))) 
                                            | (vlSelf->__PVT__src2 
                                               & (vlSelf->__PVT__src2 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout2 = ((0x7dU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout2 = ((0x7bU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout2 = ((0x77U & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->__PVT__src2))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout2 = ((0x6fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout2 = ((0x5fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x20U & ((((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x30000U 
                                                    == 
                                                    (0x30000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x28000U 
                                                   == 
                                                   (0x28000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout2 = ((0x3fU & (IData)(vlSelf->Walloc_33bits_cout2)) 
                                   | (0x40U & ((((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->__PVT__src2)) 
                                                 | (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->__PVT__src2))) 
                                                | (0x140000U 
                                                   == 
                                                   (0x140000U 
                                                    & vlSelf->__PVT__src2))) 
                                               << 6U)));
    vlSelf->__PVT__sout6 = ((2U & (IData)(vlSelf->__PVT__sout6)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src6)))));
    vlSelf->__PVT__sout6 = ((1U & (IData)(vlSelf->__PVT__sout6)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout6 = ((2U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src6) 
                                              & ((IData)(vlSelf->__PVT__src6) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            | ((IData)(vlSelf->__PVT__src6) 
                                               & ((IData)(vlSelf->__PVT__src6) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout6 = ((1U & (IData)(vlSelf->Walloc_33bits_cout6)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src6)))) 
                                            << 1U)));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & ((IData)(vlSelf->__PVT__src4) 
                                     >> 6U)));
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src4)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                     << 2U)));
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src4) 
                                              & ((IData)(vlSelf->__PVT__src4) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            | ((IData)(vlSelf->__PVT__src4) 
                                               & ((IData)(vlSelf->__PVT__src4) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src4)))) 
                                            << 2U)));
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc__54(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc__54\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x36U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x36U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x36U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x36U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x36U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x36U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x36U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x36U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x36U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x36U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x36U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x36U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x36U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x36U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x36U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x36U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x36U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x36U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x36U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x36U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x36U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x36U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x36U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x36U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x36U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x36U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x36U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x36U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x36U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x36U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x36U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x36U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x36U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x36U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x36U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x36U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x36U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x36U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x36U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x36U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
        vlSelf->__PVT__src3 = 0U;
    } else {
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x35U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x35U] << 4U) | (IData)(vlSelf->__PVT__sout4));
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x35U] << 8U) | (IData)(vlSelf->__PVT__sout2));
    }
    vlSelf->__PVT__sout7 = ((2U & ((IData)(vlSelf->__PVT__src7) 
                                   >> 2U)) | (1U & 
                                              VL_REDXOR_32(
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__src7)))));
    vlSelf->__PVT__sout5 = ((3U & (IData)(vlSelf->__PVT__sout5)) 
                            | (4U & ((IData)(vlSelf->__PVT__src5) 
                                     >> 4U)));
    vlSelf->__PVT__sout5 = ((6U & (IData)(vlSelf->__PVT__sout5)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src5)))));
    vlSelf->__PVT__sout5 = ((5U & (IData)(vlSelf->__PVT__sout5)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                     << 1U)));
    vlSelf->Walloc_33bits_cout5 = ((2U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src5) 
                                              & ((IData)(vlSelf->__PVT__src5) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            | ((IData)(vlSelf->__PVT__src5) 
                                               & ((IData)(vlSelf->__PVT__src5) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout5 = ((1U & (IData)(vlSelf->Walloc_33bits_cout5)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src5)))) 
                                            << 1U)));
    vlSelf->__PVT__sout3 = ((0x1eU & (IData)(vlSelf->__PVT__sout3)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout3 = ((0x1dU & (IData)(vlSelf->__PVT__sout3)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout3 = ((0x1bU & (IData)(vlSelf->__PVT__sout3)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
    vlSelf->__PVT__sout3 = ((0x17U & (IData)(vlSelf->__PVT__sout3)) 
                            | (8U & (VL_REDXOR_32((0xe00U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 3U)));
    vlSelf->__PVT__sout3 = ((0xfU & (IData)(vlSelf->__PVT__sout3)) 
                            | (0x10U & (VL_REDXOR_32(
                                                     (0x7000U 
                                                      & (IData)(vlSelf->__PVT__src3))) 
                                        << 4U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1eU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (1U & ((((IData)(vlSelf->__PVT__src3) 
                                              & ((IData)(vlSelf->__PVT__src3) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            | ((IData)(vlSelf->__PVT__src3) 
                                               & ((IData)(vlSelf->__PVT__src3) 
                                                  >> 2U)))));
    vlSelf->Walloc_33bits_cout3 = ((0x1dU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (2U & ((((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout3 = ((0x1bU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (4U & ((((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout3 = ((0x17U & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (8U & ((((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSelf->__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->__PVT__src3)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout3 = ((0xfU & (IData)(vlSelf->Walloc_33bits_cout3)) 
                                   | (0x10U & ((((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                                 | (0x6000U 
                                                    == 
                                                    (0x6000U 
                                                     & (IData)(vlSelf->__PVT__src3)))) 
                                                | (0x5000U 
                                                   == 
                                                   (0x5000U 
                                                    & (IData)(vlSelf->__PVT__src3)))) 
                                               << 4U)));
}
