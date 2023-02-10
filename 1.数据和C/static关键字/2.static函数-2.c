// 使用2.static函数-1.c所定义的函数
#include <stdio.h>

// 要使用函数，必须先声明。外部函数要用extern
extern int add(int, int);
int main(void)
{
    int a = 10;
    int b = 3;
    int sum = add(a, b);
    printf("sum=%d\n", sum);
    return 0;
}