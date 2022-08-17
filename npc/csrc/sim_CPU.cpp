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

#define MAX_MAIN_TIME 100
#define RST_END_TIME 1  //rst拉高时间
#define MAX_INST_TO_PRINT 10

static vluint64_t main_time = 0;  //initial 仿真时间
static bool g_print_step = false;

double sc_time_stamp(){
  return main_time;
}

void ebreak(){
  main_time = MAX_MAIN_TIME - 1;
}

static void exec_once(){

  npc_state.pc = top->pc;
  //negedge
  if (main_time > RST_END_TIME){
    top->rst = 1;
  }
  top->clk = !top->clk;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  //posedge
  if (main_time > RST_END_TIME){
    top->rst = 1;
  }
  top->clk = !top->clk;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间
}

static void execute(uint64_t n){
  for (;n > 0; n --) {
    if(!Verilated::gotFinish()){
      exec_once();
    }
    if (npc_state.state != NPC_RUNNING){
      break;
    }
  }
}

void cpu_exec(uint64_t n){
  g_print_step = (n < MAX_INST_TO_PRINT);

  switch (npc_state.state){
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  execute(n);
  
  char *out = NULL;
  switch(npc_state.state){
    case NPC_RUNNING: out = "stop"; npc_state.state = NPC_STOP; break;
    case NPC_END: out = "HIT GOOD TRAP"; break;
    case NPC_ABORT: out = "ABORT"; break;
    default: out = "HIT BAD TRAP"; break;
  }
  printf("npc: %s at pc = 0x%016lx", out, top->pc);
}

int main(int argc, char **argv){
  Verilated::commandArgs(argc, argv); 
  Verilated::traceEverOn(true); //导出vcd波形需要加此语句

  VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句

  Vysyx_22041461_CPU *top = new Vysyx_22041461_CPU("CPU"); //调用VAccumulator.h里面的IO struct

  top->trace(tfp, 0);   
  tfp->open("wave.vcd"); //打开vcd
  init_mem();
  top->clk = 1;
  top->rst = 0;
  top->pc  = 0x80000000;
  while (sc_time_stamp() < MAX_MAIN_TIME && !Verilated::gotFinish()) { //控制仿真时间
    top->clk = !top->clk; 
    if (main_time > 1) {
      top->rst = 1;
    }
    top->eval();
	  printf("clk = %d, rst = %d, flag = %d\n", top->clk, top->rst, top->flag);
	  tfp->dump(main_time); //dump wave
    main_time++; //推动仿真时间
    if(npc_state.state != NPC_RUNNING){
      break;
    }
  }


  top->final();
  tfp->close();
  delete top;
 
  return 0;
}
