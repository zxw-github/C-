#include <stdio.h>
#include <stdlib.h>
// 动态内存申请的常见错误
// 1，对空指针的解引用操作
// 2，越界访问
// 3，使用free释放非动态申请的空间
// 4，使用free释放动态申请的空间的一部分
// 5，使用free重复释放同一块动态申请的空间
// 6，动态申请的空间忘记释放
void test1()
{
    // 对空指针的解引用操作
    int *p = (int *)malloc(1000000000000000 * sizeof(int)); // 空间肯呢个开辟失败，返回NULL
    // 对malloc的返回值要做判断
    //  if (p == NULL)
    //  {
    //      printf("申请失败\n");
    //      return;
    //  }
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
}
void test2()
{
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        printf("申请失败\n");
        return;
    }
    for (int i = 0; i < 40; i++) // 越界访问
    {
        *(p + i) = i;
    }
}
void test4()
{
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        printf("申请失败\n");
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        *p++ = i;
    }
    // 4，使用free释放动态申请的空间的一部分
    free(p);
    p = NULL;
}
void test5()
{
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        printf("申请失败\n");
        return;
    }
    free(p);
    p = NULL;
    //     // 5，使用free重复释放同一块动态申请的空间
    //     free(p); // 会报错
}
int main(void)
{
    test5();
    return 0;
}