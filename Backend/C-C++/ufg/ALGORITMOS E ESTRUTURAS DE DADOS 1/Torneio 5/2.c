#include <stdio.h>

#define MAX_N 200
#define MAX_M 50

int main()
{
    int n, m;
    int ouro[MAX_N + 1] = {0}, prata[MAX_N + 1] = {0}, bronze[MAX_N + 1] = {0};
    int i, j, p1, p2, p3, max_pais;

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d %d", &p1, &p2, &p3);
        ouro[p1]++, prata[p2]++, bronze[p3]++;
    }

    for (i = 1; i <= n; i++)
    {
        max_pais = i;
        for (j = i + 1; j <= n; j++)
        {
            if (ouro[j] + prata[j] + bronze[j] > ouro[max_pais] + prata[max_pais] + bronze[max_pais] ||
                (ouro[j] + prata[j] + bronze[j] == ouro[max_pais] + prata[max_pais] + bronze[max_pais] && ouro[j] > ouro[max_pais]) ||
                (ouro[j] + prata[j] + bronze[j] == ouro[max_pais] + prata[max_pais] + bronze[max_pais] && ouro[j] == ouro[max_pais] && prata[j] > prata[max_pais]) ||
                (ouro[j] + prata[j] + bronze[j] == ouro[max_pais] + prata[max_pais] + bronze[max_pais] && ouro[j] == ouro[max_pais] && prata[j] == prata[max_pais] && bronze[j] > bronze[max_pais]) ||
                (ouro[j] + prata[j] + bronze[j] == ouro[max_pais] + prata[max_pais] + bronze[max_pais] && ouro[j] == ouro[max_pais] && prata[j] == prata[max_pais] && bronze[j] == bronze[max_pais] && j > max_pais))
            {
                max_pais = j;
            }
        }
        if (max_pais != i)
        {
            int tmp;
            tmp = ouro[i];
            ouro[i] = ouro[max_pais];
            ouro[max_pais] = tmp;
            tmp = prata[i];
            prata[i] = prata[max_pais];
            prata[max_pais] = tmp;
            tmp = bronze[i];
            bronze[i] = bronze[max_pais];
            bronze[max_pais] = tmp;
        }
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", max_pais);
        max_pais--;
    }
    return 0;
}
