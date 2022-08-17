#ifndef __PMEM_H__
#define __PMEM_H__

extern "C" void pmem_read(long long raddr, long long *rdata);

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

#endif
