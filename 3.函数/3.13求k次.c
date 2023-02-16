#include <stdio.h>

double Pow(int, int);
int main(void)
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    double ret = Pow(n, k);
    printf("%f\n", ret);

    return 0;
}
double Pow(int n, int k)
{
    if (0 == k)
    {
        return 1;
    }
    else if (k > 0)
    {
        return n * Pow(n, k - 1);
    }
    else
    {
        return 1.0 / Pow(n, -k);
    }
}