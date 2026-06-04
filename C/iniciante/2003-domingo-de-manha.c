#include <stdio.h>

int main()
{
    unsigned int hora, minuto;
    char ponto;

    while (scanf("%u%c%u", &hora, &ponto, &minuto) != EOF)
    {
        if (hora >= 5 && hora <= 6)
            printf("Atraso maximo: %u\n", 0);
        else if (hora == 7)
            printf("Atraso maximo: %u\n", minuto);
        else if (hora == 8)
            printf("Atraso maximo: %u\n", 60 + minuto);
        else if (hora == 9)
            printf("Atraso maximo: %u\n", 120 + minuto);
    }

    return 0;
}