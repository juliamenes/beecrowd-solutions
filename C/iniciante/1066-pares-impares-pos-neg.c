#include <stdio.h>

int main()
{
    int vet[5], par = 0, impar = 0, pos = 0, neg = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);

        if (vet[i] > 0)
            pos++;
        if (vet[i] % 2 == 0)
            par++;
        if (vet[i] % 2 != 0)
            impar++;
        if (vet[i] < 0)
            neg++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}