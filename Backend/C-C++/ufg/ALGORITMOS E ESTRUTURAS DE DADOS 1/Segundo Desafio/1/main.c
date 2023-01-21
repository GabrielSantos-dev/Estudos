#include <stdio.h>
#include <stdlib.h>

struct no
{
    int valor;
    struct no* prox;
};
typedef struct no No;

No* inicio = NULL;

void lerLista()
{
    int num;
    scanf("%d", &num);
    while (num != -1)
    {
        No* novo = (No*) malloc(sizeof(No));
        novo->valor = num;
        novo->prox = inicio;
        inicio = novo;
        scanf("%d", &num);
    }
}

void printarLista()
{
    No* p = inicio;
    while (p != NULL)
    {
        printf("%d ", p->valor);
        p = p->prox;
    }
    printf("\n");
}

void crescente()
{
    No* i, * j;
    for (i = inicio; i->prox != NULL; i = i->prox)
    {
        for (j = i->prox; j != NULL; j = j->prox)
        {
            if (i->valor > j->valor)
            {
                int temp = i->valor;
                i->valor = j->valor;
                j->valor = temp;
            }
        }
    }
    printarLista();
}

void decrescente()
{
    No* i, * j;
    for (i = inicio; i->prox != NULL; i = i->prox)
    {
        for (j = i->prox; j != NULL; j = j->prox)
        {
            if (i->valor < j->valor)
            {
                int temp = i->valor;
                i->valor = j->valor;
                j->valor = temp;
            }
        }
    }
    printarLista();
}

void exibeMaior()
{
    No* p = inicio;
    int maior = p->valor;
    while (p != NULL)
    {
        if (p->valor > maior)
        {
            maior = p->valor;
        }
        p = p->prox;
    }
    printf("%d\n", maior);
}

void exibeMenor()
{
    No* p = inicio;
    int menor = p->valor;
    while (p != NULL)
    {
        if (p->valor < menor)
        {
            menor = p->valor;
        }
        p = p->prox;
    }
    printf("%d\n", menor);
}

int main()
{
    lerLista();

    char opcao;
    while (scanf(" %c", &opcao) == 1)
    {
        if (opcao == 'C')
        {
            crescente();
        }
        else if (opcao == 'D')
        {
            decrescente();
        }
        else if (opcao == 'L')
        {
            printarLista();
        }
        else if (opcao == 'M')
        {
            exibeMaior();
        }
        else if (opcao == 'm')
        {
            exibeMenor();
        }
        else if (opcao == 'X')
        {
            break;
        }
    }

    return 0;
}
