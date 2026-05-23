#include <stdio.h>

int main()
{
    int codigo, espec;
    double total;
    scanf("%d %d", &codigo, &espec);

    if (codigo == 1)
        total = 4.00 * espec;
    else if (codigo == 2)
        total = 4.50 * espec;
    else if (codigo == 3)
        total = 5.00 * espec;
    else if (codigo == 4)
        total = 2.00 * espec;
    else if (codigo == 5)
        total = 1.50 * espec;
    printf("Total: R$ %.2lf\n", total);

    return 0;
}