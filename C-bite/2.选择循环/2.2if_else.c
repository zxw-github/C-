#include <stdio.h>

void use_if_1(void);
int use_if_return(void);
int main(void)
{
    // use_if_1();
    //  if-return的练习
    int i = use_if_return();
    printf("%d\n", i);
    return 0;
}
void use_if_1(void)
{
    int a = 0;
    int b = 2;
    if (1 == a)
    {
        if (2 == b)
            printf("hehe\n");

        else
            printf("haha\n");
    }
}
int use_if_return(void)
{
    int a = 10;
    if (a < 2)
    {
        return 1;
    }
    return 3;
}