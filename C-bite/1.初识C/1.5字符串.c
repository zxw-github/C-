#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr1[] = "abc"; // 末尾有结束符-/0
    // char arr2[3] = {'a', 'b', 'c'}; // 末尾没有结束符-/0
    char arr2[4] = {'a', 'b', 'c', '\0'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%lu\n", strlen(arr1));
    printf("%lu\n", strlen(arr2));

    return 0;
}
/*
1，在数组的初始化时，使用{}初始化时，数组的长度应大于数组内元素的个数，因为需要至少一个结束符
2，数组的初始化时，[]内数字的大小为分配给数组的空间大小，为了保证有结束符，应在初始化时就分配数组的大小，并进行初始化
3，可以全部初始化为0，或为部分空间初始化，为初始化的空间默认初始化为0，
*/