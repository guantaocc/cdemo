#include  "stdio.h"
#include  "assert.h"
#include  "string.h"
#include  "ctype.h"
#include  "memory.h"


int main(){
  // memcpy
  char src[] = "hello";
  char dest[10] = "";
  memcpy(dest, src, strlen(src));
  printf("memcpy: %s\n", dest);

  int arr1[] = {1, 2, 3, 4, 5};
  printf("sizeof : %d\n", sizeof(arr1));

  // memcmp 比较内存块的结果
  char src1[] = "hello1";
  char src2[] = "world";
  printf("memcmp: %d\n", memcmp(src1, src2, 3));

  // memset
  char dest1[10] = "";
  memset(dest1, 'a', 5);
  printf("memset: %s\n", dest1);
  return 0;
}