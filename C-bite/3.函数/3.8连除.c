#include <stdio.h>

int main(void)
{
    double ret = 0.0;
    int flag = 1;
    for (int i = 1; i <= 100; i++)
    {
        ret = (ret + flag * (1.0 / i));
        flag = -flag;
    }
    printf("%f\n", ret);

    printf("%f\n", 2.0 / 3);
    return 0;
}