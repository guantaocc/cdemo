// 指针
#include "stdio.h"

int main(){
  // 普通指针
  int a = 10; // 4个字节，这里取出第一个字节的地址

  // 使用指针变量存储指针的值
  int* p = &a;

  // 0x0061FF18 
  printf("%p\n", p);

  printf("%d\n", &p);
  return 0;
}