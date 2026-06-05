#include <stdio.h>

int main()
{
    char musgas[11][15] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%s\n", musgas[x + y]);
    }

    return 0;
}