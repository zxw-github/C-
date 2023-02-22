#include <stdio.h>

// 指针类型的意义
// 指着的类型决定可以访问的连续空间的大小
int main(void)
{
    int a = 0x11223344;

    // int *pa = &a;
    // *pa = 0; //a=0

    char *pa = &a;
    *pa = 0;
    printf("%d\n", a); // a=0x11223300

    return 0;
}