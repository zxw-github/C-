#include <stdio.h>
#include <string.h>

// memcpy -- 内存拷贝
/*
#include <string.h>
void *memcpy( void *to, const void *from, size_t count );
函数从from中复制count个字节到to中，并返回to指针。 ! (如果to 和 from 重叠，则函数行为不确定)
*/
void test_memcpy();
void test_my_memcpy();
void *my_memcpy(void *to, const void *from, size_t num);
void print(int arr[], int sz);
int main(void)
{
    test_memcpy();
    // test_my_memcpy();
    return 0;
}
void test_memcpy()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {0};

    memcpy(arr1 + 2, arr1, 20); // 按字节为单位拷贝
    // arr1[]={1,2,1,2,1,2,1,8,9,10}    //后面的内容被覆盖
    print(arr1, 10);
}
void test_my_memcpy()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arr2[10] = {0};

    my_memcpy(arr2, arr1, 20);
    print(arr1, 10);
}
void *my_memcpy(void *to, const void *from, size_t num)
{
    void *ret = to;
    for (int i = 0; i < num; i++)
    {
        *(char *)to = *(char *)from;
        to = (char *)to + 1;
        from = (char *)from + 1;
        // (char *)to++; //错误。强制类型转换这是一种临时的状态，在使用完后就会撤销这种转换的状态，
        //  后置++时，强制类型转换的状态消失，此时to依然是void*类型
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