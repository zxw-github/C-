#include <stdio.h>

void test_1(int arr)
{
}
void test_2(int arr[10])
{
}
void test_3(int *arr)
{
}
void test_4(int *arr[])
{
}
void test_5(int *arr[20])
{
}
void test_6(int **arr)
{
}
int main(void)
{
    int arr1[10] = {0};
    int *arr2[10] = {0};

    test_1(arr1);
    test_2(arr1);
    test_3(arr1);

    test_4(arr2);
    test_5(arr2);
    test_6(arr2);
    return 0;
}