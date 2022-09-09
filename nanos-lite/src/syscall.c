#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_yield: yield(); c->GPRx = 0; break;
    case SYS_exit: halt(0); break;

    case SYS_write: 
    if(a[1] == 1 || a[1] == 2){
      int i;
      for(i = 0; i < a[3]; i ++){
        putch(*(char *)a[2]);
      }
      c->GPRx = i;
    }
    else{
      c->GPRx = -1;
    }
    break;
    
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
