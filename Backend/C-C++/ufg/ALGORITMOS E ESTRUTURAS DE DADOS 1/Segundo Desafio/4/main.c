#include <stdio.h>
#include <stdlib.h>

struct no
{
    int valor;
    struct no* prox;
};
typedef struct no No;

No* inicioA = NULL; // lista A
No* inicioS = NULL; // lista S

// Fun��o para criar a m�scara com os bits setados de acordo com o conjunto X
int criarMascara(int* conjuntoX, int tamanhoX)
{
    int mascara = 0;
    int i;
    for (i = 0; i < tamanhoX; i++)
    {
        mascara |= 1 << (conjuntoX[i] - 1);
    }
    return mascara;
}

// Fun��o para verificar se um n�mero tem todos os bits setados de acordo com a m�scara
int verificarNumero(int numero, int mascara)
{
    return (numero & mascara) == numero;
}

// Fun��o para percorrer a lista A e adicionar os n�meros � lista S
void selecionarNumeros(int* conjuntoX, int tamanhoX)
{
    int mascara = criarMascara(conjuntoX, tamanhoX);
    No* p = inicioA;
    while (p != NULL)
    {
        if (verificarNumero(p->valor, mascara))
        {
            No* novo = (No*) malloc(sizeof(No));
            novo->valor = p->valor;
            novo->prox = inicioS;
            inicioS = novo;
        }
        p = p->prox;
    }
}

// Fun��o para imprimir a lista S
void imprimirListaS()
{
    No* p = inicioS;
    while (p != NULL)
    {
        printf("%d ", p->valor);
        p = p->prox;
    }
    printf("\n");
}

int main()
{
    // Ler elementos da lista A a partir de entrada do usu�rio
    int num;
    scanf("%d", &num);
    while (num != -1)
    {
        No* novo = (No*) malloc(sizeof(No));
        novo->valor = num;
        novo->prox = inicioA;
        inicioA = novo;
        scanf("%d", &num);
    }

    // Ler o conjunto X a partir de entrada do usu�rio
    int tamanhoX;
    scanf("%d", &tamanhoX);
    int conjuntoX[tamanhoX];
    int i;
    for (i = 0; i < tamanhoX; i++)
    {
        scanf("%d", &conjuntoX[i]);
    }

    selecionarNumeros(conjuntoX, tamanhoX);
    imprimirListaS();

    return 0;
}
