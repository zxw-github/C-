#include <stdio.h>
#include <string.h>

void test1();
void test2();
void test3();
void test4();
void test5();
int main(void)
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}
void test1()
{
    // 整型数组
    int a[] = {1, 2, 3, 4};
    printf("%zd  ", sizeof(a));     // 16 -- a表示整个数组
    printf("%zd  ", sizeof(a + 0)); // 8 -- a表示首元素的地址，a+0-表示第一个元素的地址
    printf("%zd  ", sizeof(*a));    // 4 -- a表示首元素的地址，解引用则表示数组首元素
    printf("%zd  ", sizeof(a + 1)); // 8 -- a表示首元素的地址，a10-表示第二个元素的地址
    printf("%zd\n", sizeof(a[1]));  // 4 -- 表示数组下标为1的元素

    printf("%zd  ", sizeof(&a));        // 8 -- 整个数组的地址
    printf("%zd  ", sizeof(*&a));       // 16 -- 解引用表示整个数组
    printf("%zd  ", sizeof(&a + 1));    // 8 -- 偏移一个数组的大小
    printf("%zd  ", sizeof(&a[0]));     // 8 -- 第一个元素的地址
    printf("%zd\n", sizeof(&a[0] + 1)); // 8 -- 第一个元素去地址偏移一个元素，表示第二个元素的地址
}
void test2()
{
    // 字符数组
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%zd  ", sizeof(a));         // 6
    printf("%zd  ", sizeof(a + 0));     // 8
    printf("%zd  ", sizeof(*a));        // 1
    printf("%zd  ", sizeof(a[1]));      // 1
    printf("%zd  ", sizeof(&a));        // 8
    printf("%zd  ", sizeof(&a + 1));    // 8
    printf("%zd  ", sizeof(&a[0] + 1)); // 8

    printf("%zd  ", strlen(a));         // ?
    printf("%zd  ", strlen(a + 0));     // ?
    printf("%zd  ", strlen(*a));        // err
    printf("%zd  ", strlen(a[1]));      // err
    printf("%zd  ", strlen(&a));        // ?
    printf("%zd  ", strlen(&a + 1));    // ?
    printf("%zd  ", strlen(&a[0] + 1)); // ?

    char c[] = "abcdef";
    printf("%zd  ", sizeof(c));         // 7
    printf("%zd  ", sizeof(c + 0));     // 7
    printf("%zd  ", sizeof(*c));        // 1
    printf("%zd  ", sizeof(c[1]));      // 1
    printf("%zd  ", sizeof(&c));        // 8
    printf("%zd  ", sizeof(&c + 1));    // 8
    printf("%zd  ", sizeof(&c[0] + 1)); // 8

    printf("%zd  ", strlen(c));         // 6
    printf("%zd  ", strlen(c + 0));     // 6
    printf("%zd  ", strlen(*c));        // err
    printf("%zd  ", strlen(c[1]));      // err
    printf("%zd  ", strlen(&c));        // 6
    printf("%zd  ", strlen(&c + 1));    // ?
    printf("%zd  ", strlen(&c[0] + 1)); // 5
}
void test3()
{
    char *p = "abcdef";
    printf("%zd  ", sizeof(p));         // 8
    printf("%zd  ", sizeof(p + 1));     // 8
    printf("%zd  ", sizeof(*p));        // 1
    printf("%zd  ", sizeof(p[0]));      // 1
    printf("%zd  ", sizeof(&p));        // 8
    printf("%zd  ", sizeof(&p + 1));    // 8
    printf("%zd  ", sizeof(&p[0] + 1)); // 8

    printf("%zd  ", strlen(p));     // 6
    printf("%zd  ", strlen(p + 1)); // 5
    // printf("%zd  ", strlen(*p));        // err
    // printf("%zd  ", strlen(p[0]));      // err
    printf("%zd  ", strlen(&p));        // ？
    printf("%zd  ", strlen(&p + 1));    // ？
    printf("%zd  ", strlen(&p[0] + 1)); // 5
}
void test4()
{
    // 二维数组
    int a[3][4] = {0};
    printf("%d  ", sizeof(a));           // 48
    printf("%d  ", sizeof(a[0][0]));     // 4
    printf("%d  ", sizeof(a[0]));        // 16
    printf("%d  ", sizeof(a[0] + 1));    // 8 -- a[0]表示第一行第一个元素的地址，a[0]+1 表示第一行第二个元素 的地址
    printf("%d  ", sizeof(*(a[0] + 1))); // 4 -- 第一行第二个元素的地址解引用表示第一行第二个元素
    printf("%d  ", sizeof(a + 1));       // 8
    // a是二维数组的数组名，没有取地址，也没有单独放在sizeof内，所以a表示二维数组首元素的地址，即第一行的地址，a+1表示第二行的地址
    printf("%d  ", sizeof(*(a + 1)));     // 16 -- a+1表示第二行的地址 *(a + 1) <==> a[1]
    printf("%d  ", sizeof(&a[0] + 1));    // 8 -- 第二行的地址
    printf("%d  ", sizeof(*(&a[0] + 1))); // 16 -- 第二行元素
    printf("%d  ", sizeof(*a));           // 16 -- a表示第一行的地址，*a表示第一行
    printf("%d\n", sizeof(a[3]));         // 16
    // sizeof内部的表达式是不会计算的(不会真的访问a[3])，a[3]本身不存在，但是可以推测出a[3]的类型属性，从而得到大小
}
void test5()
{
    short a = 5;
    int b = 4;
    printf("%d\n", sizeof(a = b + 2)); // 2
    printf("%d\n", a);                 // a=5
}