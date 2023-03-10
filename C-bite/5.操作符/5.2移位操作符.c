#include <stdio.h>

void move_left(void);
int main(void)
{
    move_left();

    return 0;
}
void move_left(void)
{
    short a = 8;
    short b = a >> 1;
    // a=8:0000 0000 0000 1000B >>1 -> 0000 0000 0000 0100B=4
    printf("%d\n", b);

    short c = 8;
    short d = c >> 2;
    // c=8 : 0000 0000 0000 1000B >>2 -> 0000 0000 0000 0010B=2
    printf("%d\n", d);

    short e = 1;
    short f = e << 15;
    // e=1 : 0000 0000 0000 0001B <<15 -> 1000 0000 0000 0000B=-32768
    printf("%d\n", f);
}
