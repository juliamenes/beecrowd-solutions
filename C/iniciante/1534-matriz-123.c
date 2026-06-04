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
                    m[i][j] = 1;
                }
                else
                {
                    m[i][j] = 3;
                }
                if (j == (n - 1 - i))
                {
                    m[i][j] = 2;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}