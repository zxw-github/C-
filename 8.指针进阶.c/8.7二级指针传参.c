#include <stdio.h>

void test(int **ppa)
{
    printf("%d\n", **ppa);
}
int main(void)
{
    int a = 10;
    int *pa = &a;
    int **ppa = &pa;

    test(ppa);
    test(&pa);
    return 0;
}