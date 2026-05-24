#include <stdio.h>

int main()
{
    double t, vet[100];
    scanf("%lf", &t);

    vet[0] = t;

    for (int i = 1; i < 100; i++)
    {
        vet[i] = vet[i - 1] / 2;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }

    return 0;
}