#include <stdio.h>

int main()
{
    int a, b, pulo = 0;
    scanf("%d %d", &a, &b);

    int n[b];

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < b - 1; i++)
    {

        if ((n[i + 1] - n[i] > a) || (n[i + 1] - n[i] < -a))
        {
            pulo++;
        }
    }
    if (pulo == 0)
    {
        printf("YOU WIN\n");
    }
    else
        printf("GAME OVER\n");

    return 0;
}