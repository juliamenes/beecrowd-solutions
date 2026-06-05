#include <stdio.h>

int main()
{
    int pessoas, altMin, altMax, alt;

    while (scanf("%d %d %d", &pessoas, &altMin, &altMax) != EOF)
    {
        int cont = 0;

        for (int i = 0; i < pessoas; i++)
        {
            scanf("%d", &alt);

            if (alt >= altMin && alt <= altMax)
                cont++;
        }
        printf("%d\n", cont);
    }

    return 0;
}