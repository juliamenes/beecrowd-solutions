#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int h, m, o;
        scanf("%d %d %d", &h, &m, &o);

        if (o)
            printf("%02d:%02d - A porta abriu!\n", h, m);
        else
            printf("%02d:%02d - A porta fechou!\n", h, m);
    }

    return 0;
}