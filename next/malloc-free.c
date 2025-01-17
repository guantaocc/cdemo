#include "stdio.h"
#include "stdlib.h"
#include "errno.h"
#include "string.h"

int main(){
  // 动态内存分配
  printf("%d\n", sizeof(int));
  int *p = malloc(sizeof(int));
  if(!p){
    printf("malloc failed: %s\n", strerror(errno));
  } else {
    for(int i = 0; i < 10; i++){
      *(p+i) = i;
      printf("malloc success %d\n", *(p+i));
    }
  }
  return 0;
}