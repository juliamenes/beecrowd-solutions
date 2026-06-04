#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001], ch;
    scanf("%s", str);

    int n;
    n = strlen(str);

    for (int i = 0; i < n / 2; i++)
    {
        ch = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = ch;
    }
    printf("%s\n", str);

    return 0;
}