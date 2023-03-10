#include <stdio.h>

int main(void)
{
    int a = 6;
    int b = 3;
    int c = 1;
    // 逗号表达式 - 从左向右依次计算，最后一个表达式的结果是整个表达式的结果
    int d = (c = 8, a = c + 2, b = a - 9, c = a + b); // d=11
    //       c=8    a=10       b=1        c=11
    printf("%d\n", d);
    return 0;
}