#include <stdio.h>

int main()
{
    int a, b, c, sum = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
        a = 24;

    sum = a + b + c;

    if (sum >= 24)
    {
        sum -= 24;
    }

    if (sum == 0)
        printf("0\n");
    else
        printf("%d\n", sum);
    return 0;
}