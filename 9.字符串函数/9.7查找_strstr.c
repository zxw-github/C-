#include <stdio.h>
#include <string.h>

// strstr
// 在目标字符串中查找第一次出现需要查找的字符串的位置，不包含终止符 '\0'。
// 返回在目标字符串中第一次出现需要查找字符串的位置，如果未找到则返回 null。

void test_strstr();
char *my_strstr(const char *str1, const char *str2);
void test_my_strstr();
int main(void)
{
    // test_strstr();
    test_my_strstr();
    return 0;
}
void test_strstr()
{
    char *arr1 = "efabdabcbc";
    char *arr2 = "abc";

    char *ret = strstr(arr1, arr2);
    printf("%s\n", ret); // abcbc
}
void test_my_strstr()
{
    char *arr1 = "efabdabcbc";
    char *arr2 = "abc";

    char *ret = my_strstr(arr1, arr2);
    printf("%s\n", ret); // abcbc
}
char *my_strstr(const char *str1, const char *str2)
{
    const char *s1 = NULL;
    const char *s2 = NULL;
    const char *cp = str1;

    if (*str2 == '\0') // 需要查找的字符串为空
    {
        return (char *)str1;
    }
    while (*cp)
    {
        s1 = cp;
        s2 = str2;
        while (s1 && s2 && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return (char *)cp;
        }
        cp++;
    }
    return NULL;
}
