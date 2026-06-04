#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char j1[10], j2[10];
        scanf("%s %s", j1, j2);

        if (strcmp(j1, "papel") == 0 && strcmp(j2, "papel") == 0)
            printf("Ambos venceram\n");
        else if (strcmp(j1, "pedra") == 0 && strcmp(j2, "pedra") == 0)
            printf("Sem ganhador\n");
        else if (strcmp(j1, "ataque") == 0 && strcmp(j2, "ataque") == 0)
            printf("Aniquilacao mutua\n");
        else if (strcmp(j1, "ataque") == 0 && strcmp(j2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(j1, "papel") == 0 && strcmp(j2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        else if (strcmp(j1, "ataque") == 0 && strcmp(j2, "pedra") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(j1, "pedra") == 0 && strcmp(j2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        else if (strcmp(j1, "pedra") == 0 && strcmp(j2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(j1, "papel") == 0 && strcmp(j2, "pedra") == 0)
            printf("Jogador 2 venceu\n");
    }

    return 0;
}