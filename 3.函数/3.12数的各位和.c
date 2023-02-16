/* 3.12数的各位和.c - 求一个数的各位的和 */
#include <stdio.h>

int every_add(int);
int main(void)
{
    int num = 1739;
    int sum = every_add(num);
    printf("%d\n", sum);
    return 0;
}
int every_add(int n)
{
    if (n > 9)
    {
        return n % 10 + every_add(n / 10);
    }
    else
    {
        return n;
    }
}