#include <stdio.h>

int main()
{

    int n, saque = 0, bloqueio = 0, ataque = 0, s1 = 0, b1 = 0, a1 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char j[50];
        scanf("%s", j);

        int s, b, a, ss, bb, aa, sum = 0;
        scanf("%d %d %d", &s, &b, &a);
        saque += s;
        bloqueio += b;
        ataque += a;
        scanf("%d %d %d", &ss, &bb, &aa);
        s1 += ss;
        b1 += bb;
        a1 += aa;
    }
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", (((double)s1 / (double)saque)) * 100, ((double)b1 / (double)bloqueio) * 100, ((double)a1 / (double)ataque) * 100);

    return 0;
}