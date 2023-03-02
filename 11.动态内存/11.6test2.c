#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *GetMemory1(void)
{
    char str[] = "hello world"; // 栈区，函数返回就会回收
    return str;
}
void test1(void)
{
    char *p = NULL;
    p = GetMemory1(); // 地址传递
    printf("%s\n", p);
    // free(p);
    // p = NULL;
}
int main(void)
{
    // test();
    test1();
    return 0;
}