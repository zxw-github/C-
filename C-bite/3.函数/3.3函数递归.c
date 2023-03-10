/* 3.3函数递归.c - 递归打印数字的各位 */
#include <stdio.h>

void print(unsigned int n);
int main(void)
{
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);

    return 0;
}
void print(unsigned int n)
{
    if (n > 9)
    {
        print(n / 10);
    }
    printf("%d  ", n % 10);
}