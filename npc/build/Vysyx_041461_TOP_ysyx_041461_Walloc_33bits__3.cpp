// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP_ysyx_041461_Walloc_33bits.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc__160(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc__160\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x1fU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x1fU] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x1fU] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x1fU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc__33(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc__33\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x20U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x20U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x20U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc__161(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc__161\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x20U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x20U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x20U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x20U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc__34(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc__34\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x21U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x21U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x21U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc__162(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc__162\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x21U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x21U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x21U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x21U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc__35(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc__35\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x22U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x22U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x22U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc__163(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc__163\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x22U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x22U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x22U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x22U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc__36(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc__36\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x23U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x23U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x23U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc__164(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc__164\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x23U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x23U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x23U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x23U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc__37(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc__37\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x24U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x24U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x24U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc__165(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc__165\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x24U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x24U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x24U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x24U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc__38(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc__38\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x25U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x25U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x25U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc__166(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc__166\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x25U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x25U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x25U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x25U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc__39(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc__39\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x26U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x26U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x26U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc__167(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc__167\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x26U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x26U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x26U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x26U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc__40(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc__40\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x27U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x27U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x27U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc__168(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc__168\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x27U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x27U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x27U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x27U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc__41(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc__41\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x28U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x28U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x28U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc__169(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc__169\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x28U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x28U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x28U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x28U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc__42(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc__42\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x29U] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x29U] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x29U] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc__170(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc__170\n"); );
    // Body
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x29U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x29U] << 2U) | (IData)(vlSelf->__PVT__sout7));
    vlSelf->__PVT__sout4 = ((7U & (IData)(vlSelf->__PVT__sout4)) 
                            | (8U & (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                     [0x29U] >> 1U)));
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x29U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
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
}

VL_INLINE_OPT void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc__43(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___sequent__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc__43\n"); );
    // Body
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    if (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->__PVT__src3 = 0U;
        vlSelf->__PVT__src7 = 0U;
        vlSelf->__PVT__src5 = 0U;
    } else {
        vlSelf->__PVT__src3 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                [0x2aU] << 8U) | (IData)(vlSelf->__PVT__sout2));
        vlSelf->__PVT__src7 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                [0x2aU] << 2U) | (IData)(vlSelf->__PVT__sout6));
        vlSelf->__PVT__src5 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                [0x2aU] << 4U) | (IData)(vlSelf->__PVT__sout4));
    }
    vlSelf->__PVT__sout4 = ((0xeU & (IData)(vlSelf->__PVT__sout4)) 
                            | (1U & VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__PVT__src3)))));
    vlSelf->__PVT__sout4 = ((0xdU & (IData)(vlSelf->__PVT__sout4)) 
                            | (2U & (VL_REDXOR_32((0x38U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 1U)));
    vlSelf->__PVT__sout4 = ((0xbU & (IData)(vlSelf->__PVT__sout4)) 
                            | (4U & (VL_REDXOR_32((0x1c0U 
                                                   & (IData)(vlSelf->__PVT__src3))) 
                                     << 2U)));
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
    vlSelf->Walloc_33bits_cout4 = ((6U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((5U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
    vlSelf->Walloc_33bits_cout4 = ((3U & (IData)(vlSelf->Walloc_33bits_cout4)) 
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
}
