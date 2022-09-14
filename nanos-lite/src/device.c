#include <common.h>

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
  size_t ret = 0;
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  char _out[len];
  char *out = _out;
  printf("out = %s\n", out);
  if(ev.keycode == AM_KEY_NONE){
    return 0;
  }
  if(ev.keydown == 1){
    out = "kd ";
    strcat(out, keyname[ev.keycode]);
    strcat(out, "\n");
    ret = strlen(out) + 1;
  }
  else if(ev.keydown == 0){
    out = "ku ";
    strcat(out, keyname[ev.keycode]);
    strcat(out, "\n");
    ret = strlen(out) + 1;
  }
  strcpy(buf, out);
  return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
