#include <stdio.h>

void bubble_sort(int arr[], int sz);
void print(int arr[], int sz);
// int arr_length(int arr[]);
int main(void)
{
    // int arr[10] = {9, 8, 7, 4, 5, 6, 3, 2, 1, 0};
    // int arr[10] = {2, 3, 78, 9, 0, 1};
    int arr[0] = {0};
    int n = 0, i = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (getchar() != '\n')
        {
            arr[i++] = n;
        }
        else
        {
            break;
        }
    }
    int sz = arr_length(arr);
    int sz = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", sz);
    bubble_sort(arr, sz);
    print(arr, sz);
    return 0;
}
void bubble_sort(int arr[], int sz)
{
    // 排序的趟数
    for (int i = 0; i < sz - 1; i++)
    {
        // 一趟冒泡排序
        int flag = 0;
        for (int j = 0; j < sz - i - 1; j++)
        {
            int temp = 0;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
// int arr_length(int arr[])
// {
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }