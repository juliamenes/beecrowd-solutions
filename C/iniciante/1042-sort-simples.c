#include <stdio.h>

int main()
{
    int vet1[3], vet2[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (vet1[j] > vet1[j + 1])
            {
                int temp = vet1[j];
                vet1[j] = vet1[j + 1];
                vet1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet1[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet2[i]);
    }

    return 0;
}