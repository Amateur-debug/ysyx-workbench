#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_CPU.h"

#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"

#include "/home/cxy/ysyx-workbench/npc/include/common.h"
#include "/home/cxy/ysyx-workbench/npc/include/init.h"
#include "/home/cxy/ysyx-workbench/npc/include/pmem.h"
#include "/home/cxy/ysyx-workbench/npc/include/sdb.h"
#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include "/home/cxy/ysyx-workbench/npc/include/cpu.h"

Vysyx_22041461_CPU *top = new Vysyx_22041461_CPU("CPU"); //调用VAccumulator.h里面的IO struct
VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句

void ebreak(){
  extern Vysyx_22041461_CPU *top; 
  set_npc_state(NPC_END, top->pc, 1);
}

int main(int argc, char **argv){
  Verilated::commandArgs(argc, argv); 
  Verilated::traceEverOn(true); //导出vcd波形需要加此语句
  top->trace(tfp, 0);   
  tfp->open("wave.vcd"); //打开vcd
  top->clk = 1;
  top->rst = 0;
  top->pc  = 0x80000000;

  init_mem();
  init_sdb();
  exec_once();      //先执行一个周期，让寄存器的值能够被读出
  init_difftest();

  sdb_mainloop();

  top->final();
  tfp->close();
  delete top;
 
  return 0;
}
