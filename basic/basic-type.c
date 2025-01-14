// 每种类型定义
// 1. 基本类型
#include <stdio.h>

int main(){
  char c = 'a';
  short short_num = 1;
  int int_num = 1;
  long long_num = 1;
  long long long_long_num = 1;
  float float_num = 1.0;
  double double_num = 1.0;
  long double long_double_num = 1.0;
  printf("char: %c\n", c);
  printf("short: %d\n", short_num);
  printf("int: %d\n", int_num);
  printf("long: %ld\n", long_num);
  printf("long long: %lld\n", long_long_num);
  printf("float: %f\n", float_num);
  printf("double: %f\n", double_num);
  printf("long double: %Lf\n", long_double_num);
  return 0;
}