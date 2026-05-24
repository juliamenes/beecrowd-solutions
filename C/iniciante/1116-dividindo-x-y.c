#include <stdio.h>

int main()
{
    int n;
    float divisao, x, y;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%f %f", &x, &y);

        divisao = x / y;

        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", divisao);
    }

    return 0;
}