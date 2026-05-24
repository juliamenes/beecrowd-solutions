#include <stdio.h>

int main()
{
    int x, y, n = 1;
    scanf("%d %d", &x, &y);

    do
    {
        for (int j = 1; j <= x; j++)
        {
            if (j == x)
                printf("%d\n", n);
            else
                printf("%d ", n);
            n++;
        }
    } while (n <= y);

    return 0;
}