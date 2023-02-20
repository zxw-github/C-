#include <stdio.h>

// 除法
void division(void);
// 取余
void reminder(void);
int main(void)
{
    // division();

    reminder();

    return 0;
}
void division(void)
{
    int a = 6 / 5;
    printf("%d\n", a); // 1

    float b = 6 / 5;
    printf("%f\n", b); // 1.000000

    float c = 6.0 / 5;
    printf("%f\n", c); // 1.200000

    float d = 6 / 5.0;
    printf("%f\n", d); // 1.200000

    int e = 6.0 / 5;
    printf("%d\n", e); // 1
}
void reminder(void)
{
    // 取余两端的操作数必须为整数
    int a = 7 % 3;
    printf("%d\n", a);

    // int b=7.3%4;  //错误
}
