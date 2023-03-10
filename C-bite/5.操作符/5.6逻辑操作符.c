#include <stdio.h>

// 逻辑与 - &&
void Logic_Add(void);
// 逻辑或 - ||
void Logic_Or(void);
// 练习题
//&& 练习
void test_1();
void test_2();
//|| 练习
void test_3();
int main(void)
{
    Logic_Add();
    Logic_Or();
    test_1();
    test_2();
    test_3();
    return 0;
}
void Logic_Add(void)
{
    int a = 0;
    int b = 3;
    if (a && b) // 同真才真
    {
        printf("hha\n");
    }
}
void Logic_Or(void)
{
    int a = 0;
    int b = 3;
    if (a || b) // 同假才假
    {
        printf("hha\n");
    }
}
void test_1()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;                          // 在运算时，由于a++先使用a，为假，此时&&后面的表达式不会再进行计算
    printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d); // a=1,b=2,c=3,d=4
    printf("i=%d\n", i);                            // i=0
}
void test_2()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = ++a && ++b && d++;
    printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d); // a=1,b=3,c=3,d=5
    printf("i=%d\n", i);                            // i=1
}
void test_3()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ || ++b || d++;                          // a++||++b为真，此时不用再计算后面的d++，因为不管d++是否为真，整个表达式都为真
    printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d); // a=1,b=3,c=3,d=4
    printf("i=%d\n", i);                            // i=1
}
// 在逻辑与（&&）和逻辑或（||）的复合表达式中，从左向右计算表达式，当计算到不管后面的值是否为真，都不会影响最终的结果时，后面的表达式不会再计算