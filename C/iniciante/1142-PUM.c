#include <stdio.h>

int main()
{
    int n, num = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        num++;

        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("PUM\n");
    }

    return 0;
}