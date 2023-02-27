#include <stdio.h>

void test_1(int arr[3][4])
{
}
/*
void test_1(int arr[][])    //错误
{
}
*/
void test_2(int arr[][4])
{
}
/*
void test_3(int *arr)   //错误，这是一维数组的传参，二维数组的首地址是第一行的地址
{
}
*/
/*
void test_3(int *arr[5])   //错误，这是一个指针数组
{
}
*/
void test_4(int (*arr)[4]) // 数组指针
{
}
/*
void test_4(int **arr) // 错误
{
}
*/
int main(void)
{
    int arr[3][4] = {0};
    test_1(arr);
    test_2(arr);
    test_4(arr);
    return 0;
}