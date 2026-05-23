#include <stdio.h>

int main()
{
    int km;
    double combus, res;
    scanf("%d\n%lf", &km, &combus);

    res = km / combus;

    printf("%.3lf km/l\n", res);

    return 0;
}