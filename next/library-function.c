// 库函数
#include <stdio.h>

// swap传地址调用
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Strlen(char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

// 递归
int Strlen2(char *str){
    if(*str == '\0'){
        return 0;
    }
    // 指针移动到下一个字符
    return 1 + Strlen2(str + 1);
}

int main(){
    int a = 1;
    int b = 2;
    // 传地址调用，交换地址则取值交换
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    char* str = "hello";
    printf("len=%d\n", Strlen(str));
    return 0;
}