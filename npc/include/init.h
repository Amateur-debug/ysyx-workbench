#ifndef __INIT_H__
#define __INIT_H__

#include "/home/cxy/ysyx-workbench/npc/include/common.h"

uint32_t img[memory_size/4] = {
    0x00000297,  // auipc t0,0
    0x0002b823,  // sd  zero,16(t0)
    0x0102b503,  // ld  a0,16(t0)
    0x00100073,  // ebreak (used as nemu_trap)
    0xdeadbeef,  // some data
};

void init_mem();

#endif
