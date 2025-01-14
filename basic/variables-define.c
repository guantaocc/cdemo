// 变量和常量
#include <stdio.h>

// 全局变量
int global_var = 1;

int main(){
  // 变量
  int a = 1;
  printf("a: %d\n", a);
  // 常量
  const int b = 2;
  printf("b: %d\n", b);

  char string[] = "开始输入";

  // 局部优先
  int global_var = 2;
  printf("global_var: %d\n", global_var);

  printf("%s\n", string);
  int operand1, operand2;
  scanf("%d %d", &operand1, &operand2);
  printf("operand1: %d, operand2: %d\n", operand1, operand2);

  return 0;
}