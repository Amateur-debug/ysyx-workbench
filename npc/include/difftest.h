#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <dlfcn.h>

typedef uint32_t paddr_t;

extern "C" void (*difftest_memcpy)(paddr_t addr, uint8_t *buf, size_t n, bool direction);

extern "C" void (*difftest_regcpy)(uint64_t *dut, uint64_t *dut_pc, bool direction);

extern "C" void (*difftest_exec)(uint64_t n);

extern "C" bool (*difftest_checkregs)(uint64_t *dut, uint64_t dut_pc);

extern "C" void (*difftest_init)();

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#endif
