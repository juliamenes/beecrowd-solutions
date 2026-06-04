#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int newton;
    char hero[15];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", hero, &newton);

        if (strcmp(hero, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}