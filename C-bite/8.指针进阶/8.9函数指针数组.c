#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x + y;
}
int main(void)
{
    int (*pf)(int, int) = add;
    int (*pd)(int, int) = sub;

    int (*parr[2])(int, int) = {add, sub}; // parr就是函数指针数组，可以存放同类型的函数指针
    return 0;
}