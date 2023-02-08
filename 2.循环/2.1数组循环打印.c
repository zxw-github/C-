/* 2.1数组循环打印.c -- 打印数组*/
#include <stdio.h>

int main(void)
{
    int i = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    while (i < 10)
    {
        printf("arr[%d]=%2d\n", i, arr[i]);
        i++;
    }
    return 0;
}