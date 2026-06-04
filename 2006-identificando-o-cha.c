#include <stdio.h>

int main()
{
    int cha, competidor, conta = 0;
    scanf("%d", &cha);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &competidor);

        if (competidor == cha)
            conta++;
    }
    printf("%d\n", conta);

    return 0;
}