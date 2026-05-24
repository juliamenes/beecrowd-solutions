#include <stdio.h>

int main()
{
    int novogrenal;
    int inter, gremio, grenais = 0, empate = 0, intergols = 0, gremiogols = 0;

    do
    {
        scanf("%d %d", &inter, &gremio);
        grenais++;
        if (inter > gremio)
            intergols++;
        if (inter < gremio)
            gremiogols++;
        if (inter == gremio)
            empate++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novogrenal);

    } while (novogrenal == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\nGremio:%d\n", intergols, gremiogols);
    printf("Empates:%d\n", empate);

    if (intergols > gremiogols)
        printf("Inter venceu mais\n");
    if (gremiogols > intergols)
        printf("Gremio venceu mais\n");
    if (intergols == gremiogols)
        printf("Nao houve vencedor\n");

    return 0;
}