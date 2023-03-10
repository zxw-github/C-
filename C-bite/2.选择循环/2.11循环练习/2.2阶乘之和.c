/* 2.2阶乘之和.c - 实现1～n的阶乘之和*/
#include <stdio.h>

// 阶乘之和
void Factorial(int);
// 改进
void Factorial_up(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    Factorial(n);
    Factorial_up(n);

    return 0;
}
void Factorial(int n)
{
    int sum = 1, add = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = 1;
        for (int j = 1; j <= i; j++)
        {
            sum = sum * j;
        }
        add = add + sum;
    }
    printf("%d\n", add);
}
void Factorial_up(int n)
{
    int sum = 1, add = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
        add += sum;
    }
    printf("%d\n", add);
}