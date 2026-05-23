#include <stdio.h>

int main()
{
    int a, b, c, d, hora, minuto;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    hora = c - a;
    minuto = d - b;

    if (minuto < 0)
    {
        minuto += 60;
        hora--;
    }

    if (hora < 0)
    {
        hora += 24;
    }
    if ((a == c) && (b == d))
    {
        hora = 24;
        minuto = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

    return 0;
}