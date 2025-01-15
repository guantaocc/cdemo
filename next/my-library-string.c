#include "stdio.h"
#include "assert.h"

// string.h库模拟实现

// strlen 返回字符串长度  O(n)
// 可以使用尾指针 - 头指针的方式来优化
size_t strlen(const char *str){
    size_t len = 0;
    // \0是字符串结束符
    while(str[len]){
        len++;
    }
    return len;
}

char* my_strcpy(char *dest, const char *src){
    assert(dest != NULL);
    assert(src != NULL);
    char *ret = dest;
    while((*dest++ = *src++)){};
    return ret;
}

int main(){
    char* str = "hello";
    printf("strlen: %d\n", strlen(str));

    char dest[strlen(str)];
    my_strcpy(dest, str);
    printf("strcpy: %s\n%d\n", dest, sizeof(dest));

    return 0;
}