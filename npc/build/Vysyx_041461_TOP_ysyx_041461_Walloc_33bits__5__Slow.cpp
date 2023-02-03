// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP_ysyx_041461_Walloc_33bits.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc__312(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc__312\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x37U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x37U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x37U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x37U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x37U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x37U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x37U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x37U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x37U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x37U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x37U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x37U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x37U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x37U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x37U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x37U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x37U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x37U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x37U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x37U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x37U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x37U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x37U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x37U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x37U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x37U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x37U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x37U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x37U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x37U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x37U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x37U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x37U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x37U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x37U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x37U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x37U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x37U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x37U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x37U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x36U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc__439(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc__439\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x36U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x36U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x36U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc__313(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc__313\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x38U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x38U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x38U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x38U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x38U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x38U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x38U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x38U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x38U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x38U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x38U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x38U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x38U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x38U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x38U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x38U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x38U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x38U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x38U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x38U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x38U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x38U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x38U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x38U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x38U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x38U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x38U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x38U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x38U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x38U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x38U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x38U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x38U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x38U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x38U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x38U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x38U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x38U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x38U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x38U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x37U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc__440(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc__440\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x37U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x37U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x37U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc__314(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc__314\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x39U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x39U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x39U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x39U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x39U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x39U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x39U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x39U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x39U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x39U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x39U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x39U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x39U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x39U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x39U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x39U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x39U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x39U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x39U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x39U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x39U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x39U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x39U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x39U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x39U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x39U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x39U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x39U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x39U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x39U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x39U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x39U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x39U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x39U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x39U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x39U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x39U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x39U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x39U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x39U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x38U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc__441(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc__441\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x38U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x38U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x38U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc__315(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc__315\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3aU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3aU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3aU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3aU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3aU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3aU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3aU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3aU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3aU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3aU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3aU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3aU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3aU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3aU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3aU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3aU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3aU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3aU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3aU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3aU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3aU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3aU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3aU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3aU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3aU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3aU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3aU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3aU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3aU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3aU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3aU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3aU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3aU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3aU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3aU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3aU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3aU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3aU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3aU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3aU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x39U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc__442(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc__442\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x39U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x39U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x39U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc__316(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc__316\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3bU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3bU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3bU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3bU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3bU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3bU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3bU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3bU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3bU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3bU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3bU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3bU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3bU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3bU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3bU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3bU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3bU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3bU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3bU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3bU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3bU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3bU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3bU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3bU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3bU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3bU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3bU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3bU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3bU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3bU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3bU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3bU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3bU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3bU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3bU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3bU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3bU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3bU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3bU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3bU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3aU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc__443(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc__443\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3aU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3aU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3aU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc__317(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc__317\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3cU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3cU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3cU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3cU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3cU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3cU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3cU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3cU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3cU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3cU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3cU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3cU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3cU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3cU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3cU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3cU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3cU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3cU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3cU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3cU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3cU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3cU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3cU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3cU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3cU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3cU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3cU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3cU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3cU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3cU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3cU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3cU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3cU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3cU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3cU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3cU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3cU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3cU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3cU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3cU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3bU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc__444(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc__444\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3bU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3bU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3bU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc__318(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc__318\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3dU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3dU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3dU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3dU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3dU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3dU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3dU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3dU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3dU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3dU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3dU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3dU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3dU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3dU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3dU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3dU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3dU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3dU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3dU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3dU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3dU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3dU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3dU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3dU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3dU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3dU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3dU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3dU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3dU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3dU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3dU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3dU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3dU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3dU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3dU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3dU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3dU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3dU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3dU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3dU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3cU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc__445(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc__445\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3cU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3cU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3cU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc__319(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc__319\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3eU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3eU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3eU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3eU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3eU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3eU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3eU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3eU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3eU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3eU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3eU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3eU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3eU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3eU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3eU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3eU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3eU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3eU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3eU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3eU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3eU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3eU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3eU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3eU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3eU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3eU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3eU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3eU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3eU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3eU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3eU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3eU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3eU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3eU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3eU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3eU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3eU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3eU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3eU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3eU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3dU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc__446(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc__446\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3dU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3dU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3dU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc__320(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc__320\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x3fU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3fU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3fU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3fU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3fU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3fU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3fU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3fU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3fU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x3fU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x3fU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x3fU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3fU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3fU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3fU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x3fU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3fU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3fU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x3fU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3fU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x3fU] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x3fU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3fU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3fU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x3fU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3fU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3fU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3fU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3fU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x3fU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x3fU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x3fU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x3fU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3fU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3fU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x3fU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x3fU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x3fU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x3fU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x3fU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3eU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc__447(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc__447\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3eU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3eU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3eU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc__321(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc__321\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x40U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x40U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x40U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x40U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x40U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x40U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x40U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x40U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x40U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x40U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x40U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x40U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x40U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x40U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x40U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x40U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x40U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x40U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x40U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x40U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x40U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x40U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x40U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x40U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x40U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x40U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x40U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x40U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x40U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x40U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x40U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x40U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x40U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x40U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x40U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x40U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x40U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x40U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x40U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x40U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x3fU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc__448(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc__448\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x3fU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x3fU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x3fU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc__322(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc__322\n"); );
    // Body
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
    vlSelf->__PVT__sout1 = ((0x7feU & (IData)(vlSelf->__PVT__sout1)) 
                            | (1U & (((IData)(vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                              [0x41U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x41U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x41U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x41U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x41U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x41U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x41U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x41U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x41U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x41U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x41U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x41U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x41U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x41U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x41U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x41U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x41U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x41U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x41U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x41U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x41U] 
                                                     >> 0x20U))) 
                                         << 0xaU)));
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
    vlSelf->Walloc_33bits_cout1 = ((0x7feU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (1U & ((((IData)(
                                                      vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x41U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x41U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x41U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x41U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x41U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x41U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x41U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x41U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x41U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x41U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x41U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x41U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x41U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x41U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x41U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x41U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x41U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x41U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x41U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x40U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc__449(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc__449\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x40U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x40U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x40U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
}
