#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void GetMemory(char *str)
// // str只是p的一份临时拷贝，
// {
//     str = (char *)malloc(100); // 函数返回后，没有free内存泄漏
// }
// void test(void)
// {
//     char *p = NULL;
//     GetMemory(p);             // 值传递
//     strcpy(p, "hello world"); // p依然是NULL
//     printf("%s\n", p);
// }
// 方法1
char *GetMemory(char *str)
// str只是p的一份临时拷贝，
{
    str = (char *)malloc(100); // 函数返回后，没有free内存泄漏
    return str;
}
void test(void)
{
    char *p = NULL;
    p = GetMemory(p);         // 值传递
    strcpy(p, "hello world"); // p依然是NULL
    printf("%s\n", p);
    // printf(p);
    // 释放
    free(p);
    p = NULL;
}
// 方法2
void GetMemory1(char **str)
{
    *str = (char *)malloc(100);
}
void test1(void)
{
    char *p = NULL;
    GetMemory1(&p); // 地址传递
    strcpy(p, "hello world");
    printf("%s\n", p);
    // printf(p);
    // 释放
    free(p);
    p = NULL;
}
int main(void)
{
    // test();
    test1();
    return 0;
}
