#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    int pessoas, dia, pode;

    while (scanf("%d %d", &pessoas, &dia) != EOF)
    {

        struct data datas_disponiveis, melhor_data;
        melhor_data.dia = 0;

        for (int j = 0; j < dia; j++)
        {
            scanf("%d/%d/%d", &datas_disponiveis.dia, &datas_disponiveis.mes, &datas_disponiveis.ano);

            int cont = 0;

            for (int i = 0; i < pessoas; i++)
            {
                scanf("%d", &pode);
                if (pode == 1)
                {
                    cont++;
                }
            }

            if (cont == pessoas && melhor_data.dia == 0)
            {
                melhor_data = datas_disponiveis;
            }
        }

        if (melhor_data.dia == 0)
        {
            printf("Pizza antes de FdI\n");
        }
        else
        {
            printf("%d/%d/%d\n", melhor_data.dia, melhor_data.mes, melhor_data.ano);
        }
    }

    return 0;
}