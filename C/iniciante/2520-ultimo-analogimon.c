#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {

        int m[a][b], um = 0, dois = 0;

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &m[i][j]);
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (m[i][j] == 1 || m[i][j] == 2)
                {
                    if (um == 0)
                        um += i;
                    else
                        um -= i;

                    if (dois == 0)
                        dois += j;
                    else
                        dois -= j;
                }
            }
        }
        if (um < 0)
            um *= -1;
        if (dois < 0)
            dois *= -1;

        printf("%d\n", um + dois);
    }

    return 0;
}