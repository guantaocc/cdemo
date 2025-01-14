// 关键字
#include "stdio.h"

typedef unsigned int uint_32;

// static全局变量
static int a = 10;

// 一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用
// 一个全局被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用

int main(){
  unsigned int a = 10;
  printf("%d\n", a);
  uint_32 b = 10;
  printf("%d\n", b);
  printf("%d\n", sizeof(uint_32));
  printf("%d\n", sizeof(unsigned int));
  return 0;
}