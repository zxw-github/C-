#include <stdio.h>

int main()
{
    char c = 1;
    printf("%lu\n", sizeof(c));  // 1
    printf("%lu\n", sizeof(-c)); // 4
    printf("%lu\n", sizeof(+c)); // 4
    printf("%lu\n", sizeof(!c)); // 4

    return 0;
}
// c本来是char型占一个字节，但是在参与运算时，由于达不到int型的长度，
// 进行整型提升，-c的类型属性就是int型占4个字节