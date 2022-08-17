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
    // DPI import at vsrc/ysyx_22041461_CU.v:36:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22041461_MEM.v:21:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22041461_MEM.v:23:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);

#ifdef __cplusplus
}
#endif
