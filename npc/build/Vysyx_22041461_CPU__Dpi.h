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
    // DPI import at vsrc/ysyx_22041461_MEM.v:17:30
    extern void pmem_read(long long rMEM_EXE_in, long long* rdata);
    // DPI import at vsrc/ysyx_22041461_IF.v:12:30
    extern void pmem_read_pc(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22041461_MEM.v:19:30
    extern void pmem_write(long long wMEM_EXE_in, long long wdata, char wmask);
    // DPI import at vsrc/ysyx_22041461_MEM.v:21:30
    extern void set_difftest_next();
    // DPI import at vsrc/ysyx_22041461_WB.v:41:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ysyx_22041461_IF_reg.v:16:30
    extern void set_pc_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
