#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int m, l;
        scanf("%d %d", &m, &l);

        int mar[m][n], leo[l][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &mar[i][j]);
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &leo[i][j]);
            }
        }

        int cm, cl, a;
        scanf("%d %d", &cm, &cl);

        scanf("%d", &a);

        if (leo[cl - 1][a - 1] > mar[cm - 1][a - 1])
            printf("Leonardo\n");
        else if (leo[cl - 1][a - 1] < mar[cm - 1][a - 1])
            printf("Marcos\n");
        else
            printf("Empate\n");
    }

    return 0;
}