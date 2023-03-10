#include <stdio.h>

int sum(int a);
int main(void)
{
    int i = 0;
    int a = 2;
    while (i < 5)
    {
        printf("%d\n", sum(a));
        i++;
        // a++;
    }
}
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return a + b + c;
}