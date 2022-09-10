#include <stdio.h>
#include <sys/time.h>

int main(){
  struct timeval *tv;
  int sec = 1;
  int i = 0;
  while (1) {
    gettimeofday(tv, NULL);
    while(tv->tv_sec + tv->tv_usec/1000000 >= sec){
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
  return 0;
}
