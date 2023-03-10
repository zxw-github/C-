#include <stdio.h>

// 联合（共用体）
// 联合体的成员共用一块内存空间，联合体的大小至少是最大成员的大小
union un
{
    /* data */
    char c; // 1
    int a;  // 4
};
void test()
{
    union un n = {10};

    // 三个地址相同
    printf("%p\n", &n);
    printf("%p\n", &(n.c));
    printf("%p\n", &(n.a));

    printf("%d\n", n.c);
    printf("%d\n", n.a);
    // printf("%zd\n", sizeof(n)); // 4
}
void test1()
{
    union u
    {
        /* data */
        char c; // 1
        int a;  // 4
    };
    union u m;
    m.a = 1;
    if (m.c == 1)
    {
        printf("小端\n"); // 1,小段存储
    }
    else
    {
        printf("大端\n");
    }
}
void test2()
{
    int a = 1;
    if (*(char *)(&a) == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
}
void test3()
{
    // 联合体的对齐
    union un
    {
        char a[5]; // 对齐数1
        int i;     // 对齐数4
    };
    // 当最大成员不是最大对齐数的整数倍时，要对齐到最大对齐数的整数倍
    union un n;
    printf("%zd\n", sizeof(union un)); // 8
    printf("%zd\n", sizeof(n));        // 8
    union un2
    {
        char a[7]; // 对齐数1
        double i;  // 对齐数8
    };

    printf("%zd\n", sizeof(union un2)); // 8

    union un3
    {
        char a[7]; // 对齐数1
        char c;    // 对齐数1
    };

    printf("%zd\n", sizeof(union un3)); // 7
}
int main(void)
{
    // test();
    // test1();
    // test2();
    test3();
    return 0;
}
