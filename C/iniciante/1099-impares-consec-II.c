#include <stdio.h>

int main()
{
    int n, x, y, troca, soma = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            troca = x;
            x = y;
            y = troca;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
                soma += j;
        }
        printf("%d\n", soma);

        soma = 0;
    }

    return 0;
}