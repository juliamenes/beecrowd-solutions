#include <stdio.h>

int mat[101][101];

int vigilancia(int x, int y)
{
    return mat[x][y] + mat[x][y + 1] + mat[x + 1][y] + mat[x + 1][y + 1] >= 2;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", vigilancia(i, j) ? 'S' : 'U');
        }
        printf("\n");
    }

    return 0;
}