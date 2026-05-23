#include <stdio.h>

int main()
{
    int vet[3], maior;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for (int i = 1; i < 3; i++)
    {
        if (vet[i] > maior)
            maior = vet[i];
    }
    printf("%d eh o maior\n", maior);

    return 0;
}