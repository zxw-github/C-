#include <stdio.h>
#include <string.h>

// strcmp

void test_strcmp();
void test_my_strcmp();
int my_strcmp(const char *s1, const char *s2);
int main(void)
{
    // test_strcmp();
    test_my_strcmp();
    return 0;
}
void test_strcmp()
{
    char *p = "abc";
    char *q = "cbcdef";

    int ret1 = strcmp("aaa", "cbb"); // 返回-1，0，1
    int ret2 = strcmp(p, q);         // 返回ASCII码值的差
    printf("%d,%d\n", ret1, ret2);
}
void test_my_strcmp()
{
    char *p = "cbc";
    char *q = "abcdef";

    int ret = my_strcmp(p, q);
    printf("%d\n", ret);
}
int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0') // s1和s2两个字符串相等
        {
            return 0;
        }
        s1++;
        s2++;
    }
    // if (*s1 > *s2)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return -1;
    // }
    return *s1 - *s2;
}