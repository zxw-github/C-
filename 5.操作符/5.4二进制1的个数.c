/* 5.4二进制1的个数.c - 求一个整数的二进制中1的个数*/
#include <stdio.h>

int number(int a);
int main(void)
{
    int a = 0;
    scanf("%d", &a);
    int ret = number(a);
    printf("%d\n", ret);

    return 0;
}
int number(int a)
{
    // 思想：让二进制位循环与1与（最后一个二进制位为1时得到1），然后再右移一位(最多移动31次)
    int count = 0;
    for (int i = 0; i < 31; i++)
    {
        if ((a & 1) == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}