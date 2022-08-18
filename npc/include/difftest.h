#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <stddef.h>
#include <stdint.h>

typedef uint32_t paddr_t;

void difftest_memcpy(paddr_t addr, uint8_t *buf, size_t n, bool direction);

void difftest_regcpy(uint64_t *dut, bool direction);

void difftest_exec(uint64_t n);

bool difftest_checkregs(uint64_t *dut);

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#endif