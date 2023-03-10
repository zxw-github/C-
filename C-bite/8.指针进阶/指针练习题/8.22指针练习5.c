#include <stdio.h>

int main(void)
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}