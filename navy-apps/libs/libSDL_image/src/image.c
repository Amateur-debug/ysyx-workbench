#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  FILE *fp = fopen(filename, "r");//打开文件。
  int size;
  fseek(fp, 0, SEEK_END);//定位文件指针到文件尾
  size = ftell(fp);//获取文件指针偏移量，即文件大小
  fseek(fp, 0, SEEK_SET);//定位文件指针到文件头
  void *buf = SDL_malloc(size);
  fread(buf, 1, size, fp);
  SDL_Surface *ret = STBIMG_LoadFromMemory(buf, size);
  fclose(fp);//关闭文件
  SDL_free(buf);//释放申请的内存
  return ret;
}

int IMG_isPNG(SDL_RWops *src) {
  assert(0);
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
