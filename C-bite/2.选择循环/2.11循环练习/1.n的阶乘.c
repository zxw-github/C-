/* 1.n的阶乘.c - 实现n的阶乘*/
#include <stdio.h>

// n的阶乘函数
int Factorial(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("Factorial(n)=%d\n", Factorial(n));
    return 0;
}
int Factorial(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}