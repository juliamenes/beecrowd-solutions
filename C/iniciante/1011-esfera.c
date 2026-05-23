#include <stdio.h>

int main()
{
    int volume;
    double resultado;
    scanf("%d", &volume);

    resultado = (4.0 / 3) * 3.14159 * volume * volume * volume;
    printf("VOLUME = %.3lf\n", resultado);

    return 0;
}