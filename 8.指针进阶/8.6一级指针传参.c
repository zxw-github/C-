#include <stdio.h>

void print(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
int main(void)
{
    int arr[10] = {0};
    int *p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);

    print(p, sz); // 等价于print(arr,ze);

    return 0;
}