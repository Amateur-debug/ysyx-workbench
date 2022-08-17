#ifndef __PMEM_H__
#define __PMEM_H__

#include <stdint.h>

extern "C" void pmem_read(long long raddr, long long *rdata);

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

uint64_t direct_pmem_read(uint64_t addr, int len);

void direct_pmem_write(uint64_t addr, int len, uint64_t data); 

#endif
