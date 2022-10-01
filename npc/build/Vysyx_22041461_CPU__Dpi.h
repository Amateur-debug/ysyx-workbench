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
    // DPI import at vsrc/ysyx_22041461_CU.v:44:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22041461_CU.v:45:30
    extern void invalid_inst();
    // DPI import at vsrc/ysyx_22041461_MEM.v:21:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22041461_MEM.v:23:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/ysyx_22041461_MEM.v:25:30
    extern void set_difftest_next();
    // DPI import at vsrc/ysyx_22041461_REGS.v:21:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ysyx_22041461_PC.v:14:30
    extern void set_pc_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
