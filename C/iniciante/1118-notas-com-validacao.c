#include <stdio.h>

int main()
{
    double nota1, nota2, media;
    int d;

    do
    {
        scanf("%lf", &nota1);

        while (nota1 < 0 || nota1 > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &nota1);
        }
        scanf("%lf", &nota2);
        while (nota2 < 0 || nota2 > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &nota2);
        }
        media = (nota1 + nota2) / 2;
        printf("media = %.2lf\n", media);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &d);
        while (d != 1 && d != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &d);
        }
    } while (d == 1);

    return 0;
}