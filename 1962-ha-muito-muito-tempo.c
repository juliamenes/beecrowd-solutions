#include <stdio.h>

int main()
{
    int n, x, ano;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x < 2015)
        {
            ano = 2015 - x;
            printf("%d D.C.\n", ano);
        }
        else
        {
            ano = x - 2014;
            printf("%d A.C.\n", ano);
        }
    }
    return 0;
}