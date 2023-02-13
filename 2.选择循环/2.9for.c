#include <stdio.h>

// 练习for循环
void use_for_1();
void use_for_2();
void use_for_3();
void use_for_4();
void use_for_5();
// 笔试题
void use_for();
int main(void)
{
    // use_for_1();
    // use_for_2();
    // use_for_3();
    // use_for_4();
    // use_for_5();
    use_for();

    return 0;
}
void use_for_1()
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        if (5 == i)
            break;
        printf("%d  ", i);
    }
    putchar('\n');
}
void use_for_2()
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        if (5 == i)
            continue;
        printf("%d  ", i);
    }
    putchar('\n');
}
void use_for_3()
{
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("hehe\n"); // 9个
        }
    }
}
void use_for_4()
{
    int i = 0, j = 0;
    for (; i < 3; i++)
    {
        for (; j < 3; j++) // 在第一轮的循环中j=3之后的寻循环中，j一直为三，所以i之进行了一次循环，剩余两次j不满足条件
        {
            printf("hehe\n"); // 3个
        }
    }
}
void use_for_5()
{
    int i, j;
    for (i = 0, j = 0; i < 3 && j < 5; ++i, j++)
    {
        printf("hehe\n");
    }
}
void use_for()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++) // 循环0次
    // k=0的结果为假
    {
        k++;
    }
}