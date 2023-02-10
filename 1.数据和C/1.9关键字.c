#include <stdio.h>

int main(void)
{
    register int a = 10; // 建议把a定义为寄存器变量

    unsigned int b = -2;
    printf("%u\n", b);
}