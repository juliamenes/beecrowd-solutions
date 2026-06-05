#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++)
    {
        char acao[8];

        scanf("%s", acao);

        if (strcmp(acao, "fechou") == 0)
            a++;
        else
            a--;
    }
    printf("%d\n", a);

    return 0;
}