#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {

        int maior = 0, lesma;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &lesma);

            if (lesma > maior)
            {
                maior = lesma;
            }
        }
        if (maior < 10)
            printf("1\n");
        else if (maior >= 10 && maior < 20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}