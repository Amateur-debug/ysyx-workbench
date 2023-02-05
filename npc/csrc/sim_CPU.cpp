#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_041461_TOP.h"

#include "svdpi.h"
#include "Vysyx_041461_TOP__Dpi.h"

#include "common.h"
#include "init.h"
#include "memory.h"
#include "sdb.h"
#include "state.h"
#include "cpu.h"
#include "difftest.h"

Vysyx_041461_TOP *top = new Vysyx_041461_TOP("TOP"); //调用VAccumulator.h里面的IO struct
VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句

int main(int argc, char **argv){
  Verilated::commandArgs(argc, argv); 
  #ifdef WAVE
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //打开vcd
  #endif

  set_npc_state(NPC_STOP, 0x80000000, 0);
  init_mem();
  init_sdb();
  init_device();
  init_npc_cpu();    //先执行一个周期，让寄存器的值能够被读出
  #ifdef DIFFTEST
    init_difftest();
  #endif
  sdb_mainloop();

  top->final();
  #ifdef WAVE
    tfp->close();
  #endif
  delete top;
 
  return 0;
}
