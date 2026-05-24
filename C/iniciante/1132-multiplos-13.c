#include <stdio.h>

int main()
{
    int x, y, soma = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int troca = x;
        x = y;
        y = troca;
    }

    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            soma += i;
    }
    printf("%d\n", soma);

    return 0;
}