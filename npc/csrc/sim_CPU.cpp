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
#include "/home/cxy/ysyx-workbench/npc/include/state.h"

double sc_time_stamp(){
  return main_time;
}

void ebreak(){
  main_time = MAX_MAIN_TIME - 1;
}

int main(int argc, char **argv){
  Verilated::commandArgs(argc, argv); 
  Verilated::traceEverOn(true); //导出vcd波形需要加此语句
  VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
  Vysyx_22041461_CPU *top = new Vysyx_22041461_CPU("CPU"); //调用VAccumulator.h里面的IO struct

  init_mem();
  init_sim();
  
  



  top->final();
  tfp->close();
  delete top;
 
  return 0;
}
