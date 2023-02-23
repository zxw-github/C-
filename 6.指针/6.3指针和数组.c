#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", *(p + i));
        // printf("%d  ", *(arr + i));
    }
    putchar('\n');
    printf("%d\n", 2 [arr]);
    printf("%d\n", arr[2]);
    return 0;
}