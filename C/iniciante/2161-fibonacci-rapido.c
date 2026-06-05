#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double alpha = (1 + sqrt(5)) / 2;
    double beta = (1 - sqrt(5)) / 2;

    double fibo;
    fibo = (pow(alpha, n) - pow(beta, n)) / sqrt(5);

    printf("%.1lf\n", fibo);

    return 0;
}