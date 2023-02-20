#include <stdio.h>

// struct T
// {
//     char a;
//     int *b;
//     int d;
//     int c : 16;
//     double e;
// };
// int main()
// {
//     struct T *p;
//     printf("%zd\n", sizeof(*p));
//     printf("%zd\n", sizeof(p->a));
//     return 0;
// }
struct st_t
{
    int status;
    short *pdata;
    char errstr[32];
};
int main()
{
    struct st_t st[16];
    char *p = (char *)(st[2].errstr + 32);
    printf("%d", (p - (char *)(st)));

    return 0;
}