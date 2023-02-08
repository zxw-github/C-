/* 1.3sizeof运算符.c -- sizeof运算符的学习 */
#include <stdio.h>

int main(void)
{
    printf("sizeof(char)=%zd\n", sizeof(char));
    printf("sizeof(int)=%zd\n", sizeof(int));
    printf("sizeof(short)=%zd\n", sizeof(short));
    printf("sizeof(long)=%zd\n", sizeof(long));
    printf("sizeof(long long)=%zd\n", sizeof(long long));
    printf("sizeof(float)=%zd\n", sizeof(float));
    printf("sizeof(double)=%zd\n", sizeof(double));
    return 0;
}
/*
1，sizeof是运算符，不是关键字
2，sizeof返回的单位是字节
3，使用%zd或者%lu转换说明
*/
/*
1，由于机器的差异，不同数据类型所占空间的大小由于机器的差异而不同
2，C语言规定，short占的空间不多余int所占的空间
3，long所占的空间不少于int所占的空间
4，long long至少占8个字节
*/