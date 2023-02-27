#include <stdio.h>
#include <string.h>

// strcpy
/*
1,源字符串必须有结束符-\0,strcpy拷贝时会拷贝\0
2,目标空间必须足够的大
*/

// strcat
/*
1,源字符串必须有结束符-\0，以表明需要追加的位置
2,目标空间必须足够的大
*/
void test_strcpy();
void test_strcat();
char *my_strcat(char *dest, const char *soure);
void self_strcat();
int main(void)
{
    // test_strcpy();
    test_strcat();
    return 0;
}
void test_strcpy()
{
    char ch[20] = {0};
    char ch_1[10] = {0};
    strcpy(ch, "abcdef"); // 把"abcdef"的首地址放在ch中
    // strcpy会自动拷贝字符串的结束符\0到目标字符串中，并且字符串的结束符\0也是拷贝结束的标志
    printf("%s\n", ch);

    char ch1[] = {'a', 'b', 'c'}; // ch1中没有结束符
    strcpy(ch_1, ch1);            // error
    printf("%s\n", ch_1);
}
void test_strcat()
{
    char arr[13] = "hello";
    char arr1[20] = " world!";
    // strcat(arr, " world"); // 追加字符串

    // strcat(arr, arr1);

    // my_strcat(arr, arr1);

    // printf("%s\n", my_strcat(arr, arr1));
    self_strcat();
}
char *my_strcat(char *dest, const char *source)
{
    char *ret = dest; // 需要返回的是目的字符串的起始地址，需要先保存
    // 找源字符串的\0
    while (*dest)
    {
        dest++;
    }
    while ((*(dest++) = *(source++)) != '\0')
        ; // 当复制的字符为\0 时停止循环

    return ret;
}
void self_strcat()
{
    char arr[20] = "abcd";
    strcat(arr, arr); // 不行，因为结束符被覆盖，无法结束追加
    printf("%s\n", arr);
}