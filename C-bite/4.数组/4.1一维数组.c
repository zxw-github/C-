#include <stdio.h>

int main(void)
{
    char ch1[] = "bit";           // b i t \0
    char ch2[] = {'b', 'i', 't'}; // b i t

    printf("%s\n", ch1);
    printf("%s\n", ch2);
    return 0;
}