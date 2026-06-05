#include <stdio.h>

int main()
{
    int n, i;

    while (scanf("%d %d", &n, &i) != EOF)
    {
        int cont = 0, ident, jg;

        for (int j = 0; j < n; j++)
        {
            scanf("%d %d", &ident, &jg);

            if (ident == i && jg == 0)
            {
                cont++;
            }
        }
        printf("%d\n", cont);
    }

    return 0;
}