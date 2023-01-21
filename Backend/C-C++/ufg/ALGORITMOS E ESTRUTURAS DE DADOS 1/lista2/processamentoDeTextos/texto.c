#include <stdio.h>
#include <stdlib.h>
#include "texto.h"
#include <string.h>


Texto *criarTexto(char *t)
{
    Texto *t;

    t = (Texto *)malloc(sizeof(Texto));
    return t;

} 

void liberarTexto (Texto *t)
{
    printf("A fazer \n");
}
unsigned int tamanhoTexto (Texto *t)
{
    printf("A fazer \n");
}
char *obterTexto (Texto *t)
{
    printf("A fazer \n");
}
void mostrarTexto (Texto *t, unsigned int colunas)
{
    printf("A fazer \n");
}
Texto *copiarTexto (Texto *t)
{
    printf("A fazer \n");
}
void substituirTexto (Texto * t, char *alteracao)
{
    printf("A fazer \n");
}
Texto *concatenarTextos (Texto * t1, Texto *t2)
{
        printf("A fazer \n");
}
char *obterSubtexto (Texto *t, unsigned int inicio, unsigned int taman)
{
    printf("A fazer \n");
}
unsigned int encontrarSubtexto (Texto *t, char *subtexto, unsigned int ocorrencia)
{
    printf("A fazer \n");
}
int compararTextos (Texto *t1, Texto * t2)
{
    printf("A fazer \n");
}