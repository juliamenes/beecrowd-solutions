#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sum(int *calc)
{
    return calc[0] + calc[1] == calc[2];
}
int sub(int *calc)
{
    return calc[0] - calc[1] == calc[2];
}
int mult(int *calc)
{
    return calc[0] * calc[1] == calc[2];
}
int compare(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);

    // recebe dois ponteiros que sao convertidos para char
    // strcmp compara as strings
    // se retornar 0 as strings tem a mesma ordem
    // se retorna um valor menor q zero a eh menor q b
    // se retorna um valor maior q zero a eh maior q b
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int calc[n][3], num;

        char nome[101], op, womp_womp[n][101];

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d=%d", &calc[i][0], &calc[i][1], &calc[i][2]);
        }

        int num_wrong = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d %c\n", nome, &num, &op);

            if (op == '+')
            {
                if (!sum(calc[num - 1]))
                {
                    strcpy(womp_womp[num_wrong++], nome);
                }
            }
            else if (op == '-')
            {
                if (!sub(calc[num - 1]))
                {
                    strcpy(womp_womp[num_wrong++], nome);
                }
            }
            else if (op == '*')
            {
                if (!mult(calc[num - 1])) // se retornar 0 significa q a mult nao ta certa
                {
                    strcpy(womp_womp[num_wrong++], nome);
                }
            }
            else if (op == 'I')
            {
                if (sum(calc[num - 1]) || sub(calc[num - 1]) || mult(calc[num - 1])) // se alguma dessas for vdd o op I (impossivel) esta errado
                                                                                     // pq uma das operacoes foi possivel ue
                {
                    strcpy(womp_womp[num_wrong++], nome);
                }
            }
        }
        if (num_wrong == 0)
        {
            printf("You Shall All Pass!\n");
        }
        else if (num_wrong == n)
        {
            printf("None Shall Pass!\n");
        }
        else
        {
            qsort(womp_womp, num_wrong, sizeof(char) * 101, compare);
            // vetor a ser ordenado
            // numero de elementos no vetor
            // tamanho de cada elemento(tam de char multplicado por 101 que eh o max de caracteres)
            printf("%s", womp_womp[0]);
            for (int i = 1; i < num_wrong; i++)
            {
                printf(" %s", womp_womp[i]);
            }
            printf("\n");
        }
    }

    return 0;
}