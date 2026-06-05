#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > c && a + c > b)
    {
        if (a == b && b == c)
            printf("Valido-Equilatero\n");
        else if (a == b || b == c || a == c)
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");

        if (c * c == (a * a + b * b) || a * a == (b * b + c * c) || b * b == (a * a + c * c))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");

    return 0;
}