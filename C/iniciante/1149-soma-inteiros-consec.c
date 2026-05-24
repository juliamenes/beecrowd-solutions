#include <stdio.h>

int main()
{
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);

    while (b <= 0)
    {
        scanf("%d", &b);
    }
    for (int i = 0; i < b; i++)
    {
        soma = soma + a + i;
    }
    printf("%d\n", soma);

    return 0;
}