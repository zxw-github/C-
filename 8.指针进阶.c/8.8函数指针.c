#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
void test(char *p)
{
}
int main(void)
{
    // 函数指针 - 存放函数地址的指针
    //&函数名 - 取到的是函数的地址

    int (*pf)(int, int) = &add; // pf就是一个函数指针变量
    /*
    printf("%p\n", &add);
    printf("%p\n", add); // 两个地址相同
    */
    // 使用函数指针调用函数
    int ret = (*pf)(3, 5); // 不可以写成*pf(3,5) - 因为()运算符的优先级高于*运算符。会优先计算pf(3,5),然后计算*pf(3,5)
    // printf("%d\n", ret);
    printf("%d\n", (*pf)(4, 2));

    void (*pt)(char *) = &test;
    return 0;
}
// 数组名 ！= &数组名
// 函数名 == & 函数名