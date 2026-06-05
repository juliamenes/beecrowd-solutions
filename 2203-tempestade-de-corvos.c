#include <stdio.h>
#include <math.h>

int main()
{
    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    while (scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF)
    {
        float distancia_inicial, distancia_final, fuga = Vi * 1.5, alcance;

        distancia_inicial = sqrt((Xi - Xf) * (Xi - Xf) + (Yi - Yf) * (Yi - Yf));
        distancia_final = distancia_inicial + fuga;

        alcance = R1 + R2;

        if (alcance > distancia_final)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}