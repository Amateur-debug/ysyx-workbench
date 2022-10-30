#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"
#include "/home/cxy/ysyx-workbench/npc/include/common.h"
#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include "/home/cxy/ysyx-workbench/npc/include/timer.h"

#define memory_size 128*1024*1024

#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_I8042_DATA_MMIO 0xa0000060
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_FB_ADDR 0xa1000000

uint8_t pmem[memory_size] = {};

extern int is_difftest_this;
extern int is_difftest_next;

void set_difftest_next(){
  is_difftest_next = 1;
  return;
}

uint8_t *guest_to_host(uint64_t paddr){ 
  return pmem + paddr - 0x80000000; 
}

extern "C" inline uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}

extern "C" inline void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
}

uint64_t mmio_read(uint32_t addr, int len);
void mmio_write(uint32_t addr, int len, uint64_t data);

extern "C" void pmem_read_pc(long long raddr, long long *rdata){
  if(raddr >= 0x80000000 && raddr < 0x80000000 + 128*1024*1024){
    *rdata = host_read(guest_to_host(raddr), 4);
  }
  else{
    printf("read越界pc为: 0x%016llx\n", raddr);
    npc_state.state = NPC_ABORT;
  }
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  if(raddr == CONFIG_RTC_MMIO || raddr == CONFIG_RTC_MMIO + 4){
    *rdata = mmio_read(raddr, 4);
    is_difftest_next = 0;
    return;
  }
  else if(raddr >= CONFIG_RTC_MMIO && raddr < CONFIG_RTC_MMIO + 16){
    *rdata = 0;
    is_difftest_next = 0;
    return;
  }
  if(raddr >= CONFIG_I8042_DATA_MMIO && raddr < CONFIG_I8042_DATA_MMIO + 4){
    *rdata = mmio_read(raddr, 4);
    is_difftest_next = 0;
    return;
  }
  else if(raddr >= CONFIG_I8042_DATA_MMIO + 4 && raddr < CONFIG_I8042_DATA_MMIO + 4 + 8){
    *rdata = 0;
    is_difftest_next = 0;
    return;
  }
  if(raddr >= CONFIG_VGA_CTL_MMIO && raddr < CONFIG_VGA_CTL_MMIO + 8){
    *rdata = mmio_read(raddr & ~0x7ull, 8);
    is_difftest_next = 0;
    return;
  }
  else if(raddr >= CONFIG_VGA_CTL_MMIO + 8 && raddr < CONFIG_VGA_CTL_MMIO + 8 + 8){
    *rdata = 0;
    is_difftest_next = 0;
    return;
  }
  if(raddr >= CONFIG_FB_ADDR && raddr < CONFIG_FB_ADDR + 300 * 400 * 4){
    *rdata = mmio_read(raddr & ~0x7ull, 8);
    is_difftest_next = 0;
    return;
  } 
  else if(raddr >= CONFIG_FB_ADDR && raddr < CONFIG_FB_ADDR + 300 * 400 * 4 + 8){
    *rdata = 0;
    is_difftest_next = 0;
    return;
  } 

  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`

  if(raddr >= 0x80000000 && raddr < 0x80000000 + 128*1024*1024){
    *rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
    is_difftest_next = 1;
  }
  else{
    printf("read越界地址为: 0x%016llx\n", raddr);
    npc_state.state = NPC_ABORT;
    *rdata = 0;
    is_difftest_next = 1;
  }
}



extern "C" void pmem_write(long long waddr, long long wdata, char wmask){

  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变

  int i;
  if((waddr >= CONFIG_VGA_CTL_MMIO && waddr < CONFIG_VGA_CTL_MMIO + 8 + 8) ||
  (waddr >= CONFIG_FB_ADDR && waddr < CONFIG_FB_ADDR + 300 * 400 * 4 + 8) ||
  (waddr >= CONFIG_SERIAL_MMIO && waddr < CONFIG_SERIAL_MMIO + 8 + 8)){
    for(i = 0; i < 8; i++){
      if(((wmask >> i) & 0x1u) == 1){
        mmio_write((waddr & ~0x7ull) + i, 1, wdata);
      }
      wdata = wdata >> 8;
    }
    is_difftest_this = 0;
    is_difftest_next = 1;
    return;
  }

  if(waddr >= 0x80000000 && waddr < 0x80000000 + 128*1024*1024){
    for(i = 0; i < 8; i++){
      if((wmask >> i) & 1 == 1){
        host_write(guest_to_host((waddr & ~0x7ull) + i), 1, wdata);
      }
      wdata = wdata >> 8;
    }
    is_difftest_next = 1;
  }
  else{
    printf("write越界地址为: 0x%016llx\n", waddr);
    npc_state.state = NPC_ABORT;
    is_difftest_next = 1;
  }
}

uint64_t direct_pmem_read(uint64_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

void direct_pmem_write(uint64_t addr, int len, uint64_t data) {
  host_write(guest_to_host(addr), len, data);
}