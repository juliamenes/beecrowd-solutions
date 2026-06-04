#include <stdio.h>

int main()
{
    int n, menor, indice = 0;
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    menor = t[0];

    for (int i = 0; i < n; i++)
    {
        if (t[i] < menor)
        {
            menor = t[i];
            indice = i;
        }
    }
    printf("%d\n", indice + 1);

    return 0;
}