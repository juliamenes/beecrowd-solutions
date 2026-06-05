#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char vilao[30];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", vilao);
        printf("Y\n");
    }

    return 0;
}