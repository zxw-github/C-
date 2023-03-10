#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr1[20] = "abcdefg";
    char arr2[20] = "hell";
    // 会在末尾自动补充\0

    // strncat(arr1, arr2, 3); //abcdefghel

    // strncat(arr1 + 2, arr2, 3);//abcdefghel

    strncat(arr1, arr2 + 1, 3); // abcdefgell

    printf("%s\n", arr1);
    return 0;
}