#include <stdio.h>

int main()
{
    double a, b, tx;
    scanf("%lf %lf", &a, &b);

    tx = ((b - a) / a) * 100.00;

    printf("%.2lf%%\n", tx);
    return 0;
}