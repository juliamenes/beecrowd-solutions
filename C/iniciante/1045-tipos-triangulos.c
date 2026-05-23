#include <stdio.h>

int main()
{
    double A, B, C, nA, nB, nC;
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A >= B) && (A >= C))
        nA = A;
    else if ((B >= A) && (B >= C))
        nA = B;
    else if ((C >= A) && (C >= B))
        nA = C;

    if (((A <= C) && (A >= B)) || ((A >= C) && (A <= B)))
        nB = A;
    else if (((B <= C) && (B >= A)) || ((B >= C) && (B <= A)))
        nB = B;
    else if (((C <= B) && (C >= A)) || ((C >= B) && (C <= A)))
        nB = C;

    if ((A <= B) && (A <= C))
        nC = A;
    else if ((B <= A) && (B <= C))
        nC = B;
    else if ((C <= A) && (C <= B))
        nC = C;

    if (nA >= nB + nC)
        printf("NAO FORMA TRIANGULO\n");
    else if (nA * nA == nB * nB + nC * nC)
        printf("TRIANGULO RETANGULO\n");
    else if (nA * nA > nB * nB + nC * nC)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (nA * nA < nB * nB + nC * nC)
        printf("TRIANGULO ACUTANGULO\n");

    if ((nA == nB) && (nA == nC))
        printf("TRIANGULO EQUILATERO\n");
    else if ((nA == nB) || (nA == nC) || (nB == nC))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}