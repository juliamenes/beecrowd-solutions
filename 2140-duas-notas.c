#include <stdio.h>

int main()
{
    int trocos[] = {4, 7, 10, 12, 15, 20, 22, 25, 30, 40, 52, 55, 60, 70, 100, 102, 105, 110, 120, 150, 200};

    int N, M;
    scanf("%d %d", &N, &M);

    while (N != 0 && M != 0)
    {
        int troco = M - N, possivel = 0;
        for (int i = 0; i < 21; ++i)
        {
            if (troco == trocos[i])
            {
                possivel = 1;
                break;
            }
        }

        printf("%spossible\n", possivel ? "" : "im");

        scanf("%d %d", &N, &M);
    }

    return 0;
}