#include <stdio.h>

int main()
{
    int n, num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if (num == 0)
            printf("NULL\n");

        else if (num % 2 == 0)
            printf("EVEN ");
        else if (num % 2 != 0)
            printf("ODD ");
        if (num > 0)
            printf("POSITIVE\n");
        if (num < 0)
            printf("NEGATIVE\n");
    }

    return 0;
}