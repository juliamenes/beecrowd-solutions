#include <stdio.h>

int main()
{
    int c;
    char op;
    double m[12][12], soma = 0;

    scanf("%d %c", &c, &op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);

            if (j == c)
                soma += m[i][j];
        }
    }

    if (op == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
        printf("%.1lf\n", soma / 12);

    return 0;
}