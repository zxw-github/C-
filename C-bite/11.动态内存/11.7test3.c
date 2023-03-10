#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(void)
{
    char *p = (char *)malloc(100);
    strcpy(p, "hello");
    free(p);
    // free之后一定要置NULL
    // p = NULL;
    if (p == NULL)
    {
        strcpy(p, "world");
        printf("%s\n", p); // 虽然p没有置为NULL，依然保存着申请空间的地址，但是已经不能对其进行访问
    }
}
int main(void)
{
    test();

    return 0;
}
