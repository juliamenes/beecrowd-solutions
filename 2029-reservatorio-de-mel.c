#include <stdio.h>

int main()
{
    double volume, diametro, altura, area;
    double pi = 3.14;

    while (scanf("%lf", &volume) != EOF)
    {
        scanf("%lf", &diametro);

        double raio = diametro / 2;
        area = pi * raio * raio;
        altura = volume / area;
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}