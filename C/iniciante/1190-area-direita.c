#include <stdio.h>

int main()
{
    char op;
    scanf(" %c", &op);

    double m[12][12], sum = 0;
    int cont = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 1; i < 11; i++)
    {
        if (i < 6)
        {
            for (int j = 12 - i; j < 12; j++)
            {
                sum += m[i][j];
                cont++;
            }
        }
        else
        {
            for (int j = i + 1; j < 12; j++)
            {
                sum += m[i][j];
                cont++;
            }
        }
    }

    if (op == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / cont);

    return 0;
}