#include <stdio.h>

int main()
{
    int n, animau, sum_animal = 0, sum_frog = 0, sum_rat = 0, sum_rab = 0;
    scanf("%d", &n);

    char animal;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &animau, &animal);

        sum_animal += animau;

        if (animal == 'C')
        {
            sum_rab += animau;
        }
        else if (animal == 'S')
        {
            sum_frog += animau;
        }
        else
        {
            sum_rat += animau;
        }
    }
    printf("Total: %d cobaias\n", sum_animal);
    printf("Total de coelhos: %d\n", sum_rab);
    printf("Total de ratos: %d\n", sum_rat);
    printf("Total de sapos: %d\n", sum_frog);
    printf("Percentual de coelhos: %.2lf %%\n", ((double)sum_rab / (double)sum_animal) * 100);
    printf("Percentual de ratos: %.2lf %%\n", ((double)sum_rat / (double)sum_animal) * 100);
    printf("Percentual de sapos: %.2lf %%\n", ((double)sum_frog / (double)sum_animal) * 100);

    return 0;
}