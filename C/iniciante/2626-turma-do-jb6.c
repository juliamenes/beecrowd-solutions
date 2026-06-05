#include <stdio.h>
#include <string.h>

int pedra_papel_tesoura(char *jogada1, char *jogada2)
{
    return (strcmp(jogada1, "tesoura") == 0 && strcmp(jogada2, "papel") == 0) || (strcmp(jogada1, "pedra") == 0 && strcmp(jogada2, "tesoura") == 0) || (strcmp(jogada1, "papel") == 0 && strcmp(jogada2, "pedra") == 0);
}

int main()
{
    char dodo[10], leo[10], pepper[10];

    while (scanf("%s %s %s", dodo, leo, pepper) != EOF)
    {
        if (pedra_papel_tesoura(dodo, leo) && pedra_papel_tesoura(dodo, pepper))
        {
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }
        else if (pedra_papel_tesoura(leo, dodo) && pedra_papel_tesoura(leo, pepper))
        {
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        }
        else if (pedra_papel_tesoura(pepper, dodo) && pedra_papel_tesoura(pepper, leo))
        {
            printf("Urano perdeu algo muito precioso...\n");
        }
        else
        {
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
    }
    return 0;
}