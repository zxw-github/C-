#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int main(void)
{
    int arr[10] = {0};   // 整型数组
    int(*pa)[10] = &arr; // 数组指针,pa-指向【整型数组】的指针

    int *arr1[10] = {0};     // 指针数组
    int *(*pa1)[10] = &arr1; // pa1 - 指向【整型指针数组】的指针

    int (*padd)(int, int) = add;          // 函数指针
    int (*pab[2])(int, int) = {add, sub}; // 函数指针数组，
    int (*(*pab2)[2])(int, int) = &pab;   // 取出的是函数指针数组的指针，pab2是指向【函数指针数组】的指针
    // 取出*pab2剩下：int (*[2])(int, int) -- 是一个函数指针数组
    return 0;
}