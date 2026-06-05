#include <stdio.h>

int main()
{
    char alfa[27];
    while (scanf("%s", alfa) != EOF)
    {

        int n, letras;
        scanf("%d", &n);

        char beto[n + 1];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &letras);

            beto[i] = alfa[letras - 1];
        }
        beto[n] = '\0';

        printf("%s\n", beto);
    }

    return 0;
}