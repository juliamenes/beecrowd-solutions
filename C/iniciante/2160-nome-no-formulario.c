#include <stdio.h>
#include <string.h>

int main()
{
    char str[501];
    fgets(str, 501, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("%s\n", strlen(str) <= 80 ? "YES" : "NO");

    return 0;
}