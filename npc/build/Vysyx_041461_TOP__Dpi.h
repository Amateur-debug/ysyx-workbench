// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_041461_WB.v:57:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_041461_WB.v:55:30
    extern void get_need_difftest(char a);
    // DPI import at vsrc/ysyx_041461_WB.v:56:30
    extern void get_skip(char a);
    // DPI import at vsrc/ysyx_041461_AXI_CROSSBAR.v:43:30
    extern void paddr_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_041461_AXI_CROSSBAR.v:44:30
    extern void paddr_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/ysyx_041461_WB.v:53:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ysyx_041461_WB.v:54:30
    extern void set_pc_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
