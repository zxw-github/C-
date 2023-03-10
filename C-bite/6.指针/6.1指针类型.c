#include <stdio.h>

// 指针类型的意义
// 1.指针的类型决定解引用时可以访问的连续空间的大小
// 2.指针的类型决定解引用时偏移的大小
void test_1()
{
    int a = 0x11223344;

    // int *pa = &a;
    // *pa = 0; //a=0

    char *pa = &a;
    *pa = 0;
    printf("%d\n", a); // a=0x11223300
}
void test_2()
{
    int arr[10] = {0};
    int *p = arr;
    char *pc = arr;

    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", pc);
    printf("%p\n", p + 1);
}
void test_3()
{
    int arr[10] = {0};
    int *p = arr;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = 1;
    }
}
int main(void)
{
    // test_2();
    test_3();
    int *p = NULL;
    return 0;
}