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
  while (1) {
    char buf[64] = {};
    if (NDL_PollEvent(buf, sizeof(buf))) {
      printf("111%s\n", buf);
      if(buf[0] == 'k' && buf[1] == 'd'){
        event->type = SDL_KEYDOWN;
      }
      else if(buf[0] == 'k' && buf[1] == 'u'){
        event->type = SDL_KEYUP;
      }
      int i = 0;
      char *_buf = buf;
      while(strcmp(keyname[i], _buf + 3) != 0){
        i++;
      }
      event->key.keysym.sym = i;
      printf("i = %d\n", i);
      return 1;
    }
  }
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
