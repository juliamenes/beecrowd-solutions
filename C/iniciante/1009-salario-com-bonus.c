#include <stdio.h>

int main()
{
    char nome[20];
    float salarioFixo, vendas;

    scanf("%s", nome);
    scanf("%f %f", &salarioFixo, &vendas);

    printf("TOTAL = R$ %.2f\n", salarioFixo + (vendas * 0.15));

    return 0;
}