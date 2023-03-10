#include <stdio.h>

// 在有序数组中查找指定元素,并返回指定元素在数组中的位置
void Half(int a[], int find, int length);
int main(void)
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int find;
    scanf("%d", &find);
    Half(arr, find, length);
    return 0;
}
void Half(int a[], int find, int length)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int mide = (left + right) / 2;
        if (a[mide] == find)
        {
            printf("查找成功，%d\n", mide);
            break;
        }
        else if (a[mide] > find)
        {
            right = mide - 1;
        }
        else if (a[mide] < find)
        {
            left = mide + 1;
        }
    }
    if (left > right)
    {
        printf("查找失败\n");
    }
}