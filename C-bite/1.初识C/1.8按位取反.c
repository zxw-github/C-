#include <stdio.h>

int main(void)
{
    // ～按二进制位取反
    short a = 0;
    short b = ~a;
    printf("%d\n", b);
}
/*
a=0,二进制为：0000 0000 0000 0000
按位取反：    1111 1111 1111 1111（补码）
原码：       1000 0000 0000 0001=-1
*/