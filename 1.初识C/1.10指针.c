#include <stdio.h>

int main(void)
{
    int a = 5;
    printf("&a=%p\n", &a); //%p 专门用来打印地址

    int *pa = &a;
    //* 说明pa是指针
    // int 说明pa指向的对象是int类型

    *pa = 10; // * 解引用操作符，通过pa中的地址，找到a
    printf("%d\n", a);

    char ch = 'W';
    char *pch = &ch;

    // 64位操作系统，地址为8个字节
    printf("%zd\n", sizeof(int *));
    printf("%lu\n", sizeof(int *));
    printf("%lu\n", sizeof(short *));
    printf("%lu\n", sizeof(char *));
    printf("%lu\n", sizeof(long *));
    printf("%lu\n", sizeof(long long *));
    printf("%lu\n", sizeof(float *));
    printf("%lu\n", sizeof(double *));
    return 0;
}