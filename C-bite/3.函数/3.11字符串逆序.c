#include <stdio.h>

// 字符数组的长度
int my_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
// 字符串逆序
void reverse_string(char str[])
{
    int left = 0;
    int right = my_strlen(str) - 1;

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
// 递归实现字符串逆序
/* 如：abcdef\0
步骤：1，将a保存
2，f放在a的位置
3，将f的位置置为'\0'，如此就可以递归逆置bcde
4，递归
5，将保存的a放到f的位置
*/
void reverse_string_recursion(char *str)
{
    char temp = *str;
    int len = my_strlen(str);
    *str = *(str + len - 1);
    *(str + len - 1) = '\0';
    // 判断条件
    // 当需要递归逆序的子字符串的长度为0或者1的时候就不需要再递归逆序
    if (my_strlen(str + 1) >= 2)
    {
        reverse_string_recursion(str + 1);
    }
    *(str + len - 1) = temp;
}
int main(void)
{
    char arr[] = "abcdefg";
    // reverse_string(arr);
    reverse_string_recursion(arr);
    printf("%s\n", arr);
    return 0;
}