#include <common.h>
#include <stdint.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i;
  for(i = 0; i < len; i ++){
    putch(*(char *)buf);
    buf++;
  }
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  if(len < 64){
    printf("%d\n", len);
  }
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if(ev.keycode == AM_KEY_NONE){
    return 0;
  }
  char out[256] = {"k"};
  if(ev.keydown == 1){
    strcat(out, "d ");
    strcat(out, keyname[ev.keycode]);
    strcat(out, "\n");
  }
  else if(ev.keydown == 0){
    strcat(out, "u ");
    strcat(out, keyname[ev.keycode]);
    strcat(out, "\n");
  }
  int i;
  for(i = 0; i < len; i++){
    *(char *)buf = out[i];
    buf++;
  }
  return i;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int i;
  i = snprintf(buf, len, "WIDTH:%d\nHEIGHT:%d", io_read(AM_GPU_CONFIG).width, io_read(AM_GPU_CONFIG).height);
  return i;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  int x, y, screen_w, screen_h, i;
  screen_w = io_read(AM_GPU_CONFIG).width;
  screen_h = io_read(AM_GPU_CONFIG).height;
  x = (offset / 4) % screen_w;
  y = (offset / 4) / screen_w;
  assert(y < screen_h);
  for(i = 0; i < len; i += 4){
    if(x < screen_w){
      io_write(AM_GPU_FBDRAW, x , y, (void *)buf, 1, 1, false);
    }
    else{
      x = 0;
      y++;
      if(y >= screen_h){
        break;
      }
      io_write(AM_GPU_FBDRAW, x , y, (void *)buf, 1, 1, false);
    }
    x++;
    buf = buf + 4;
  }
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
