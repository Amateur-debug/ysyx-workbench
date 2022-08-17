#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include <stdint.h>
#include "/home/cxy/ysyx-workbench/npc/include/state.h"

NPCState npc_state;

void set_npc_state(int state, uint32_t pc, int halt_ret){
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}

void check_exit_state(NPCState npc_state){
  if(npc_state.state == NPC_RUNNING){
    
  }
}

