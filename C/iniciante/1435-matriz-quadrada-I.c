#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {

        int m[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                m[i][j] = i + 1;

                if (j + 1 < m[i][j])
                {
                    m[i][j] = j + 1;
                }
                if (n - (i + 1) + 1 < m[i][j])
                {
                    m[i][j] = n - (i + 1) + 1;
                }
                if (n - (j + 1) + 1 < m[i][j])
                {
                    m[i][j] = n - (j + 1) + 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3hd", m[i][j]);
                else
                    printf(" %3hd", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}