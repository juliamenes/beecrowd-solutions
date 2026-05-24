#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int vet[n], menor, posicao;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    menor = vet[0];
    for (int i = 0; i < n; i++)
    {

        if (vet[i] < menor)
        {
            menor = vet[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}