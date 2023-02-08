/* 1.2数据类型.c -- 几种c语言的数据类型 */
#include <stdio.h>

int main(void)
{
    char c = 'A';      // 字符类型
    printf("%c\n", c); //%c--打印单个字符

    int i = 10;       // 整型
    short int j = 5;  // 短整型
    short k = 8;      // short int 一般写作short
    long int n = 100; // 长整型
    long nn = 100;    // long int 一般写作long
    long long int m = 200;
    long long mm = 200;
    printf("%d  %d  %d  %ld  %ld  %lld  %lld\n", i, j, k, n, nn, mm, mm); //%d--打印整数

    float f = 32.3;            // 浮点型
    double ff = 9.5;           // 双精度浮点型
    printf("%f  %f\n", f, ff); //%f--打印浮点数

    return 0;
}
/*
1，%d，%在，%f这些成为转换说明，作用是占位
2，字符，整型，浮点型称为标准数据类型
*/