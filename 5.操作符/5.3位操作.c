#include <stdio.h>

// 与 - &
void Add(void);
// 或 - ｜
void Or(void);
// 异或 - ^
void Xor(void);
void exchange(void);
int main(void)
{
    Add();
    Or();
    Xor();
    exchange();
    return 0;
}
void Add(void)
{
    // 按位与&,同真才真，一假则假
    int a = 5, b = 3;
    int c = a & b; // 5=0101B,3=0011B,5&3=0001B=1
    printf("%d\n", c);
}
void Or(void)
{
    // 按位或｜，同假才假，一真则真
    int a = 5, b = 3;
    int c = a | b; // 5=0101B,3=0011B,5|3=0111B=7
    printf("%d\n", c);
}
void Xor(void)
{
    // 异或^,同0异1
    int a = 5, b = 3;
    int c = a ^ b; // 5=0101B,3=0011B,5^3=0110B=6
    printf("%d\n", c);

    int d = 4;
    printf("%d\n", d ^ d); // 0
    printf("%d\n", 0 ^ d); // d
}
void exchange(void)
{
    int a = 5, b = 3;
    // 数值太大会溢出
    // a = a + b; // a=8
    // b = a - b; // b=5
    // a = a - b; // a=3
    // 不实用辅助空间交换a，b
    a = a ^ b;
    b = a ^ b; // b=(a^b)^b=a^b^b=a^0=a;
    a = a ^ b; // a=a^b^a=0^b=b
    printf("%d,%d\n", a, b);
}