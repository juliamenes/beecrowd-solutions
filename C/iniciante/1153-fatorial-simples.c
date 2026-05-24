#include <stdio.h>

int main()
{
    int x, fatorial = 1;
    scanf("%d", &x);

    for (int i = x; i >= 1; i--)
    {

        fatorial *= i;
    }
    printf("%d\n", fatorial);

    return 0;
}