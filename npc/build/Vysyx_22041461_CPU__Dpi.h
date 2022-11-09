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
    // DPI import at vsrc/ysyx_22041461_ID.v:29:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22041461_ID.v:30:30
    extern void invalid_inst();
    // DPI import at vsrc/ysyx_22041461_ICACHE.v:13:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22041461_MEM.v:22:30
    extern void pmem_write(long long waddr, long long wdata, char AXI_wmask);
    // DPI import at vsrc/ysyx_22041461_WB.v:41:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ysyx_22041461_IF_reg.v:14:30
    extern void set_pc_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
