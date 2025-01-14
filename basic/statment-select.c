// 条件控制
#include "stdio.h"


int main(){
  char c = 'a';

  // 条件
  if(c == 'a'){
    printf("c is a\n");
  }else{  
    printf("c is not a\n");
  }

  // 循环
  int i = 0;
  while(i < 10){
    printf("%d\n", i);
    i++;
  }

  // switch
  switch(c){
    case 'a':
      printf("c is a\n");
      break;
    case 'b':
      printf("c is b\n");
      break;
    default:
      printf("c is not a or b\n");
  }

}