#include <stdio.h>

void use_do_while();
int main()
{
    use_do_while();
    return 0;
}
void use_do_while()
{
    int i = 0;
    do
    {
        if (5 == i)
        {
            break;
            // continue;//死循环
        }
        printf("%d  ", i);
        i++;
    } while (i <= 10);
}