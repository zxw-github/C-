#include <stdio.h>
#include <string.h>

// 9.1求字符串长度 - strlen()
void test1();
int my_strlen(const char *);
void test2();
int main(void)
{
    test1();
    test2();
    return 0;
}
void test1()
{
    char ch[] = "abdc";
    char cd[] = {'a', 'b', 'c'};
    int len = strlen(ch); // 不包括\0,所以字符串中必须有\0,否则求出来的长度错误
    int lend = strlen(cd);
    int my_len = my_strlen(ch);
    printf("%d,%d,%d\n", len, lend, my_len); // 4,7
}
int my_strlen(const char *ptr)
{
    int n = 0;
    while (*ptr != '\0')
    {
        n++;
        ptr++;
    }
    return n;
}
void test2()
{
    if ((strlen("abc") - strlen("abcdef")) > 0) // strlen的返回值是无符号整数
    {
        printf(">\n");
    }
    else
    {
        printf("<=\n");
    }
}