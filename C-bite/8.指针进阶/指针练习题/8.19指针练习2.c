#include <stdio.h>

struct Test // 20字节
{
    int Num;
    char *PcName;
    short sDate;
    char ch[2];
    short sBa[4];
} *p;
// 假设p的值为0x10000000，如下表达式的值
int main(void)
{
    // 指针的类型决定指针的运算
    printf("%p\n", p + 0x1);                 // 偏移一个结构体的大小，0x10000014
    printf("%p\n", (unsigned long)p + 0x1);  // p被强制转换成长整型，0x10000001
    printf("%p\n", (unsigned int *)p + 0x1); // p被强制类型转换成无符号整型的指针，0x10000004
    return 0;
}