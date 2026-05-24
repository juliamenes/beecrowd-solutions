#include <stdio.h>

int main()
{
    int x, z, soma = 0, cont = 1;
    scanf("%d\n%d", &x, &z);

    while (z <= x)
    {
        scanf("%d", &z);
    }

    for (int i = x; i <= z; i++)
    {

        soma += i;
        if (soma > z)
            break;
        cont++;
    }
    printf("%d\n", cont);

    return 0;
}