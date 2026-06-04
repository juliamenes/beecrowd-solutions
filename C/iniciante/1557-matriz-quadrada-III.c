#include <stdio.h>

int main()
{
    unsigned short int n;
    scanf("%hu", &n);

    while (n != 0)
    {
        int scrr = 1, m[n][n];

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                m[i][j] = scrr;
                scrr *= 2;
            }
            scrr = m[i][0] * 2;
        }

        int t, digitos = 0;
        t = m[n - 1][n - 1];

        do
        {
            t /= 10;
            digitos++;

        } while (t > 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%*d", digitos, m[i][j]);
                else
                    printf(" %*d", digitos, m[i][j]);
            }

            printf("\n");
        }

        printf("\n");
        scanf("%hu", &n);
    }

    return 0;
}