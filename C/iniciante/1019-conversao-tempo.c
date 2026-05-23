#include <stdio.h>

int main()
{
    int tempo, hora, min;
    scanf("%d", &tempo);

    hora = tempo / 3600;
    tempo %= 3600;
    min = tempo / 60;
    tempo %= 60;
    // o resto da ultima divisao sao os segundos
    printf("%d:%d:%d\n", hora, min, tempo);

    return 0;
}