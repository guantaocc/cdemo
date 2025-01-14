#include "stdio.h"

int main(){
  int arr1[10];

  // 必须指定数量
  char arr4[3] = { 'a', 1, 'c', '\0'};
  
  printf("arr4[0]=%d\n", arr4[1]);

  // 求取数组的个数

  char arr5[] = "abc";

  int len = sizeof(arr5) / sizeof(arr5[0]);

  printf("len=%d\n", len);

  // strlen 不包含\0 
  printf("strlen%d\n", strlen(arr5));

  // 数组名并不能接收整个数组的值
  // arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // &arr 代表整个数组的首地址

  return 0;
}