// 字符串
#include <stdio.h>

int main() {
   char string[] = "a,b,c";
   // 必须使用单引号
   char string2[] = {'a', 'b', 'c'};
   printf("%s\n%s\n", string, string2);
   return 0;
}