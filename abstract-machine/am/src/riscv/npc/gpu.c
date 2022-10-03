#include <am.h>
#include "/home/cxy/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h"

#define VGACTL_ADDR   0xa0000100
#define FB_ADDR       0xa1000000

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR + 2), .height = inw(VGACTL_ADDR),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *pixels = ctl->pixels;
  int i, j, x, y, w, h;
  x = ctl->x;
  y = ctl->y;
  w = ctl->w;
  h = ctl->h;
  uint64_t addr;
  uint32_t data;
  for(j = 0; j < h; j++){
    addr = FB_ADDR + x * 4 + (y + j) * inw(VGACTL_ADDR + 2) * 4;
    for(i = 0; i < w; i++){
      data = *(pixels + i + j * w);
      outl(addr, data);
      addr += 4;
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
