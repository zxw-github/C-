/* 1.7求两数最大值.c -- 求两个数中的较大值*/
#include <stdio.h>

int max(int a, int b);
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}