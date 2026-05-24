#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        int x, cont = 0;
        scanf("%d", &x);

        for (int j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                cont += j;
            }
        }
        if (cont == x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);

        cont = 0;
    }

    return 0;
}