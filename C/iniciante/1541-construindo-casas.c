#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    while (a != 0)
    {
        int terreno;
        terreno = sqrt((a * b) / (double)(c / 100.0));
        printf("%d\n", terreno);

        scanf("%d %d %d", &a, &b, &c);
    }

    return 0;
}