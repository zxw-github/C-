#include <stdio.h>
#include <string.h>

int main(void)
{
    // 换行符--\n
    printf("i am happy!\n");
    printf("i am happy!\\n\n");

    /* 要输出\,要使用\\ */
    printf("\\Users\\zhaoxiaowei\\Documents\\Git-code\\c-language-learning\\1.数据和C\n");

    // 水平制表符--\t
    printf("hello\tC\tlanguage\n");

    // 垂直制表符 -- \v
    printf("i\v am\v happy!\n");

    // 打印单引号--' 和双引号--"
    printf("%c\n", '\'');
    printf("%s\n", "\"");

    printf("***************************\n");
    printf("c:\test\32\test.c");

    printf("%lu\n", strlen("c:\test\32\test.c")); // strlen=13;

    printf("%c\n", '\55'); // 55：101 101:1+4+8+32=45，45对应的ASCII码值是-
    // \32 -- 32是作为2位八进制数
    // \32 -- 32作为八进制数对应的十进制数，作为ASCII码值所对应的字符
    // 32（八进制） --  26（十进制），26对应的ASCII字符是替代字符->,

    //\xdd -- 表示两位十六进制数 如\x30--表示两位十六进制数，二进制为：0011 0000，转化为十进制数为：16+32=48

    return 0;
}
/*
转义字符
/ddd:ddd表示1～3位的八进制数，如\32表示2位的八进制数，解释为二进制为：011 010，十进制为：26
*/