#include <stdio.h>

int main(void)
{
    int a = 0;
    int *pa = &a; // pa是指针变量，是一个一级指针

    int **ppa = &pa; // ppa是指针变量，是一个二级指针
    return 0;
}