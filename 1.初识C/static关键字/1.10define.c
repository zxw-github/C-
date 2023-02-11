#include <stdio.h>

// define 定义字符常量
#define MAX 100

// define 定义宏--带参数
#define MAx(x, y) x > y ? x : y

int Max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    int a = 3;
    int b = 5;
    // 函数实现两数最大值
    int max = Max(a, b);
    printf("max=%d\n", max);

    // 宏的方式实现两数最大值
    // 宏的方式是将MAx(a, b)替换为a > b ? a : b
    max = MAx(a, b);
    printf("max=%d\n", max);

    return 0;
}