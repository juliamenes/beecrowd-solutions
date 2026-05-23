#include <stdio.h>

int main()
{
    int inicio, fim, horas;
    scanf("%d %d", &inicio, &fim);

    if (inicio > fim)
        horas = 24 - (inicio - fim);
    else if (inicio < fim)
        horas = fim - inicio;
    else
        horas = 24;

    printf("O JOGO DUROU %d HORA(S)\n", horas);

    return 0;
}