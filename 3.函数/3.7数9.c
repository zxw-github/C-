/* 3.7数9.c - 1~100内9的个数 */
#include <stdio.h>

int main(void)
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 9)
        {
            count++;
        }
        if (i / 10 == 9)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}