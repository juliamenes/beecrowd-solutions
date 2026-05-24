#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char letra;
    scanf(" %c", &letra);
    double mat[12][12];

    for (int i = 0; i < 12; i++)
    {

        for (int j = 0; j < 12; j++)
        {

            scanf("%lf", &mat[i][j]);
        }
    }
    double soma = 0;

    for (int i = 0; i < 12; i++)
    {

        soma += mat[n][i];
    }
    if (letra == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}