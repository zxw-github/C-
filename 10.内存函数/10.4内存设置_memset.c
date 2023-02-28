#include <stdio.h>
#include <string.h>

/*
#include <string.h>
void *memset( void *buffer, int ch, size_t count );
功能: 函数拷贝ch 到buffer 从头开始的count 个字符里, 并返回buffer指针。 memset() 可以应用在将一段内存初始化为某个值。例如：


memset( the_array, '\0', sizeof(the_array) );
这是将一个数组的所以分量设置成零的很便捷的方法。
*/
void test_memset();
void print(int arr[], int sz);
int main(void)
{
    test_memset();
    return 0;
}
void test_memset()
{
    int arr[10] = {0};
    memset(arr, 1, 20); // 以字节为单位
    // 将数组arr的前20个字节都设置成1

    int arr2[10];
    memset(arr2, 0, sizeof(arr)); // 初始化数组为0
    print(arr2, 10);
}
void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}