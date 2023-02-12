#ifndef __TRACE_H__
#define __TRACE_H__

#include <stdint.h>

#define MAX_FUC_NUM 9000

typedef struct{
  char name[30];
  uint64_t addr;
  uint64_t size;
} _ELF_function;

#endif