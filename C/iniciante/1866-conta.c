#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x, k, soma;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}