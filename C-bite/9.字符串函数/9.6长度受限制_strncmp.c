#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p = "abcdef";
    char *q = "abcde";
    printf("%d\n", strncmp(p, q, 6));
    printf("%d\n", strncmp(p + 1, q, 6));
    printf("%d\n", 'f');
    return 0;
}