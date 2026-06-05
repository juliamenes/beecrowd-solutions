#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double ans;

    if (n == 0)
    {
        ans = 1;
    }
    else
    {
        ans = 2;

        for (int i = 1; i < n; i++)
        {
            ans = 2 + (1 / ans);
        }

        ans = 1 + (1 / ans);
    }
    printf("%.10lf\n", ans);

    return 0;
}