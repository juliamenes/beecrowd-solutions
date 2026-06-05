#include <stdio.h>

void exe(double x, char nome[30])
{
    double j[7], menor, maior = 0, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%lf", &j[i]);

        if (j[i] > maior)
            maior = j[i];
    }
    menor = j[0];

    for (int i = 0; i < 7; i++)
    {
        if (j[i] < menor)
            menor = j[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (j[i] != menor && j[i] != maior)
            sum += j[i];
    }

    printf("%s %.2lf\n", nome, sum * x);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char nome[30];
        scanf("%s", nome);

        double grau;
        scanf("%lf", &grau);

        exe(grau, nome);
    }

    return 0;
}