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
    // int (*pf)(int, int) = add;  // add == pf
    int a = add(3, 5);
    int b = pf(3, 5);
    int c = (*pf)(3, 5); // 三者相同，*pf == pf,*没有起作用
    printf("%d,%d,%d\n", a, b, c);
    /*
    printf("%p\n", &add);
    printf("%p\n", add); // 两个地址相同
    */
    // 使用函数指针调用函数
    int ret = (*pf)(3, 5); // 不可以写成*pf(3,5) - 因为()运算符的优先级高于*运算符。会优先计算pf(3,5),然后计算*pf(3,5)
    // int ret = *pf(3,5) //错误
    //  printf("%d\n", ret);
    printf("%d\n", (*pf)(4, 2));

    void (*pt)(char *) = &test;
    return 0;
}
// 数组名 ！= &数组名
// 函数名 == & 函数名

// (*(void (*)())0)();
/*
1，void (*)() -- 这是一个函数指针类型，没有参数，返回值为void
2，(void (*)())0 -- 将int型的0强制转换为函数指针类型，将0当作是void (*)()这样一个类型的函数的地址
3，*(void (*)())0 -- 地址为0的函数的地址解引用（找到地址为0处的函数），函数的调用
4，(*(void (*)())0)() -- 地址为0的函数进行调用（调用0地址处的函数），没有参数
*/

// void (*signal(int, void (*)(int)))(int);
/*
1，void (*)(int)  -- 这是一个函数指针类型，参数是int型，返回值为void
2，signal(int, void (*)(int))-- signal是函数名
3，剩下的void (*)(int) -- 是一个函数指针类型,参数是int型，返回值为void
4，void (*signal(int, void (*)(int)))(int) -- signal(int, void (*)(int))的返回值做为void (*)(int)的函数指针
*/

// 对void (*signal(int, void (*)(int)))(int);进行简化
typedef void (*pfun_t)(int); // 对void (*)(int) 重命名为pfun_t
                             //  pfun_t signal(int, pfun_t)