#include <stdio.h>

// 打印1-10
void print_1_10();
// break
void print_break();
// continue
void print_continue();
int main(void)
{
    // print_1_10();
    // print_break();
    print_continue();
    return 0;
}
void print_1_10()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d  ", i);
        i++;
    }
    putchar('\n');
}
void print_break()
{
    int i = 1;
    while (i <= 10)
    {
        if (5 == i)
        {
            break;
        }
        printf("%d  ", i);
        i++;
    }
    putchar('\n');
}
void print_continue()
{
    int i = 1;
    while (i <= 10)
    {
        if (5 == i)
        {
            continue; // 陷入死循环
        }
        printf("%d  ", i);
        i++;
    }
}