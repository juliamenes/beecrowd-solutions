#include <stdio.h>

int main()
{
    double n, matri, nota, maior = 0, alu;
    scanf("%lf", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &matri, &nota);

        if (nota > maior)
        {
            maior = nota;
            alu = matri;
        }
    }
    if (maior >= 8)
    {
        printf("%.0lf\n", alu);
    }
    else
    {
        printf("Minimum note not reached\n");
    }

    return 0;
}