#include <stdio.h>

void arr_length(int arr[]);
int main(void)
{
    int arr_1[10] = {1, 2, 3, 4, 5};
    int length_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    printf("在定义位置用sizeof求数组的长度,结果是 = %d\n", length_1);

    arr_length(arr_1);

    return 0;
}
void arr_length(int arr[])
{
    int length_2 = sizeof(arr) / sizeof(arr[0]);
    printf("在子函数中用sizeof求数组的长度,结果是 = %d\n", length_2);
}
/*
1.sizeof 只能在数组定义的位置使用，不能作为参数，在子函数中使用sizeof求数组长度
2，数组作为参数传入函数，数组名只是一个指针，而不是一整个数组，所以在函数中使用sizeof(arr)结果只是一个指针的大小
*/