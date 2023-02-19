#include <stdio.h>

int main(){
    int i, j, k, aux1, aux2;

    int t;
    scanf("%d", &t);

    int resultados[t];

    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n); 

        if (n < 1 || n > 10000)
        {
            return 1;
        }

        int pessoa[n][2];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &pessoa[j][0]);
            scanf("%d", &pessoa[j][1]);
        }
        for (k = 0; k < n; k++)
        {
            for (j = k; j < n; j++)
            {
                if (pessoa[j][0] > pessoa[j + 1][0])
                {
                    aux1 = pessoa[j][0];
                    pessoa[j][0] = pessoa[j + 1][0];
                    pessoa[j + 1][0] = aux1;

                    aux2 = pessoa[j][1];
                    pessoa[j][1] = pessoa[j + 1][1];
                    pessoa[j + 1][1] = aux2;
                }
            }
        }

        for (k = 0; k < n; k++)
        {
            for (j = k; j < n; j++)
            {
                if ((pessoa[j][0] == pessoa[j + 1][0]) && (pessoa[j][1] > pessoa[j + 1][1]))
                {
                    aux1 = pessoa[j][0];
                    pessoa[j][0] = pessoa[j + 1][0];
                    pessoa[j + 1][0] = aux1;

                    aux2 = pessoa[j][1];
                    pessoa[j][1] = pessoa[j + 1][1];
                    pessoa[j + 1][1] = aux2;
                }
            }
        }

        int qtd = 1;
        int cont = 0;
        for (j = 0; j < n; j++)
        {
            cont = 0;
            for (k = j; k < n; k++)
            {
                if ((pessoa[j][0] == pessoa[k][0]) && (pessoa[j][1] == pessoa[k][1]))
                {
                    cont++;
                }
                if (qtd < cont)
                {
                    qtd = cont;
                }
            }
        }

        resultados[i] = qtd;
    }

    for (i = 0; i < t; i++)
    {
        printf("%d\n", resultados[i]);
    }

    return 0;
}
