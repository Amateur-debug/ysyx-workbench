#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int draw_w, draw_h;

// 以毫秒为单位返回系统时间
uint32_t NDL_GetTicks() {
  struct timeval _tv;
  struct timeval *tv = &_tv;
  uint32_t ret;
  gettimeofday(tv, NULL);
  ret = tv->tv_sec * 1000 + tv->tv_usec / 1000;
  return ret;
}

// 读出一条事件信息, 将其写入`buf`中, 最长写入`len`字节
// 若读出了有效的事件, 函数返回1, 否则返回0
int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", O_RDONLY);
  if(read(fd, buf, len) > 0){
    close(fd);
    return 1;
  }
  else{
    close(fd);
    return 0;
  }
}

// 打开一张(*w) X (*h)的画布
// 如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
void NDL_OpenCanvas(int *w, int *h) {
  if(*w == 0 && *h == 0){
    *w = screen_w;
    *h = screen_h;
  }
  draw_w = *w;
  draw_h = *h;
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

// 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
// 图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  assert(x < draw_w);
  assert(y < draw_h);
  int fd = open("/dev/fb", O_WRONLY);
  int i;
  int offset;
  int len = w;
  int n = h;
  if(x + w > draw_w){
    len = draw_w - x;
  }
  if(y + n > draw_h){
    n = draw_h - y;
  }
  for(i = 0; i < n; i++){
    offset = (x + y * screen_w) * 4;
    lseek(fd, offset, SEEK_SET);
    write(fd, pixels, len * 4);
    pixels += len;
    y++;
  }
  close(fd);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  int fd = open("/proc/dispinfo", O_RDONLY);
  char _buf[64];
  char *buf = _buf;
  read(fd, buf, 64);
  while(*buf != ':'){
    buf++;
  }
  buf++;
  screen_w = atoi(buf);
  while(*buf != ':'){
    buf++;
  }
  buf++;
  screen_h = atoi(buf);
  close(fd);
  //将屏幕变为全黑
  uint32_t pixels[screen_w * screen_h];
  printf("aaa\n");
  int i;
  for(i = 0; i < 400 * 300; i++){
    printf("aaa\n");
    pixels[i] = 0;
  }
  printf("aaa\n");
  int w = 0;
  int h = 0;
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(pixels, 0, 0, w, h);
  return 0;
}

void NDL_Quit() {
}
