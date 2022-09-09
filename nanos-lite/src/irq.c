#include <common.h>
#include <am.h>

void do_syscall(Context *c); 

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: printf("handled event ID = %d\n", e.event); c->mepc += 4; break;
    case EVENT_SYSCALL: printf("handled event ID = %d\n", e.event); do_syscall(c); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
