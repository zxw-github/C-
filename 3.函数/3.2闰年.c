#include <stdio.h>

// 判断闰年
int is_leap_year(int);
int main(void)
{
    // 打印1000～2000之间的闰年
    int i;
    int count = 0;
    for (i = 1000; i <= 2000; i++)
    {
        // 判断闰年
        if (is_leap_year(i) == 1)
        {
            printf("%d  ", i);
            count++;
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}