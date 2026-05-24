#include <stdio.h>

int main()
{
    int comb, alcool = 0, gas = 0, diesel = 0;
    scanf("%d", &comb);

    while (comb != 4)
    {
        if (comb == 1)
            alcool++;
        else if (comb == 2)
            gas++;
        else if (comb == 3)
            diesel++;
        scanf("%d", &comb);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gas, diesel);

    return 0;
}