#include <stdio.h>

int main()
{

    int i, j;

    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    // n = numero competidores
    // m = numero voltas da corrida

    int v[n][m];
    int sexo[n];
    int tamM = 0;
    int tamF = 0;

    for (i = 0; i < n; i++)
    {
        // printf("Competidor número %d\n", i+1);
        scanf("%d", &sexo[i]);
        if (sexo[i] == 1)
        {
            tamM++;
        }
        else if (sexo[i] == 2)
        {
            tamF++;
        }
        for (j = 0; j < m; j++)
        {
            // printf("   Volta número %d\n", j+1);
            scanf("%d", &v[i][j]);
        }
    }

    int vM[tamM][m][2];
    int vF[tamF][m][2];
    int imas = 0;
    int ifem = 0;

    for (i = 0; i < n; i++)
    {
        if (sexo[i] == 1)
        { // Masculino
            for (j = 0; j < m; j++)
            {
                vM[imas][j][0] = v[i][j];
                vM[imas][j][1] = i;
            }
            imas++;
        }
        else if (sexo[i] == 2)
        { // Feminino
            for (j = 0; j < m; j++)
            {
                vF[ifem][j][0] = v[i][j];
                vF[ifem][j][1] = i;
            }
            ifem++;
        }
    }

    int totalM;
    int vtotalM[tamM][2];
    for (i = 0; i < tamM; i++)
    {
        totalM = 0;
        for (j = 0; j < m; j++)
        {
            totalM = totalM + vM[i][j][0];
        }
        vtotalM[i][0] = totalM;
        vtotalM[i][1] = vM[i][0][1];
    }

    int totalF;
    int vtotalF[tamF][2];
    for (i = 0; i < tamF; i++)
    {
        totalF = 0;
        for (j = 0; j < m; j++)
        {
            totalF = totalF + vF[i][j][0];
        }
        vtotalF[i][0] = totalF;
        vtotalF[i][1] = vF[i][0][1];
    }

    int menorM = vtotalM[0][1];
    int imenorM = 0;

    for (i = 0; i < tamM; i++)
    {
        if (vtotalM[i][0] < vtotalM[imenorM][0])
        {
            menorM = vtotalM[i][1];
            imenorM = i;
        }
    }

    printf("%d ", menorM + 1);

    int menorF = vtotalF[0][1];
    int imenorF = 0;

    for (i = 0; i < tamF; i++)
    {
        if (vtotalF[i][0] < vtotalF[imenorF][0])
        {
            menorF = vtotalF[i][1];
            imenorF = i;
        }
    }

    printf("%d\n", menorF + 1);
}