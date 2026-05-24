#include <stdio.h>

int main()
{
    int n, num;
    unsigned long long int vet1[61];

    vet1[0] = 0;
    vet1[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        vet1[i] = vet1[i - 1] + vet1[i - 2];
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        printf("Fib(%d) = %llu\n", num, vet1[num]);
    }

    return 0;
}