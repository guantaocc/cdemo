#include "stdio.h"

int main(){
  // 指针访问数组
  int arr[10] = {1, 2, 3, 4, 5, 6, 7};
  int* p = arr;
  printf("%p\n", p);
  return 0;
}