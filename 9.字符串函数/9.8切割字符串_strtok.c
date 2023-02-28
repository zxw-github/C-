#include <stdio.h>
#include <string.h>

// strtok
// C 库函数 char *strtok(char *str, const char *delim) 分解字符串 str 为一组字符串，delim 为分隔符。
// str -- 要被分解成一组小字符串的字符串。delim -- 包含分隔符的 C 字符串。
// 该函数返回被分解的第一个子字符串，如果没有可检索的字符串，则返回一个空指针。

int main(void)
{
    char str[80] = "This is - www.nowcoder.com - website";
    const char s[2] = "-";
    char *token;

    /* 获取第一个子字符串 */
    token = strtok(str, s);

    /* 继续获取其他的子字符串 */
    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }

    return 0;
}