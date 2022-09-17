#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char _buf[64];
  char *buf = _buf;
  while(NDL_PollEvent(buf, 20) != 1);
  printf("%s\n", buf);
  if(_buf[0] == 'k' && buf[1] == 'd'){
    event->type = SDL_KEYDOWN;
  }
  else if(_buf[0] == 'k' && buf[1] == 'u'){
    event->type = SDL_KEYUP;
  }
  int i = 0;
  while(strcmp(keyname[i], buf + 3) != 0){
    i++;
  }
  event->key.keysym.sym = i;
  printf("i = %d\n", i);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
