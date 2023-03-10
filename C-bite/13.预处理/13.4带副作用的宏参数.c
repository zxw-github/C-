#include <stdio.h>

#define MAX(x, y) ((x > y) ? x : y)
int main(void)
{
    int a = 5;
    int b = 8;
    int m = MAX(a++, b++);
    //((a++ > b++) ? a++ : b++)
    printf("%d\n", m);       // 9
    printf("%d,%d\n", a, b); // 6,10

    return 0;
}