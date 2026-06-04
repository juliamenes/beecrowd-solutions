#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    a--;
    b--;
    c--;

    printf("%d\n", a + b + c + d);

    return 0;
}