#include "stdio.h"
#include "stdlib.h"
#include "errno.h"
#include "string.h"

int main(){
  // malloc
  int *p = (int *)malloc(sizeof(int) * 10);
  if(p == NULL){
    printf("%s\n", strerror(errno));
  }
  else {
    int i = 0;
    for(i = 0; i < 10; i++){
      *(p+i) = i;
    }
    for(i = 0; i < 10; i++){
      printf("%d\n", *(p+i));
    }
  }
  // free
  free(p);
  p = NULL;
  return 0;
}