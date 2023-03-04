#include <stdio.h>

#define M(x) printf("the vale of " #x " is %d\n", x)
#define N(x, format) printf("the value of " #x " is " format "\n", x)
// # -- 只能在宏中使用，不会将宏的参数替换，而是将参数直接替换成对应的字符串

#define CAT(x, y, z) x##y##z
// ## --将位于两边的符号合并成一个符号

void test()
{
    int a = 10, b = 20, c = 30;
    M(a);
    M(b);
    M(c);
    float f = 3.2f;
    N(a, "%d");
    N(f, "%f");
}
int main()
{
    int postgraduate = 380;
    printf("%d\n", CAT(post, grad, uate));
    return 0;
}