#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,
#define NR_EV 32  //事件队列池，最多存储32个事件

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t keystates[83] = {0};

typedef struct event{
  SDL_Event ev;
  struct event *next;
} EV;  

static EV ev_queue[NR_EV] = {}; 
static EV *head = NULL, *rear = NULL;
static int ev_used = 0;

void init_ev_queue() {
  int i;
  for (i = 0; i < NR_EV; i ++) {
    //环形链表
    ev_queue[i].next = (i == NR_EV - 1 ? ev_queue : &ev_queue[i + 1]);
  }
  head = ev_queue;
  rear = ev_queue;
  ev_used = 0;
}

void SDL_PumpEvents(){
  assert(ev_used < NR_EV);
  char buf[64] = {0};
  while(NDL_PollEvent(buf, sizeof(buf)) == 1){
    SDL_Event ev;
    if(buf[0] == 'k' && buf[1] == 'd'){
      ev.type = SDL_KEYDOWN;
    }
    else if(buf[0] == 'k' && buf[1] == 'u'){
      ev.type = SDL_KEYUP;
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
    ev.key.keysym.sym = i;
    if(ev.type == SDL_KEYDOWN){
      keystates[i] = 1;
    }
    else if(ev.type == SDL_KEYUP){
      keystates[i] = 0;
    }
    if(ev_used == 0){
      head->ev = ev;
      ev_used++;
    }
    else{
      rear->next->ev = ev;
      rear = rear->next;
      ev_used++;
    }
  }
}

void free_ev(){
  if(ev_used == 0){
    return;
  }
  if(ev_used == 1){
    ev_used--;
  }
  head = head->next;
  ev_used--;
}

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  printf("SDL_PollEvent\n");
  SDL_PumpEvents();
  if(ev_used > 0){
    if(ev == NULL){
      //donothing
    }
    else{
      *ev = head->ev;
      free_ev();
    }
    return 1;
  }
  else{
    return 0;
  }
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("SDL_WaitEvent\n");
  while(ev_used == 0){
    SDL_PumpEvents();
  }
  if(event == NULL){
    //donothing
  }
  else{
    *event = head->ev;
    free_ev();
  }
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
  printf("keystates[54] = %d\n", keystates[54]);
  return keystates;
}
