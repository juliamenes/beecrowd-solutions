#include <stdio.h>

int main()
{
    int t, vet[1000], u = 0;
    scanf("%d", &t);

    for (int i = 0; i < 1000; i++)
    {
        if (u == t)
        {
            u = 0;
        }
        vet[i] = u;
        u++;
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}