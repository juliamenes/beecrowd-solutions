#include <stdio.h>

int main()
{
    float a, b, c, tudum;
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        tudum = a + b + c;
        printf("Perimetro = %.1f\n", tudum);
    }
    else
    {
        tudum = ((a + b) * c) / 2;
        printf("Area = %.1f\n", tudum);
    }

    return 0;
}