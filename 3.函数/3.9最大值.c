#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Max = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    printf("%d\n", Max);
    return 0;
}