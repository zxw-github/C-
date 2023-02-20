// 冒泡排序
#include <stdio.h>

void bubble_sort(int arr[], int size);
int main(void)
{
    int arr[10] = {9, 3, 2, 6, 1, 5, 7, 0, 8, 4};
    // 确定元素的个数
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
    return 0;
}
void bubble_sort(int arr[], int size)
{
    // n个元素进行n-1趟排序。10个元素进行9趟排序
    for (int i = 0; i < size - 1; i++) // 控制排序的趟数，
    {
        int flag = 1;
        // 控制相邻两个元素的比较，每进行一趟，比较的次数少一次
        for (int j = 0; j < size - 1 - i; j++)
        {
            // 控制元素的交换
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1) // 当没有发生交换的时候，数组已经有序无需再排序
            break;
    }
}

// 数组名是首元素的地址
// 1.sizeof(数组名)，数组名表示整个数组
// 2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址
