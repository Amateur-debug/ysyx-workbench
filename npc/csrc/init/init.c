#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <dlfcn.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_041461_TOP.h"
#include "svdpi.h"
#include "Vysyx_041461_TOP__Dpi.h"
#include "common.h"
#include "sdb.h"
#include "difftest.h"

#define STR1(R) #R
#define STR2(R) STR1(R)
#define memory_size 128*1024*1024

void init_map();
void init_serial();
void init_timer();
void init_vga();
void init_i8042();
void init_disk();

void (*difftest_memcpy)(paddr_t addr, uint8_t *buf, size_t n, bool direction);

void (*difftest_regcpy)(uint64_t *dut, uint64_t *dut_pc, bool direction);

void (*difftest_exec)(uint64_t n);

bool (*difftest_checkregs)(uint64_t *dut, uint64_t dut_pc);

void (*difftest_init)();

void* handle; 


uint32_t img[memory_size/4] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as npc_trap)
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
  printf("img_size = %d\n", size);
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

#ifdef DIFFTEST
  void init_difftest(){
    extern uint64_t *cpu_gpr;
    extern uint64_t *cpu_pc;
    extern uint8_t pmem[memory_size];
    printf("%s\n", STR2(DIFFTEST_LIB));
    handle = dlopen(STR2(DIFFTEST_LIB), RTLD_LAZY);
    difftest_regcpy = (void (*)(uint64_t *dut, uint64_t *dut_pc, bool direction))dlsym(handle, "difftest_regcpy");
    difftest_memcpy = (void (*)(paddr_t addr, uint8_t *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
    difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
    difftest_checkregs = (bool (*)(uint64_t *dut, uint64_t dut_pc))dlsym(handle, "difftest_checkregs");
    difftest_init = (void (*)())dlsym(handle, "difftest_init");
    difftest_init();
    difftest_memcpy(0x80000000, (uint8_t *)img, sizeof(img), DIFFTEST_TO_REF);
    difftest_regcpy(cpu_gpr, cpu_pc, DIFFTEST_TO_REF);
  }
#endif

void init_device() {
  init_map();
  init_serial();
  init_timer();
  init_vga();
  init_i8042();
} 