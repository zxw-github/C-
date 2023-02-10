#include <stdio.h>

void test(void);
int main(void)
{
    int i = 0;
    while (i < 5)
    {
        test();
        i++;
    }
    return 0;
}
void test()
{
    static int a = 0;
    a++;
    printf("a=%d\n", a);
}
// static 作用于局部变量时，变长局部变量的生命周期，在整个程序的执行期间都有效。本质上是将局部变量的空间放在静态区，而非栈区
// static 修饰全局变量，使其只能在自己所在的文件内有效（该变了变量的链接属性）
// static 修饰函数，该变了函数的链接属性