#include <stdio.h>
#include <string.h>

int main()
{
    int i, soma = 0;
    char corvo[10];
    for (i = 1; i <= 3; i++)
    {
        soma = 0;
        while (1)
        {
            fgets(corvo, 10, stdin);
            if (corvo[0] == 'c')
                break;

            if (corvo[0] == '-')
            {
                if (corvo[1] == '-')
                {
                    if (corvo[2] == '-')
                        soma += 0;
                    else
                        soma += 1;
                }
                else
                {
                    if (corvo[2] == '-')
                        soma += 2;
                    else
                        soma += 3;
                }
            }
            else if (corvo[0] == '*')
            {
                if (corvo[1] == '-')
                {
                    if (corvo[2] == '-')
                        soma += 4;
                    else
                        soma += 5;
                }
                else
                {
                    if (corvo[2] == '-')
                        soma += 6;
                    else
                        soma += 7;
                }
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}