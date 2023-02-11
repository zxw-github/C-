// 使用1.static变量-1.c所定义的全局变量
#include <stdio.h>

int main(void)
{
    extern int a;
    extern int b;
    printf("%d\n", a + b);
}