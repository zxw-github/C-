#include <stdio.h>

int fun()
{
    static int count = 1;
    return ++count;
}
void test()
{
    int answer;
    answer = fun() - fun() * fun(); // 2-3*4=-10
    // 由于fun函数调用的顺序不知，结果不可控
    printf("%d\n", answer);
}
void test_1()
{
    int i = 1;
    int ret = (++i) + (++i) + (++i); // 2+3+4=9
    printf("%d\n", ret);
}
int main(void)
{
    test_1();

    return 0;
}