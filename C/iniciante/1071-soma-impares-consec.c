#include <stdio.h>

int main()
{
    int x, y, conta = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int troca = x;
        x = y;
        y = troca;
    }

    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
            conta += i;
    }

    printf("%d\n", conta);

    return 0;
}