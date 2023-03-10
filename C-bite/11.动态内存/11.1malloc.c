#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[10]; // 栈区

    int *p = (int *)malloc(10 * sizeof(int)); // 堆区
    // malloc返回void*，所以需要强制类型转换
    // *(p + 1) = 2;
    // printf("%d\n", *(p + 1));
    if (p == NULL)
    {
        // printf("内存申请失败\n");
        // perror-- 打印错误消息
        perror("error"); // error: Cannot allocate memory
    }
    for (int i = 0; i < 10; i++)
    {
        // p[i] = 2;
        *(p + i) = 2;
    }
    for (int i = 0; i < 10; i++)
    {
        // printf("%d  ", p[i]);
        printf("%d  ", *(p + i));
    }

    // 内存释放
    free(p);
    p = NULL;
    return 0;
}
