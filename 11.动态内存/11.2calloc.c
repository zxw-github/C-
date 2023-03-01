// calloc
// void *calloc(size_t num, size_t size);//申请num个元素，每个元素大小为size
// calloc会将申请的空间初始化为0

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int *p = (int *)malloc(10 * (sizeof(int)));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", *(p + i));
    // }

    int *q = (int *)calloc(10, sizeof(int)); // 自动初始化为0
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(q + i));
    }
    return 0;
}