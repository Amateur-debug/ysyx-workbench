#include <stdio.h>
#include <stdint.h>
#include <NDL.h>

int main(){
  NDL_Init(0);
  uint32_t time;
  uint32_t time_now = NDL_GetTicks();
  int sec = 1;
  int i = 0;
  while (1) {
    time = NDL_GetTicks();
    while((time - time_now) / 1000 >= sec){
      if(i == 0){
        printf("timer-test\n");
        sec ++;
        i = 1;
      }
      else{
        i = 0;
      }
    }
  }
  NDL_Quit();
  return 0;
}
