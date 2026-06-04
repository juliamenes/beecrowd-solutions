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

                if (i == j)
                {
                    m[i][j] = 1;
                }
                else if (i < j)
                {
                    m[i][j] = j - i + 1;
                }
                else
                {
                    m[i][j] = i - j + 1;
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