#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cont = 0, cont1 = 0, valores;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &valores);

        if (valores >= 10 && valores <= 20)
            cont++;
        else
            cont1++;
    }
    printf("%d in\n", cont);
    printf("%d out\n", cont1);

    return 0;
}