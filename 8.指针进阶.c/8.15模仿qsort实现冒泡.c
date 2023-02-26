#include <stdio.h>

int compare(const void *e1, const void *e2) // e1和e2指向两个元素的指针，void * 是因为，不知道比较数据的类型
{
    return *(int *)e1 - *(int *)e2;
}
void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(char *buff1, char *buff2, int size_t)
{
    // 在不知道交换数据的类型，按字节交换
    char temp;
    for (int i = 0; i < size_t; i++)
    {
        temp = *buff1;
        *buff1 = *buff2;
        *buff2 = temp;
        buff1++;
        buff2++;
    }
}
// 模仿qsort实现冒泡排序，实现对各种数据的排序
void bubble_sort(void *base, int num, int size_t, int (*compare)(const void *, const void *))
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (compare((char *)base + j * size_t, (char *)base + (j + 1) * size_t)) // 传入需要比较的两个参数
            {
                // 交换
                swap((char *)base + j * size_t, (char *)base + (j + 1) * size_t, size_t);
            }
        }
    }
}
void test1()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr, sz);
    // 排序
    bubble_sort(arr, sz, sizeof(arr[0]), compare);
    // 打印
    print(arr, sz);
}

int main(void)
{
    test1();
    return 0;
}