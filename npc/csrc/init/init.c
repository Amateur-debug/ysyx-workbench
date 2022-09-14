#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_CPU.h"
#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"
#include "/home/cxy/ysyx-workbench/npc/include/common.h"
#include "/home/cxy/ysyx-workbench/npc/include/sdb.h"
#include "/home/cxy/ysyx-workbench/npc/include/difftest.h"

#define STR1(R) #R
#define STR2(R) STR1(R)
#define memory_size 128*1024*1024

uint32_t img[memory_size/4] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

long long  getFileSize(FILE *fp){
  long long size;
  //定义pos
  fpos_t pos;
  //获取文件指针，写入pos
  fgetpos(fp,&pos);
  //文件指针指向末尾
  fseek(fp,0,SEEK_END);
  //获取文件指针到文件头部的字节大小
  size = ftell(fp);
  //文件指针还原
  fsetpos(fp,&pos);
  return size;
}

void load_img(){
  FILE *p = fopen(STR2(IMG), "rb");
  int size = getFileSize(p);
  if(fread(img, size, 1, p) != 1){
     assert(0);
  }
  fclose(p);
}

void init_mem(){
#ifdef IMG    
  load_img();
#endif
  extern uint8_t pmem[memory_size];
  memcpy(pmem, img, sizeof(img));
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

#ifdef CONFIG_MTRACE
  init_mtrace();
#endif
}

void init_difftest(){
  extern uint64_t *cpu_gpr;
  extern uint64_t *cpu_pc;
  extern uint8_t pmem[memory_size];
  difftest_init();
  difftest_memcpy(0x80000000, pmem, sizeof(img), DIFFTEST_TO_REF);
  difftest_regcpy(cpu_gpr, cpu_pc, DIFFTEST_TO_REF);
}

