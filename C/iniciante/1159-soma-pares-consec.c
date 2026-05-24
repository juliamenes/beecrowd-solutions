#include <stdio.h>

int main()
{
    int n, cont = 5, soma = 0;
    scanf("%d", &n);

    while (n != 0)
    {

        while (cont != 0)
        {
            if (n % 2 == 0)
            {
                soma += n;
                cont--;
            }
            n++;
        }
        printf("%d\n", soma);
        soma = 0;
        cont = 5;

        scanf("%d", &n);
    }

    return 0;
}