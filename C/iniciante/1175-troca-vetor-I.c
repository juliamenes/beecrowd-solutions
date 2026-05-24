#include <stdio.h>

int main()
{
    int vet[20], troca, j, i;

    for (int i = 0; i < 20; i++)
    {

        scanf("%d", &vet[i]);
    }
    for (i = 0, j = 19; i < 10; i++, j--)
    {

        troca = vet[i];
        vet[i] = vet[j];
        vet[j] = troca;
    }
    for (int i = 0; i < 20; i++)
    {

        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}