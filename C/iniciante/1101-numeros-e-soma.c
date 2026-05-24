#include <stdio.h>

int main()
{
    int a, b, troca;
    scanf("%d %d", &a, &b);

    while (a > 0 && b > 0)
    {
        int soma = 0;
        if (a > b)
        {
            troca = a;
            a = b;
            b = troca;
        }
        for (int i = a; i <= b; i++)
        {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);

        scanf("%d %d", &a, &b);
    }

    return 0;
}