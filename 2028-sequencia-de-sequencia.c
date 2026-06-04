#include <stdio.h>

int main()
{
    int n, caso = 1;

    while (scanf("%d", &n) != EOF)
    {
        int sum = 0;

        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        sum += 1; // Para incluir o "0"

        if (n == 0)
            printf("Caso %d: %d numero\n", caso, sum);
        else
            printf("Caso %d: %d numeros\n", caso, sum);

        printf("0");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" %d", i);
            }
        }
        printf("\n\n");

        caso++;
    }

    return 0;
}