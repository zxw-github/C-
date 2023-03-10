#include <stdio.h>

int is_prime(int n);
int main(void)
{
    // 打印100～200之间的素数
    int i;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        // 判断素数
        if (is_prime(i) == 1)
        {
            printf("%d  ", i);
            count++;
        }
    }
    printf("\ncount=%d\n", count);

    return 0;
}
int is_prime(int n)
{
    // 素数之能被1和自身整除
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}