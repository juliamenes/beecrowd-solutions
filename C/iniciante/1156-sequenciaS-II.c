#include <stdio.h>

int main()
{
    double s = 0, a = 1, b = 1;

    while (a <= 39)
    {
        s += a / b;
        a += 2;
        b *= 2;
    }
    printf("%.2lf\n", s);

    return 0;
}