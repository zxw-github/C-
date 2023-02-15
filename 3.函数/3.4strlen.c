#include <stdio.h>

// 求字符串长度
int my_strlen(char *arr);
// 递归实现
int my_strlen_recursion(char *arr);
int main(void)
{
    char arr[4] = "bit";
    printf("%d\n", my_strlen(arr));
    printf("%d\n", my_strlen_recursion(arr));

    return 0;
}
int my_strlen(char *arr)
{
    int count = 0;
    while (*arr != '\0')
    {
        count++;
        arr++;
    }
    return count;
}
int my_strlen_recursion(char *arr)
{
    if (*arr != '\0')
    {
        return 1 + my_strlen_recursion(arr + 1);
    }
    else
    {
        return 0;
    }
}