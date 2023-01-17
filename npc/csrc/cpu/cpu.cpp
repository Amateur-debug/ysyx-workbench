#include <stdint.h>
#include "verilated_dpi.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_041461_TOP.h"
#include "svdpi.h"
#include "Vysyx_041461_TOP__Dpi.h"
#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include "/home/cxy/ysyx-workbench/npc/include/difftest.h"
#include "/home/cxy/ysyx-workbench/npc/include/common.h"

#define MAX_INST_TO_PRINT 10

extern Vysyx_041461_TOP *top; 
extern VerilatedVcdC* tfp;

static vluint64_t main_time = 0;  //initial 仿真时间
static bool g_print_step = false;

int skip = 0;

void ebreak(){      //结束指令
  extern uint64_t *cpu_gpr;
  extern uint64_t *cpu_pc;
  set_npc_state(NPC_END, *cpu_pc, cpu_gpr[10]);
}

char WB_valid;
void get_WB_valid(char get_WB_valid){
  WB_valid = get_WB_valid;
}

double sc_time_stamp(){
  return main_time;
}

void init_npc_cpu(){
  top->clk = 0;
  top->rst = 0;
  top->eval(); 
  #ifdef WAVE
    tfp->dump(main_time); //dump wave
  #endif
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 0;
  top->eval(); 
  #ifdef WAVE
    tfp->dump(main_time); //dump wave
  #endif
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 1;
  top->eval(); 
  #ifdef WAVE
    tfp->dump(main_time); //dump wave
  #endif
  main_time++; //推动仿真时间

  top->clk = !top->clk;
  top->rst = 0;
  top->eval(); 
  #ifdef WAVE
    tfp->dump(main_time); //dump wave
  #endif
  main_time++; //推动仿真时间
  
}

void exec_once(){
  //negedge
  top->clk = !top->clk;
  top->eval(); 
  #ifdef WAVE
    if(main_time > WAVE_time){
      tfp->dump(main_time); //dump wave
    }
  #endif
  main_time++; //推动仿真时间

  //posedge
  top->clk = !top->clk;
  top->eval(); 
  #ifdef WAVE
    if(main_time > WAVE_time){
      tfp->dump(main_time); //dump wave
    }
  #endif
  main_time++; //推动仿真时间
}

void device_update();

static void execute(uint64_t n){
  extern uint64_t *cpu_gpr;
  extern uint64_t *cpu_pc;
  for (;n > 0; n --){
    if(!Verilated::gotFinish()){
      #ifdef DIFFTEST
        if(WB_valid == 1){
          uint64_t pc = *cpu_pc;
          uint64_t next_pc = pc + 4;
          if(skip == 0){
            exec_once();
            device_update();
            difftest_exec(1);
            if(difftest_checkregs(cpu_gpr, pc) == 0){
              npc_state.state = NPC_ABORT;
              npc_state.halt_pc = pc;
            }
          }
          else {
            exec_once();
            device_update();
            difftest_regcpy(cpu_gpr, &next_pc, DIFFTEST_TO_REF);
            skip = 0;
          }
        }
        else {
          exec_once();
        }
      #else
        exec_once();
        device_update();
      #endif
      if(g_print_step){
        printf("excute at pc = 0x%016x\n", npc_state.halt_pc);
      }
    }
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
    case NPC_END: 
    extern uint64_t *cpu_gpr;
    extern uint64_t *cpu_pc;
    if(npc_state.halt_ret == 0){
      out = (char *)"HIT GOOD TRAP"; 
      difftest_exec(1);
    }
    else{
      out = (char *)"ABORT";
      difftest_exec(1);
    }
      printf("npc: %s at pc = 0x%016x\n", out, *cpu_pc); break;
    case NPC_ABORT: out = (char *)"ABORT"; 
      printf("npc: %s at pc = 0x%016x\n", out, *cpu_pc); break;
    default: out = (char *)"HIT BAD TRAP"; 
      printf("npc: %s at pc = 0x%016x\n", out, *cpu_pc); break;
  }
}
