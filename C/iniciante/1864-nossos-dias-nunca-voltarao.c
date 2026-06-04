#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char str[] = "LIFE IS NOT A PROBLEM TO BE SOLVED\0";

    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}