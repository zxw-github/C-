#include <stdio.h>

int main(void)
{
    int arr[][44] = {1, 2, 3, 4, 5};
    int *p = &arr[0][0];
    for (int i = 0; i <= 12; i++)
    {
        printf("%d   ", *p);
        p++;
    }
    return 0;
}