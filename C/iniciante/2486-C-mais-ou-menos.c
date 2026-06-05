#include <stdio.h>
#include <string.h>

int calc(int q, char str[])
{
    int sum;

    if (strcmp(str, "suco de laranja") == 0)
    {
        sum = (q * 120);
    }
    else if (strcmp(str, "morango fresco") == 0 || strcmp(str, "mamao") == 0)
    {
        sum = (q * 85);
    }
    else if (strcmp(str, "goiaba vermelha") == 0)
    {
        sum = (q * 70);
    }
    else if (strcmp(str, "manga") == 0)
    {
        sum = (q * 56);
    }
    else if (strcmp(str, "laranja") == 0)
    {
        sum = (q * 50);
    }
    else if (strcmp(str, "brocolis") == 0)
    {
        sum = (q * 34);
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int q;
            scanf("%d", &q);
            char str[50];
            scanf(" %[^\n]", str);

            sum += calc(q, str);
        }

        if (sum > 130)
        {
            printf("Menos %d mg\n", sum - 130);
        }
        else if (sum < 110)
        {
            printf("Mais %d mg\n", 110 - sum);
        }
        else
        {
            printf("%d mg\n", sum);
        }

        scanf("%d", &n);
    }

    return 0;
}