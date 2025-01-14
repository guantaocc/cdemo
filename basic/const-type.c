#include "stdio.h"
#include "string.h"

enum Weekday {SUN, MON, TUE, WED, THU, FRI, SAT};

// 定义宏
#define ADD(a, b)  ((a + b))

int main(){
  // 字面常量
  3.14;
  1000;

  // 常变量
  const PI = 3.14f;

  #define MAX 1000;

  // 枚举常量
  printf("%d\n", SUN);
  printf("%d\n", MON);
  printf("%d\n", TUE);

  char string2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  printf("%s\n", string2);

  printf("%d\n", strlen("abcdef"));
  printf("%d\n", strlen("c:\windows\328\t1"));

  return 0;
}