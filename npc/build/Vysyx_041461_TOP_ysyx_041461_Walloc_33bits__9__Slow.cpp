// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP_ysyx_041461_Walloc_33bits.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc__356(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc__356\n"); );
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
                                              [0x63U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x63U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x63U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x63U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x63U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x63U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x63U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x63U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x63U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x63U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x63U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x63U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x63U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x63U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x63U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x63U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x63U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x63U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x63U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x63U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x63U] 
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
                                                      [0x63U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x63U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x63U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x63U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x63U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x63U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x63U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x63U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x63U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x63U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x63U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x63U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x63U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x63U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x63U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x63U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x63U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x63U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x63U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x62U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc__483(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc__483\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x62U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x62U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x62U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc__357(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc__357\n"); );
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
                                              [0x64U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x64U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x64U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x64U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x64U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x64U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x64U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x64U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x64U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x64U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x64U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x64U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x64U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x64U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x64U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x64U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x64U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x64U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x64U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x64U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x64U] 
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
                                                      [0x64U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x64U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x64U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x64U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x64U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x64U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x64U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x64U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x64U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x64U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x64U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x64U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x64U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x64U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x64U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x64U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x64U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x64U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x64U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x63U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc__484(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc__484\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x63U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x63U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x63U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc__358(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc__358\n"); );
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
                                              [0x65U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x65U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x65U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x65U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x65U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x65U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x65U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x65U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x65U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x65U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x65U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x65U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x65U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x65U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x65U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x65U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x65U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x65U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x65U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x65U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x65U] 
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
                                                      [0x65U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x65U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x65U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x65U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x65U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x65U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x65U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x65U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x65U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x65U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x65U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x65U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x65U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x65U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x65U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x65U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x65U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x65U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x65U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x64U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc__485(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc__485\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x64U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x64U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x64U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc__359(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc__359\n"); );
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
                                              [0x66U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x66U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x66U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x66U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x66U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x66U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x66U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x66U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x66U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x66U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x66U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x66U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x66U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x66U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x66U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x66U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x66U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x66U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x66U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x66U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x66U] 
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
                                                      [0x66U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x66U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x66U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x66U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x66U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x66U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x66U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x66U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x66U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x66U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x66U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x66U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x66U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x66U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x66U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x66U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x66U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x66U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x66U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x65U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc__486(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc__486\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x65U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x65U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x65U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc__360(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc__360\n"); );
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
                                              [0x67U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x67U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x67U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x67U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x67U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x67U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x67U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x67U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x67U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x67U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x67U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x67U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x67U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x67U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x67U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x67U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x67U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x67U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x67U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x67U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x67U] 
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
                                                      [0x67U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x67U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x67U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x67U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x67U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x67U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x67U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x67U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x67U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x67U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x67U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x67U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x67U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x67U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x67U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x67U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x67U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x67U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x67U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x66U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc__487(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc__487\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x66U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x66U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x66U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc__361(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc__361\n"); );
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
                                              [0x68U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x68U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x68U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x68U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x68U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x68U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x68U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x68U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x68U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x68U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x68U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x68U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x68U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x68U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x68U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x68U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x68U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x68U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x68U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x68U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x68U] 
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
                                                      [0x68U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x68U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x68U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x68U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x68U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x68U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x68U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x68U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x68U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x68U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x68U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x68U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x68U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x68U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x68U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x68U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x68U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x68U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x68U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x67U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc__488(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc__488\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x67U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x67U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x67U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc__362(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc__362\n"); );
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
                                              [0x69U]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x69U] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x69U] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x69U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x69U] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x69U] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x69U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x69U] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x69U] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x69U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x69U] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x69U] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x69U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x69U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x69U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x69U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x69U] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x69U] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x69U] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x69U] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x69U] 
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
                                                      [0x69U]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x69U] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x69U] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x69U]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x69U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x69U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x69U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x69U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x69U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x69U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x69U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x69U] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x69U] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x69U] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x69U] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x69U] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x69U] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x69U] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x69U] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x68U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc__489(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc__489\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x68U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x68U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x68U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc__363(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc__363\n"); );
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
                                              [0x6aU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6aU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6aU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6aU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6aU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6aU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6aU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6aU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6aU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6aU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6aU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6aU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6aU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6aU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6aU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6aU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6aU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6aU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6aU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6aU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6aU] 
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
                                                      [0x6aU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6aU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6aU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x6aU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6aU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6aU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6aU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6aU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6aU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6aU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6aU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6aU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6aU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6aU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6aU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6aU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6aU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6aU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6aU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x69U] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc__490(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc__490\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x69U] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x69U] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x69U] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc__364(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc__364\n"); );
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
                                              [0x6bU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6bU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6bU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6bU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6bU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6bU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6bU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6bU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6bU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6bU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6bU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6bU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6bU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6bU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6bU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6bU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6bU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6bU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6bU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6bU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6bU] 
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
                                                      [0x6bU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6bU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6bU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x6bU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6bU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6bU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6bU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6bU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6bU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6bU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6bU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6bU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6bU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6bU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6bU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6bU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6bU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6bU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6bU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x6aU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc__491(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc__491\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x6aU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x6aU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x6aU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc__365(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc__365\n"); );
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
                                              [0x6cU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6cU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6cU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6cU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6cU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6cU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6cU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6cU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6cU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6cU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6cU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6cU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6cU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6cU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6cU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6cU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6cU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6cU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6cU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6cU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6cU] 
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
                                                      [0x6cU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6cU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6cU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x6cU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6cU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6cU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6cU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6cU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6cU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6cU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6cU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6cU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6cU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6cU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6cU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6cU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6cU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6cU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6cU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x6bU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc__492(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc__492\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x6bU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x6bU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x6bU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc__366(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc__366\n"); );
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
                                              [0x6dU]) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6dU] 
                                                 >> 1U))) 
                                     ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6dU] 
                                                >> 2U)))));
    vlSelf->__PVT__sout1 = ((0x7fdU & (IData)(vlSelf->__PVT__sout1)) 
                            | (2U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6dU] 
                                                >> 3U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6dU] 
                                                  >> 4U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6dU] 
                                                 >> 5U))) 
                                     << 1U)));
    vlSelf->__PVT__sout1 = ((0x7fbU & (IData)(vlSelf->__PVT__sout1)) 
                            | (4U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6dU] 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6dU] 
                                                  >> 7U))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6dU] 
                                                 >> 8U))) 
                                     << 2U)));
    vlSelf->__PVT__sout1 = ((0x7f7U & (IData)(vlSelf->__PVT__sout1)) 
                            | (8U & ((((IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                [0x6dU] 
                                                >> 9U)) 
                                       ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                  [0x6dU] 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                 [0x6dU] 
                                                 >> 0xbU))) 
                                     << 3U)));
    vlSelf->__PVT__sout1 = ((0x7efU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x10U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6dU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0xdU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0xeU))) 
                                        << 4U)));
    vlSelf->__PVT__sout1 = ((0x7dfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x20U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6dU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0x10U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x11U))) 
                                        << 5U)));
    vlSelf->__PVT__sout1 = ((0x7bfU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x40U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6dU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0x13U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x14U))) 
                                        << 6U)));
    vlSelf->__PVT__sout1 = ((0x77fU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x80U & ((((IData)((
                                                   vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                   [0x6dU] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0x16U))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x17U))) 
                                        << 7U)));
    vlSelf->__PVT__sout1 = ((0x6ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x100U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6dU] 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0x1aU))) 
                                         << 8U)));
    vlSelf->__PVT__sout1 = ((0x5ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x200U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6dU] 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
                                                     >> 0x1dU))) 
                                         << 9U)));
    vlSelf->__PVT__sout1 = ((0x3ffU & (IData)(vlSelf->__PVT__sout1)) 
                            | (0x400U & ((((IData)(
                                                   (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0x6dU] 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0x6dU] 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0x6dU] 
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
                                                      [0x6dU]) 
                                              & (IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6dU] 
                                                         >> 1U))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6dU] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0x6dU]) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 2U))))));
    vlSelf->Walloc_33bits_cout1 = ((0x7fdU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (2U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6dU] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6dU] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 5U)))) 
                                            << 1U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7fbU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (4U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6dU] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6dU] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 8U)))) 
                                            << 2U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7f7U & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (8U & (((((IData)(
                                                       (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0x6dU] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0x6dU] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0x6dU] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 0xbU)))) 
                                            << 3U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7efU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x10U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 0xcU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0xdU))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0xeU)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0xcU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0xeU)))) 
                                               << 4U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7dfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x20U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 0xfU)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x10U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x10U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x11U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0xfU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x11U)))) 
                                               << 5U)));
    vlSelf->Walloc_33bits_cout1 = ((0x7bfU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x40U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 0x12U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x13U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x13U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x14U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0x12U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x14U)))) 
                                               << 6U)));
    vlSelf->Walloc_33bits_cout1 = ((0x77fU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x80U & (((((IData)(
                                                          (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0x6dU] 
                                                           >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x16U))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x16U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x17U)))) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0x15U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x17U)))) 
                                               << 7U)));
    vlSelf->Walloc_33bits_cout1 = ((0x6ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x100U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0x18U)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x19U))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x19U)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6dU] 
                                                                >> 0x1aU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x18U)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x1aU)))) 
                                                << 8U)));
    vlSelf->Walloc_33bits_cout1 = ((0x5ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x200U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0x1bU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x1cU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x1cU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6dU] 
                                                                >> 0x1dU)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x1bU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x1dU)))) 
                                                << 9U)));
    vlSelf->Walloc_33bits_cout1 = ((0x3ffU & (IData)(vlSelf->Walloc_33bits_cout1)) 
                                   | (0x400U & (((((IData)(
                                                           (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0x6dU] 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x1fU))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                              [0x6dU] 
                                                              >> 0x1fU)) 
                                                     & (IData)(
                                                               (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                                [0x6dU] 
                                                                >> 0x20U)))) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                             [0x6dU] 
                                                             >> 0x1eU)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                               [0x6dU] 
                                                               >> 0x20U)))) 
                                                << 0xaU)));
    vlSelf->__PVT__src8 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                            [0x6cU] << 2U) | (IData)(vlSelf->__PVT__sout7));
}

void Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc__493(Vysyx_041461_TOP_ysyx_041461_Walloc_33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_041461_TOP_ysyx_041461_Walloc_33bits___settle__TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc__493\n"); );
    // Body
    vlSelf->__PVT__src6 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                            [0x6cU] << 4U) | ((IData)(vlSelf->__PVT__sout5) 
                                              << 1U));
    vlSelf->__PVT__src4 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                            [0x6cU] << 5U) | (IData)(vlSelf->__PVT__sout3));
    vlSelf->__PVT__src2 = ((vlSymsp->TOP.ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                            [0x6cU] << 0xbU) | (IData)(vlSelf->__PVT__sout1));
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
