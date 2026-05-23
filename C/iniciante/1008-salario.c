#include <stdio.h>

int main()
{
    int num, hora;
    double valor, total;
    scanf("%d\n%d\n%lf", &num, &hora, &valor);

    total = hora * valor;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, total);

    return 0;
}