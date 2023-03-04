#include <stdio.h>
#include <stdlib.h>

#define MALLOC(size, type) (type *)malloc(size * sizeof(type))
int main(void)
{
    int *p = MALLOC(10, int);
    if (p == NULL)
    {
        perror("MALLOC");
        return -1;
    }
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
}