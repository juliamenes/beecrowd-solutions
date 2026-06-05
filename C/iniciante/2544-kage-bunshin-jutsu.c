#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        // 2 elevado a q numero resulta em n?
        //  esse codigo envolve simplesmente logaritmo
        int count = 0;
        while (n > 1)
        {
            n /= 2;
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}