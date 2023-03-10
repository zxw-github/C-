#include <stdio.h>
/*
回调函数：就是一个通过函数指针调用的函数，，如果你把函数的指针作为参数传递给另一个函数，当这个指针被调用其所指向的函数时，我们就说这是一个回调函数
回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外一方调用，用于对该事件或条件的响应
*/

// 将函数A的地址传给函数B，由函数B来调用函数A

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}
void menu()
{
    printf("************************\n");
    printf("***  1.add   2.sub  ****\n");
    printf("***  3.mul   4.div  ****\n");
    printf("********  0.exit  ******\n");
    printf("************************\n");
}
int clc(int (*pf)(int, int))
{
    int a = 0, b = 0;
    printf("请输入两个操作数：");
    scanf("%d %d", &a, &b);
    return pf(a, b);
}
int main(void)
{
    int input = 0;
    do
    {
        menu();
        int ret = 0;
        printf("请输入选项:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            ret = clc(add);
            printf("%d\n", ret);
            break;
        case 2:
            ret = clc(sub);
            printf("%d\n", ret);
            break;
        case 3:
            ret = clc(mul);
            printf("%d\n", ret);
            break;
        case 4:
            ret = clc(div);
            printf("%d\n", ret);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("输入错误，请重新选择\n");
            break;
        }

    } while (input);
    return 0;
}