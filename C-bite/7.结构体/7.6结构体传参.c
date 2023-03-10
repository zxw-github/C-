#include <stdio.h>

struct S
{
    int data[100];
    int num;
};
// 结构体传参
void print1(struct S s)
{
    printf("%d\n", s.num);
}
// 结构体地址传参
void print2(struct S *sp)
{
    printf("%d\n", sp->num);
}
int main(void)
{
    struct S s = {{1, 2, 3, 4, 5}, 10};
    print1(s);  // 传结构体
    print2(&s); // 传地址

    return 0;
}
