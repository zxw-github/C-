#include <stdio.h>

void test();
int main()
{
    test();
    return 0;
}
void test()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 3, 4, 5, 6};
    int c[] = {3, 4, 5, 6, 7};

    int *arr[] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // printf("%d ", *(arr[i] + j));
            printf("%d ", arr[i][j]); // arr[i][j] 等价于*(arr[i]+j)
        }
        printf("\n");
    }
}
