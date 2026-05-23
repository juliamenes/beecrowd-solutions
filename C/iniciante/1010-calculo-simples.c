#include <stdio.h>

int main()
{
    int c1, p1, c2, p2;
    float v1, v2, r1, r2, total;
    scanf("%d %d %f", &c1, &p1, &v1);
    scanf("%d %d %f", &c2, &p2, &v2);

    r1 = p1 * v1;
    r2 = p2 * v2;

    total = r1 + r2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}