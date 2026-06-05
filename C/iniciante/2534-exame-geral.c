#include <stdio.h>

int main()
{
    int n, q;

    while (scanf("%d %d", &n, &q) != EOF)
    {
        int vet[n], troca, num;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vet[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (vet[j] < vet[j + 1])
                {
                    troca = vet[j];
                    vet[j] = vet[j + 1];
                    vet[j + 1] = troca;
                }
            }
        }
        for (int i = 0; i < q; i++)
        {
            scanf("%d", &num);

            printf("%d\n", vet[num - 1]);
        }
    }

    return 0;
}