#include "stdio.h"

// string.h库模拟实现

// strlen 返回字符串长度  O(n)
size_t strlen(const char *str){
    size_t len = 0;
    // \0是字符串结束符
    while(str[len]){
        len++;
    }
    return len;
}

int main(){

}