/* 3.6fibonacci.c - 实现斐波那契数列 */
#include <stdio.h>
#define Max 20

// 求出斐波那契数列
void Find_fib();
// 求的第n个斐波那契数
int Fib(int n);

int main(void)
{
    int num = 0;
    scanf("%d", &num);
    Find_fib();
    putchar('\n');
    int ret = Fib(num);
    printf("%d\n", ret);
    return 0;
}
void Find_fib()
{
    int arr[Max] = {1, 1};
    for (int i = 2; i < Max; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i < Max; i++)
    {
        printf("%10d", arr[i]);
    }
}
int Fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return Fib(n - 1) + Fib(n - 2);
    }
}