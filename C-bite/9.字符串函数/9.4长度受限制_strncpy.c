#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr1[20] = "abcdefghwq";
    char arr2[20] = "hell";
    // 会在末尾自动补充\0

    // strncpy(arr1, arr2, 3); // heldefghwq

    // strncpy(arr1, arr2, 6); // hell\0\0ghwq

    // strncpy(arr1 + 2, arr2, 3); // abhelfghwq

    strncpy(arr1, arr2 + 1, 3); // elldefghwq
    printf("%s\n", arr1);
    return 0;
}