#include <stdio.h>

char conceito(int x)
{
    if (x == 0)
        return 'E';
    else if (x < 36)
        return 'D';
    else if (x < 61)
        return 'C';
    else if (x < 86)
        return 'B';
    else
        return 'A';
}

int main()
{
    int n;
    scanf("%d", &n);

    char nota;
    nota = conceito(n);
    printf("%c\n", nota);

    return 0;
}