/* 3.10乘法口诀.c - 打印乘法口诀表 */
#include <stdio.h>

void Mult_table(int);
int main(void)
{
    int row = 0;
    scanf("%d", &row);
    Mult_table(row);

    return 0;
}
void Mult_table(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d*%-2d=%-3d ", j, i, i * j);
        }
        putchar('\n');
    }
}
