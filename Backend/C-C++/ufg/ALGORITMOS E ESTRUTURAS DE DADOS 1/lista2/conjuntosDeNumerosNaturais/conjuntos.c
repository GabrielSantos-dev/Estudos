#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

int procuraNoVetor(int x, Conjunto *C)
{
    int i = 0;

    for (i = 0; i < C->tamanho; i++)
    {
        if (C->num[i] == x)
            return i;
    }

    return 0;
}

void liberar(Conjunto *C)
{
    free(C);
}

int criaConjunto2(Conjunto *C)
{

    C = (Conjunto *)malloc(sizeof(Conjunto));
    C->tamanho = 0;

    if (C == NULL)
        return 0;

    return TRUE;
}

Conjunto *criaConjunto()
{

    Conjunto *C = (Conjunto *)malloc(sizeof(Conjunto));
    C->tamanho = 0;

    if (C == NULL)
        return 0;

    return C;
}

int conjuntoVazio(Conjunto *C)
{
    if (C == NULL)
    {
        printf("Erro - conjunto nao existe.\n");
        return FALSE;
    }
    else
    {
        if (C->tamanho == 0)
            return TRUE;
        else
            return FALSE;
    }
}

int insereElementoConjunto(int x, Conjunto *C)
{
    C->num[C->tamanho++] = x;
    return 1;
}

int excluirElementoConjunto(int x, Conjunto *C)
{
    int finded = 0;
    int i = 0, j = 0;

    finded = procuraNoVetor(x, C);

    if (C->num[finded] != x)
    {
        return FALHA;
    }
    else
    {
        for (i = 0; i < C->tamanho && C->num[i] != x; i++)
            ;
        for (i++; i < C->tamanho; i++)
        {
            C->num[i - 1] = C->num[i];
        }
    }
    C->tamanho--;
    return SUCESSO;
}

int maior(int x, Conjunto *C)
{
    int i = 0;
    int maiorDoConjunto = 0;

    for (i = 0; i < C->tamanho; i++)
    {
        if (C->num[i] > x)
        {
            maiorDoConjunto++;
        }
    }

    return maiorDoConjunto;
}

int menor(int x, Conjunto *C)
{
    int i = 0;
    int menorDoConjunto = 0;

    for (i = 0; i < C->tamanho; i++)
    {
        if (C->num[i] < x)
        {
            menorDoConjunto++;
        }
    }

    return menorDoConjunto;
}

int pertenceConjunto(int x, Conjunto *C)
{
    int i = 0;

    for (i = 0; i < C->tamanho; i++)
    {
        if (C->num[i] == x)
        {
            return 1;
        }
    }

    return 0;
}

int tamanhoConjunto(Conjunto *C)
{

    return C->tamanho;
}

int conjuntosIdenticos(Conjunto *C, Conjunto *C2)
{
    if (C == NULL || C2 == NULL)
    {
        printf("O conjunto não existe\n");
        return 0;
    }

    int i = 0, j = 0, flag = 0;
    if (C->tamanho == C2->tamanho)
    {

        for (i = 0; i < C->tamanho; i++)
        {
            if (C->num[i] != C2->num[i])
            {
                flag++;
            }
        }
    }

    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int subconjunto(Conjunto *C1, Conjunto *C2)
{
    int i = 0, j = 0, flag = 0;

    if (C1->tamanho > C2->tamanho)
    {
        return FALSE;
    }
    for (i = 0; i < C1->tamanho; i++)
    {
        for (j = 0; j < C2->tamanho; j++)
        {
            if (C1->num[i] == C2->num[j])
            {
                flag++;
            }
        }

        if (flag == 0)
        {
            return FALSE;
        }
        else
        {
            flag = 0;
        }
    }

    return TRUE;
}

Conjunto *complemento(Conjunto *C1, Conjunto *C2)
{

    Conjunto *result = criaConjunto();
    int aux;
    int flag = 0;
    int i = 0;

    for (i = 0; i < C2->tamanho; i++)
    {
        aux = procuraNoVetor(C2->num[i], C1);
        if (aux == 0)
        {
            printf("%d\n", C2->num[i]);
            insereElementoConjunto(C2->num[i], result);
        }
    }

    return result;
}
Conjunto *uniao(Conjunto *C1, Conjunto *C2)
{
    Conjunto *resul = criaConjunto();
    int aux;
    int flag = 0;
    int i = 0;

    for (i = 0; i < C1->tamanho; i++)
    {
        insereElementoConjunto(C1->num[i], resul);
    }
    for (i = 0; i < C2->tamanho; i++)
    {
        aux = procuraNoVetor(C2->num[i], resul);
        if (aux == 0)
        {
            insereElementoConjunto(C2->num[i], resul);
        }
    }

    return resul;
}

Conjunto *interseccao(Conjunto *C1, Conjunto *C2)
{
    Conjunto *resul = criaConjunto();
    int aux;
    int flag = 0;
    int i = 0;

    printf("c1: %d ", C1->num[0]);
    printf("c2: %d\n", C2->num[0]);
    if (C1->num[0] == C2->num[0])
    {
        insereElementoConjunto(C1->num[i], resul);
    }

    for (i = 1; i < C2->tamanho; i++)
    {
        aux = procuraNoVetor(C2->num[i], C1);
        if (aux != 0)
        {
            insereElementoConjunto(C2->num[i], resul);
        }
    }

    return resul;
}

Conjunto *diferenca(Conjunto *C1, Conjunto *C2)
{

    Conjunto *result = criaConjunto();
    int aux = 0;
    int flag = 0;
    int i = 0, j = 0;

    for (i = 0; i < C1->tamanho; i++)
    {
        for (j = 0; j < C2->tamanho; j++)
        {
            if (C1->num[i] == C2->num[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            insereElementoConjunto(C1->num[i], result);
        }
        flag = 0;
    }

    return result;
}

Conjunto *conjuntoPartes(Conjunto *C)
{
    printf("a fazer\n");
}

void mostraConjunto(Conjunto *C, char *ordem)
{

    if (C == NULL)
    {
        printf("Conjunto inexistente\n");
        exit(0);
    }
    if (C->tamanho == 0)
    {
        printf("o conjunto esta vazio\n");
        exit(0);
    }
    int i = 0;
    int j = 0;
    int aux;

    if (ordem == "C")
    {
        for (i = C->tamanho - 1; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                if (C->num[j] > C->num[j + 1])
                {
                    aux = C->num[j];
                    C->num[j] = C->num[j + 1];
                    C->num[j + 1] = aux;
                }
            }
        }
    }

    if (ordem == "D")
    {
        for (i = C->tamanho - 1; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                if (C->num[j] < C->num[j + 1])
                {
                    aux = C->num[j];
                    C->num[j] = C->num[j + 1];
                    C->num[j + 1] = aux;
                }
            }
        }
    }

    for (i = 0; i < C->tamanho; i++)
    {
        printf("  [%d]  ", C->num[i]);

        if (i % 6 == 0 && i != 0)
        {
            printf("\n");
        }
    }

    printf("\n");
}

int copiarConjunto(Conjunto *C1, Conjunto *C2)
{
    int i = 0;
    int aux;
    aux = C2->tamanho;

    for (i = 0; i < C1->tamanho; i++)
    {
        insereElementoConjunto(C1->num[i], C2);
    }
    if (C2->tamanho > aux)
    {
        return SUCESSO;
    }
    else
    {
        return FALHA;
    }
}

int destroiConjunto(Conjunto *C)
{
    if (C != NULL)
    {
        free(C);

        return SUCESSO;
    }
    return FALHA;
}