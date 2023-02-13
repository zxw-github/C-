#include <stdio.h>

void use_getchar();
void cir_read();
int main(void)
{
    // use_getchar();
    cir_read();
    return 0;
}
void use_getchar()
{
    char ch = getchar();
    printf("%c\n", ch);
    putchar(ch);
}
void cir_read()
{
    char ch;
    // EOF - 文件结束标志
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}