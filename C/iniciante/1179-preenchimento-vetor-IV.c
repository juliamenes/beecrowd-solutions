#include <stdio.h>

int main()
{
    int n, par[5], impar[5], cont1 = 0, cont = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            par[cont1] = n;
            cont1++;

            if (cont1 == 5)
            {
                cont1 = 0;
                for (int j = 0; j < 5; j++)
                {

                    printf("par[%d] = %d\n", j, par[j]);
                }
            }
        }
        else
        {
            impar[cont] = n;
            cont++;

            if (cont == 5)
            {
                cont = 0;
                for (int j = 0; j < 5; j++)
                {

                    printf("impar[%d] = %d\n", j, impar[j]);
                }
            }
        }
    }
    for (int i = 0; i < cont; i++)
    {

        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < cont1; i++)
    {

        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}