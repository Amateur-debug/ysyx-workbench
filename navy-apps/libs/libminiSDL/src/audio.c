#include <NDL.h>
#include <SDL.h>

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  //printf("SDL_OpenAudio\n");
  return 0;
}

void SDL_CloseAudio() {
  //printf("SDL_CloseAudio\n");
}

void SDL_PauseAudio(int pause_on) {
  //printf("SDL_PauseAudio\n");
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
  //printf("SDL_MixAudio\n");
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
  //printf("SDL_LoadWAV\n");
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
  //printf("SDL_FreeWAV\n");
}

void SDL_LockAudio() {
  //printf("SDL_LockAudio\n");
}

void SDL_UnlockAudio() {
  //printf("SDL_UnlockAudio\n");
}
