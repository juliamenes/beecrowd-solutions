#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {

        int nota, ch, num = 0, den = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &nota, &ch);

            num += nota * ch;
            den += ch;
        }
        printf("%.4lf\n", num / (den * 100.0));
    }

    return 0;
}