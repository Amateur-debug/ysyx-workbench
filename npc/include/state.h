#ifndef __STATE_H__
#define __STATE_H__

#include <stdint.h>

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;

enum {NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT};

extern NPCState npc_state;
void set_npc_state(int state, uint32_t pc, int halt_ret);

#endif