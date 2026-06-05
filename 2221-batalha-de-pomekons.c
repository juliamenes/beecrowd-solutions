#include <stdio.h>

void golpe(int n)
{
    for (int i = 0; i < n; i++)
    {
        int bonus;
        scanf("%d", &bonus);

        int a, d, l, sum = 0, soma = 0;
        scanf("%d %d %d", &a, &d, &l);
        sum = (a + d) / 2;

        if (l % 2 == 0)
            sum += bonus;

        scanf("%d %d %d", &a, &d, &l);
        soma = (a + d) / 2;

        if (l % 2 == 0)
            soma += bonus;

        if (soma == sum)
            printf("Empate\n");
        else if (sum > soma)
            printf("Dabriel\n");
        else
            printf("Guarte\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    golpe(n);

    return 0;
}