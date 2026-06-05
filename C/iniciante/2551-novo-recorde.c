#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int t, d;
        double v, vmax = 0;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d", &t, &d);

            v = (double)d / t;

            if (v > vmax)
            {
                vmax = v;
                printf("%d\n", i);
            }
        }
    }

    return 0;
}