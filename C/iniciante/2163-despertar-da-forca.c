#include <stdio.h>

int main()
{
    int x, y, n = 0, m = 0;
    scanf("%d %d", &x, &y);

    int mat[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (mat[i][j] == 42)
            {
                if (mat[i][j - 1] == 7 && mat[i][j + 1] == 7 && mat[i - 1][j] == 7 && mat[i - 1][j - 1] == 7 && mat[i - 1][j + 1] == 7 && mat[i + 1][j] == 7 && mat[i + 1][j - 1] == 7 && mat[i + 1][j + 1] == 7)
                {

                    n = i;
                    m = j;
                }
            }
        }
    }
    if (n == 0 && m == 0)
        printf("0 0\n");
    else
        printf("%d %d\n", n + 1, m + 1);

    return 0;
}