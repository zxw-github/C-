#include <stdio.h>

enum color
{
    red,   // 0
    green, // 1
    blue   // 2
};
enum sex
{
    male = 10,
    female
};
int main(void)
{
    enum color c = red;
    // enum color c = 0; //err

    printf("%zd\n", sizeof(c)); // 4
    printf("%d\n", red);        // 0
    printf("%d\n", green);      // 1
    printf("%d\n", blue);       // 2

    printf("%d\n", male);   // 10
    printf("%d\n", female); // 11
    return 0;
}
/*
枚举的优点：
1，增加代码的可读性和可维护性
2，和#define 相比由类型检查，更加严谨
3，防止命名污染（封装）
4，便与调试
5，使用方便，一次可以定义多个常量
*/
