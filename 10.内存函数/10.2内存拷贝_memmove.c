#include <stdio.h>
#include <string.h>

// memmove -- 内存拷贝
/*
#include <string.h>
void *memmove( void *to, const void *from, size_t count );
功能: 与mencpy相同，不同的是当to 和 from 重叠，函数正常仍能工作
*/
void test_memmove();
void print(int arr[], int sz);
void *my_memmove(void *to, const void *from, size_t num);
void test_my_memmove();
int main(void)
{
    // test_memmove();
    test_my_memmove();
    return 0;
}
void test_memmove()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    memmove(arr1 + 2, arr1, 20); // 按字节为单位拷贝
    // arr1[]={1,2,1,2,3,4,5,8,9,10}
    print(arr1, 10);
}
void test_my_memmove()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // my_memmove(arr1 + 2, arr1, 20); // 按字节为单位拷贝
    // arr1[]={1,2,1,2,3,4,5,8,9,10}
    my_memmove(arr1, arr1 + 2, 20); // 按字节为单位拷贝
    print(arr1, 10);
}
void *my_memmove(void *to, const void *from, size_t num)
{
    void *ret = to;
    if (to < from)
    {
        // 从前往后拷贝
        while (num--)
        {
            *(char *)to = *(char *)from;
            to = (char *)to + 1;
            from = (char *)from + 1;
        }
    }
    else
    {
        // 从后往前拷贝
        while (num--)
        {
            *((char *)to + num) = *((char *)from + num);
        }
    }
    return ret;
}
void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}