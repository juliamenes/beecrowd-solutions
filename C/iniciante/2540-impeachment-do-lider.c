#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int votos, cont = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &votos);

            if (votos)
                cont++;
        }
        printf("%s\n", cont >= 2.0 * n / 3.0 ? "impeachment" : "acusacao arquivada");
    }

    return 0;
}