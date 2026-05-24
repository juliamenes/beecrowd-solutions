#include <stdio.h>

int main()
{
    int n, a, b, soma = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);

        while (b != 0)
        {
            if (a % 2 != 0)
            {
                soma += a;
                b--;
            }
            a++;
        }
        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}