#include <stdio.h>

int main()
{
    double idade, media, cont = 0, sum = 0;
    scanf("%lf", &idade);

    while (idade >= 0)
    {
        cont++;
        sum += idade;
        scanf("%lf", &idade);
    }
    media = sum / cont;
    printf("%.2lf\n", media);

    return 0;
}