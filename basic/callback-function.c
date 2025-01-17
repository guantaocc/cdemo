#include "stdio.h"

void print100(){
  for(int i = 0; i < 100; i++){
    if(i % 10 == 0) printf("\n");
    printf("%3d", i);
  }
}

// 函数指针作为参数
void callback(void (*something)()){
  something();
}

void slideChar(char *c){
  while(*c != '\0'){
    printf("%c", *c);
    c++;
  }
}

int main(){
  char *p = "hello";

  slideChar(p);

  return 0;
}