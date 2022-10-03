#include <am.h>
#include "/home/cxy/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h"

#define KEYDOWN_MASK 0x8000
#define KBD_ADDR   0xa0000060

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kbd_value = inl(KBD_ADDR);
  kbd->keydown = (kbd_value & KEYDOWN_MASK) ? true : false;
  kbd->keycode = kbd_value & ~KEYDOWN_MASK;
}
