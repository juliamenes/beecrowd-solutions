#include <stdio.h>

int main()
{
    double renda, imposto;

    scanf("%lf", &renda);

    if (renda <= 2000.00)
        printf("Isento\n");
    else if (renda <= 3000.00)
    {
        renda = (renda - 2000) * 0.08;
        printf("R$ %.2lf\n", renda);
    }
    else if (renda <= 4500.00)
    {
        renda = 80 + ((renda - 3000) * 0.18);
        printf("R$ %.2lf\n", renda);
    }
    else
    {
        renda = 350 + (renda - 4500) * 0.28;
        printf("R$ %.2lf\n", renda);
    }

    // 350 = 270 dos 1500*0.18 e 80 dos 1000*0.08

    return 0;
}