#include <stdio.h>

int main()
{

    double valor;
    scanf("%lf", &valor);

    int valorInt = (int)(valor * 100 + 0.5);
    // O + 0.5 força o arredondamento correto antes do truncamento.

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", valorInt / 10000);
    valorInt %= 10000;
    printf("%d nota(s) de R$ 50.00\n", valorInt / 5000);
    valorInt %= 5000;
    printf("%d nota(s) de R$ 20.00\n", valorInt / 2000);
    valorInt %= 2000;
    printf("%d nota(s) de R$ 10.00\n", valorInt / 1000);
    valorInt %= 1000;
    printf("%d nota(s) de R$ 5.00\n", valorInt / 500);
    valorInt %= 500;
    printf("%d nota(s) de R$ 2.00\n", valorInt / 200);
    valorInt %= 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", valorInt / 100);
    valorInt %= 100;
    printf("%d moeda(s) de R$ 0.50\n", valorInt / 50);
    valorInt %= 50;
    printf("%d moeda(s) de R$ 0.25\n", valorInt / 25);
    valorInt %= 25;
    printf("%d moeda(s) de R$ 0.10\n", valorInt / 10);
    valorInt %= 10;
    printf("%d moeda(s) de R$ 0.05\n", valorInt / 5);
    valorInt %= 5;
    printf("%d moeda(s) de R$ 0.01\n", valorInt);

    return 0;
}