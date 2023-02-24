#include <stdio.h>

void test();
int main(void)
{
    test();
    return 0;
}
void test()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char *str3 = "hello bit.";
    char *str4 = "hello bit.";
    if (str1 == str2)
        printf("str1 and str2 is same\n");
    else
        printf("str1 and str2 is not same\n"); // 打印
    if (str3 == str4)
        printf("str3 and str4 is same\n"); // 打印
    else
        printf("str3 and str4 is not same\n");

    // *str3 = 'w';//访问冲突
}