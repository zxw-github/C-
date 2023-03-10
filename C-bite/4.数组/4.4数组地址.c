#include <stdio.h>

int main(void)
{
    int arr[5] = {0};

    printf("%p\n", arr); // 数组名就是数组首元素的地址
    printf("%p\n", arr + 1);
    // printf("%p\n", &arr[0]);

    printf("%p\n", &arr);     //&arr取出的是整个数组的地址，但值上和arr一样
    printf("%p\n", &arr + 1); // 偏移了一个数组的大小
    return 0;
}
// 数组名是首元素的地址
// 1.sizeof(数组名)，数组名表示整个数组
// 2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址
