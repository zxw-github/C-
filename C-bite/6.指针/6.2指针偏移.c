#include <stdio.h>

void test()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%ld\n", &arr[9] - &arr[0]); // 9
    // 指针-指针得到的是两个指针之间的元素个数
}
// 指针-指针求字符串长度
int my_strlen(char *str)
{
    char *start = str;
    while (*str != '\0')
    {
        str++;
    }
    return str - start; // 4
}
int main(void)
{
    char arr[] = "abcd";
    int ret = my_strlen(arr);

    printf("%d\n", ret);
}