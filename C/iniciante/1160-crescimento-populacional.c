#include <stdio.h>

int main()
{
    int t, pA, pB, cont = 0;
    double g1, g2;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {

        scanf("%d %d %lf %lf", &pA, &pB, &g1, &g2);
        cont = 0;

        while (pA <= pB && cont < 101)
        {

            pA += (int)(pA * (g1 / 100));
            pB += (int)(pB * (g2 / 100));
            cont++;
        }
        if (cont <= 100)
            printf("%d anos.\n", cont);
        else
            printf("Mais de 1 seculo.\n");
    }

    return 0;
}