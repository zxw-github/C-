/* 2.3奇数.c - 输出1-100之间的奇数 */
#include <stdio.h>

void odd(void);
int main(void)
{
    odd();
    return 0;
}
void odd(void)
{
    int i = 0;
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            printf("%3d", i);
        }
        i++;
    }
    putchar('\n');
}