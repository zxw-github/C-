#include <stdio.h>
#include <string.h>

/*
#include <string.h>
int memcmp( const void *buffer1, const void *buffer2, size_t count );
功能：函数比较buffer1 和 buffer2的前count个字节。返回值如下: >0,0,<0
*/
void test_memcmp();
int main(void)
{
    test_memcmp();
    return 0;
}
void test_memcmp()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6};
    int arr2[10] = {2, 3, 4, 5, 6, 7};

    int ret = memcmp(arr1, arr2, 8);
    printf("%d\n", ret);
}
