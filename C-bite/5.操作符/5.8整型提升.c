#include <stdio.h>

/*
C的整型算数运算：表达式中的字符和短整型操作数在使用之前被转化为普通整型（int）- 整型提升
如，char和short在运算时会先转化为int型，再进行运算，结果直接截断
*/
void int_up();
void test();
void test_1();
int main(void)
{
    int_up();
    // test();
    test_1();
    return 0;
}
void int_up()
{
    char a = 3;
    char c = 127;
    char d = a + c;
    printf("%d\n", d);
}
void test()
{
    // 0xb6 =1011 0110B
    char a = 0xb6;
    short b = 0xb600;
    int c = 0xb60000;
    if (a == 0xb6)
        printf("a\n");
    if (0xb600 == b)
        printf("b\n");
    if (0xb60000 == c) // 只打印c
        printf("c\n");
}
void test_1()
{
    char c = 1;
    printf("%u\n", sizeof(c));
}
/*
注意：整型提升是按照变量的数据类型的符号位来提升的
如：char ch =-1; 8位比特位是：11111111
整型提升的结果是：11111111111111111111111111111111

char ch=1,8比特位是：00000001
整型提升的结果是：00000000000000000000000000000001
*/