#include <stdio.h>
#include <stdlib.h>

struct No
{
    int dado;
    struct No* prox;
};

typedef struct No No;

No* criarNo(int dado)
{
    No* novoNo = (No*) malloc(sizeof(No));
    novoNo->dado = dado;
    novoNo->prox = NULL;
    return novoNo;
}

void mesclar(No* a, No* b, No** s)
{
    if (a == NULL)
    {
        s = b;
        return;
    }
    if (b == NULL)
    {
        s = a;
        return;
    }
    No a_atual = a;
    No b_atual = b;
    No* s_atual = NULL;
    while (a_atual != NULL && b_atual != NULL)
    {
        if (a_atual->dado < b_atual->dado)
        {
            No* a_proximo = a_atual->prox;
            if (s_atual == NULL)
            {
                *s = a_atual;
                s_atual = s;
            }
            else
            {
                s_atual->prox = a_atual;
                s_atual = s_atual->prox;
            }
            a_atual->prox = NULL;
            a_atual = a_proximo;
        }
        else
        {
            No b_proximo = b_atual->prox;
            if (s_atual == NULL)
            {
                *s = b_atual;
                s_atual = *s;
            }
            else
            {
                s_atual->prox = b_atual;
                s_atual = s_atual->prox;
            }
            b_atual->prox = NULL;
            b_atual = b_proximo;
        }
    }
    if (a_atual != NULL)
    {
        s_atual->prox = a_atual;
    }
    else if (b_atual != NULL)
    {
        s_atual->prox = b_atual;
    }
}

void imprimirLista(No* inicio)
{
    No* atual = inicio;
    while (atual != NULL)
    {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("-1\n");
}

int main()
{
    No* a = NULL;
    No* a_atual = NULL;
    int x;
// Entrada lista A
    scanf("%d", &x);
    while (x != -1)
    {
        if (a == NULL)
        {
            a = criarNo(x);
            a_atual = a;
        }
        else
        {
            a_atual-> prox = criarNo(x);
            a_atual = a_atual->prox;
        }
        scanf("%d", &x);
    }

    No* b = NULL;
    No* b_atual = NULL;

// Entrada lista B
    scanf("%d", &x);
    while (x != -1)
    {
        if (b == NULL)
        {
            b = criarNo(x);
            b_atual = b;
        }
        else
        {
            b_atual->prox = criarNo(x);
            b_atual = b_atual->prox;
        }
        scanf("%d", &x);
    }

    No* s = NULL;
// Mesclar A e B em S
    mesclar(a, b, &s);

// Saída lista S
    imprimirLista(s);

    return 0;
}
