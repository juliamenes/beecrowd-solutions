#include <stdio.h>

int main()
{
    int n, ano, mes;
    scanf("%d", &n);

    ano = n / 365;
    n %= 365;
    mes = n / 30;
    n %= 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, n);

    return 0;
}