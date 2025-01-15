#include "stdio.h"
#include "assert.h"
#include "string.h"
#include "ctype.h"


int main(){
  char* str = "hello";
  // 追加字符串
  char dest[] = "world";
  strcat(dest, str);
  printf("strcatcc: %s\n", dest);

  // strcmp
  char* str1 = "hello";
  char* str2 = "world";
  printf("strcmp: %d\n", strcmp(str1, str2));

  // strncpy
  char* src3 = "hello";
  // 需要四个字节，最后一个字节是\0
  char dest1111[4] = "";
  strncpy(dest1111, src3, 3);
  printf("strncpy: %s\n", dest1111);

  // strstr
  char* str4 = "hello world";
  char* sub = "world";
  printf("strstr: %s\n", strstr(str4, sub));

  // strtok 拆分字符串
  char str5[] = "hello world";
  char* delim = " ";
  char* token = strtok(str5, delim);
  while(token){
    printf("strtok: %s\n", token);
    token = strtok(NULL, delim);
  }

  // strerror
  printf("strerror: %s\n", strerror(2));

  // typec.h
  printf("isdigit: %d\n", islower('1'));

  // putchar
  putchar('a');
  return 0;
}