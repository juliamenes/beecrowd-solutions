#include <stdio.h>

int main()
{

    char raiz[14], classe[10], habitoAlimentar[12];
    scanf("%s", raiz);
    scanf("%s", classe);
    scanf("%s", habitoAlimentar);

    if (raiz[0] == 'v')
    {
        if (classe[0] == 'a')
        {
            if (habitoAlimentar[0] == 'c')
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if (habitoAlimentar[0] == 'o')
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if (classe[0] == 'i')
        {
            if (habitoAlimentar[2] == 'm')
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if (habitoAlimentar[0] == 'h')
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}