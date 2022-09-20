#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t keystates[83] = {0};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  printf("SDL_PollEvent\n");
  if(ev == NULL){
    return 1;
  }
  char buf[64] = {0};
  if(NDL_PollEvent(buf, sizeof(buf)) == 1){
    if(buf[0] == 'k' && buf[1] == 'd'){
      ev->type = SDL_KEYDOWN;
    }
    else if(buf[0] == 'k' && buf[1] == 'u'){
      ev->type = SDL_KEYUP;
    }
    int i = 0;
    while(buf[i] != '\n'){
      i++;
    }
    buf[i] = '\0';
    i = 0;
    while(strcmp(keyname[i], buf + 3) != 0){
      i++;
    }
    ev->key.keysym.sym = i;
    if(ev->type == SDL_KEYDOWN){
      keystates[i] = 1;
    }
    else if(ev->type == SDL_KEYUP){
      keystates[i] = 0;
    }
    printf("keystates[%d] = %d\n", i, keystates[i]);
    printf("%s\n", keyname[i]);
    return 1;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("SDL_WaitEvent\n");
  char buf[64] = {};
  while(NDL_PollEvent(buf, sizeof(buf)) != 1){} 
  if(buf[0] == 'k' && buf[1] == 'd'){
    event->type = SDL_KEYDOWN;
  }
  else if(buf[0] == 'k' && buf[1] == 'u'){
    event->type = SDL_KEYUP;
  }
  int i = 0;
  while(buf[i] != '\n'){
    i++;
  }
  buf[i] = '\0';
  i = 0;
  while(strcmp(keyname[i], buf + 3) != 0){
    i++;
  }
  event->key.keysym.sym = i;
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("SDL_GetKeyState\n");
  if(numkeys != NULL){
    *numkeys = 83;
  }
  return keystates;
}
