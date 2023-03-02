#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 结构中允许最后一个成员是未知大小的数组，叫做柔性数组成员

// 1,柔性数组前必须有其他成员
// 2，sizeof不计算柔性数组的大小
// 3,包含柔性数组成员的的结构用malloc函数来动态申请内存，分配的内存应大于结构的大小

struct S1
{
    int a;
    int arr[]; // 大小未知，柔性数组
};
struct S2
{
    int a;
    int arr[0]; // 大小未知，柔性数组
};
struct S3
{
    int a;
    int *arr;
};
// 实现柔性数组
void soft_arr(void)
{
    struct S3 *ps = (struct S3 *)malloc(10 * sizeof(struct S3)); // 动态申请结构体空间
    ps->a = 10;
    int *ptr = (int *)malloc(10 * sizeof(int));
    if (ptr != NULL)
    {
        ps->arr = ptr;
    }
    for (int i = 0; i < 10; i++)
    {
        ps->arr[i] = i;
    }
    // 释放
    // 1，释放动态申请的数组空间
    free(ps->arr);
    ps->arr = NULL;
    // 2，释放动态申请的结构体空间
    free(ps);
    ps = NULL;
}
int main(void)
{
    // 期望arr数组包含10个整型
    struct S1 *ps = (struct S1 *)malloc(sizeof(struct S1) + 10 * sizeof(int));
    printf("%zd\n", sizeof(struct S1)); // 4
    return 0;
}
// 手动在结构体内部使用指针来指向动态申请的一个数组空间和使用柔性数组的区别
// 1，手动实现的需要两次动态申请和释放
// 2，手动实现在释放后可能会造成内存碎片，而柔性数组具有很高的空间局部性