#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[10000];

    double k;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);

        k = strlen(str);
        printf("%.2lf\n", k / 100);
    }

    return 0;
}