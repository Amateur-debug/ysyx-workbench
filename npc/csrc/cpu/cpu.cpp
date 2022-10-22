#include<stdint.h>
#include "verilated_dpi.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_CPU.h"
#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"
#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include "/home/cxy/ysyx-workbench/npc/include/difftest.h"

#define MAX_MAIN_TIME 100
#define RST_END_TIME 1  //rst拉高时间
#define MAX_INST_TO_PRINT 10
//#define DIFFTEST

extern Vysyx_22041461_CPU *top; 
extern VerilatedVcdC* tfp;

static vluint64_t main_time = 0;  //initial 仿真时间
static bool g_print_step = false;

int is_difftest_this = 1;
int is_difftest_next = 1;


void ebreak(){      //结束指令
  printf("aaaa\n");
  set_npc_state(NPC_END, top->pc, 1);
}

void invalid_inst(){  
  npc_state.state = NPC_ABORT;
  printf("pc = 0x%016lx  指令没有实现\n", top->pc);
  printf("inst = 0x%x\n", top->inst);
}

double sc_time_stamp(){
  return main_time;
}

void init_npc_cpu(){
  top->clk = 1;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 0;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间
  
}

void exec_once(){
  npc_state.halt_pc = top->pc;
  //negedge
  top->clk = !top->clk;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间

  //posedge
  top->clk = !top->clk;
  top->eval(); 
  tfp->dump(main_time); //dump wave
  main_time++; //推动仿真时间
}

void device_update();

static void execute(uint64_t n){
  extern uint64_t *cpu_gpr;
  extern uint64_t *cpu_pc;
  for (;n > 0; n --){
    if(!Verilated::gotFinish()){
      exec_once();
      device_update();
      if(g_print_step){
        printf("excute at pc = 0x%016x\n", npc_state.halt_pc);
      }
    }
    #ifdef DIFFTEST
      extern int is_difftest_this;
      extern int is_difftest_next;
      if(is_difftest_this){
        difftest_exec(1);
      }
      else{
        difftest_regcpy(cpu_gpr, cpu_pc, DIFFTEST_TO_REF);
      }
      if(!difftest_checkregs(cpu_gpr, top->pc)){
        npc_state.state = NPC_ABORT;
      }
      is_difftest_this = is_difftest_next;
    #endif
    if(npc_state.state != NPC_RUNNING){
      break;
    }
  }
}

void cpu_exec(uint64_t n){
  g_print_step = (n < MAX_INST_TO_PRINT);

  switch (npc_state.state){
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      printf("halt_pc = 0x%x halt_ret = %d\n", npc_state.halt_pc, npc_state.halt_ret);
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  execute(n);
  
  char *out = NULL;
  switch(npc_state.state){
    case NPC_RUNNING: out = (char *)"stop"; npc_state.state = NPC_STOP; break;
    case NPC_END: difftest_exec(1); out = (char *)"HIT GOOD TRAP"; 
      printf("npc: %s at pc = 0x%016x\n", out, npc_state.halt_pc ); break;
    case NPC_ABORT: out = (char *)"ABORT"; 
      printf("npc: %s at pc = 0x%016x\n", out, npc_state.halt_pc); break;
    default: out = (char *)"HIT BAD TRAP"; 
      printf("npc: %s at pc = 0x%016x\n", out, npc_state.halt_pc); break;
  }
}
