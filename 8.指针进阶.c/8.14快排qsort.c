#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// qsort函数
/*
#include <stdlib.h>     //qsort函数头文件
void qsort( void *buf,  //参数1 -- void型的指针，buf指针指向待排序的数据
            size_t num, //num -- 待排序数据的个数
            size_t size,    //size -- 待排序数据的大小(单位字节，可用sizeof求得，sizeof返回的类型就是size_t)
            int (*compare)(const void *, const void *)  //函数指针--用来比较两个元素的函数
           );

*/
void print(int arr[], int sz);
int compare(const void *e1, const void *e2) // e1和e2指向两个元素的指针，void * 是因为，不知道比较数据的类型
{
    return *(int *)e1 - *(int *)e2;
}
void test1()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 排序
    qsort(arr, sz, sizeof(arr[0]), compare);
    // 打印
    print(arr, sz);
}
struct stu
{
    char name[20];
    int age;
};
int sort_age(const void *e1, const void *e2)
{
    return ((struct stu *)e1)->age - ((struct stu *)e2)->age;
    // return ((struct stu *)e2)->age - ((struct stu *)e1)->age; // 交换即可实现降序排序
}
int sort_name(const void *e1, const void *e2)
{
    return strcmp(((struct stu *)e1)->name, ((struct stu *)e2)->name); // 两个字符串进行比较使用strcmp函数
}
void test3()
{
    // 使用qsort函数对结构体进行排序
    struct stu s[] = {{"zhangsan", 24}, {"wangwu", 31}, {"aenqi", 22}};
    int sz = sizeof(s) / sizeof(s[0]);
    // 按照年龄排序
    // qsort(s, sz, sizeof(s[0]), sort_age);
    // 按名字来比较
    qsort(s, sz, sizeof(s[0]), sort_name);
}
int main(void)
{
    // test1();
    test3();
    return 0;
}
void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}