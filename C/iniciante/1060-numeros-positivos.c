#include <stdio.h>

int main()
{
    long vet[6];
    int cont = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &vet[i]);

        if (vet[i] > 0)
            cont++;
    }
    printf("%d valores positivos\n", cont);

    return 0;
}