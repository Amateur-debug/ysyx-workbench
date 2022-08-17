#ifndef __SDB_H__
#define __SDB_H__

#include <stdint.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char experence[40];
  uint64_t num;
  struct watchpoint *next;
} WP;

#endif
