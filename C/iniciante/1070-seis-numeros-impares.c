#include <stdio.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);

    if (n % 2 == 0)
        n++;

    while (x != 6)
    {
        if (n % 2 != 0)
        {
            printf("%d\n", n);
            x++;
            n += 2;
        }
    }

    return 0;
}