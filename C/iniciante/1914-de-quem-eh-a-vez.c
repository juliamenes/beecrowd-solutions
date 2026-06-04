#include <stdio.h>
#include <string.h>

int main()
{
    int n, num1, num2, soma;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        char n1[100], n2[100], op1[10], op2[10];

        scanf("%s %s %s %s", n1, op1, n2, op2);
        scanf("%d %d", &num1, &num2);

        if ((num1 + num2) % 2 == 0 && (strcmp(op1, "PAR") == 0))
        {
            printf("%s\n", n1);
        }
        else if ((num1 + num2) % 2 != 0 && (strcmp(op1, "IMPAR") == 0))
        {
            printf("%s\n", n1);
        }
        else
        {
            printf("%s\n", n2);
        }
    }

    return 0;
}
