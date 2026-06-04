#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {

        int m[n][n];

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                if (i == j)
                {
                    m[i][j] = 2;
                }
                else
                {
                    m[i][j] = 0;
                }
                if (j == (n - 1 - i))
                {
                    m[i][j] = 3;
                }
            }
        }
        int inicio = n / 3;
        int fim = n - inicio;

        for (int i = inicio; i < fim; i++)
            for (int j = inicio; j < fim; j++)
                m[i][j] = 1;

        m[n / 2][n / 2] = 4;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                printf("%d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}