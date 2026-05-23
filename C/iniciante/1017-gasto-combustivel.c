#include <stdio.h>

int main()
{
    double t, v, l;
    scanf("%lf\n %lf", &t, &v);

    l = (v * t) / 12;

    printf("%.3lf\n", l);

    return 0;
}