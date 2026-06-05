#include <stdio.h>

int main()
{
    int n, p, r, slv = 0;
    scanf("%d", &n);

    scanf("%d", &p);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &r);

        if (r < p)
        {
            slv = i;
        }
        p = r;

        if (slv > 0)
            break;
    }
    printf("%d\n", slv != 0 ? ++slv : 0);

    return 0;
}