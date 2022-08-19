/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, uint8_t *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_DUT){
    memcpy(buf + addr - 0x80000000, guest_to_host(addr), n);
  }
  else if(direction == DIFFTEST_TO_REF){
    memcpy(guest_to_host(addr), buf + addr - 0x80000000, n);
  }
}

void difftest_regcpy(uint64_t *dut, bool direction) {
  int i;
  if(direction == DIFFTEST_TO_DUT){
    for(i = 0; i < 32; i++){
      dut[i] = cpu.gpr[i];
    }
  }
  else if(direction == DIFFTEST_TO_REF){
    for(i = 0; i < 32; i++){
      cpu.gpr[i] = dut[i];
    }
  }
}

bool difftest_checkregs(uint64_t *dut){
  int i;
  extern CPU_state cpu;
  for(i = 0; i < 32; i++){
    if(dut[i] != cpu.gpr[i]){
      return false;
    }
    else return true;
  }
  return true;
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
