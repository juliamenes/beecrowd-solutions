#include <stdio.h>

int main()
{
    double vet[6], media = 0, cont = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &vet[i]);

        if (vet[i] > 0)
        {
            cont++;
            media += vet[i];
        }
    }

    printf("%.0lf valores positivos\n%.1lf\n", cont, media / cont);

    return 0;
}