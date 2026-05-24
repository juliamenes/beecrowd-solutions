#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double a, b, c, media;

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        media = (2 * a + 3 * b + 5 * c) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}