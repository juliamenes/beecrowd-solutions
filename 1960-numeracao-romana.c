#include <stdio.h>

void escreve(int digito, char um, char cinco, char dez)
{
    if (digito == 9)
    {
        printf("%c%c", um, dez);
        return;
    }
    else if (digito == 4)
    {
        printf("%c%c", um, cinco);
        return;
    }

    if (digito > 4)
    {
        printf("%c", cinco);
        digito -= 5;
    }
    for (int i = 0; i < digito; ++i)
    {
        printf("%c", um);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    escreve(n / 100, 'C', 'D', 'M');
    n %= 100;
    escreve(n / 10, 'X', 'L', 'C');
    n %= 10;
    escreve(n, 'I', 'V', 'X');
    printf("\n");

    return 0;
}