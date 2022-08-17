#include "/home/cxy/ysyx-workbench/npc/include/state.h"
#include <stdint.h>

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;

enum {NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT};

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

