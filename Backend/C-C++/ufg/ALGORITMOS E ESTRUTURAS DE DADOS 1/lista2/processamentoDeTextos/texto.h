#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MENOR -1
#define IGUAL 0
#define MAIOR 1

typedef struct Texto
{
    char texto;
    int tamanho;
    
} Texto;

Texto *criarTexto (char *t);
void liberarTexto (Texto *t);
unsigned int tamanhoTexto (Texto *t);
char *obterTexto (Texto *t);
void mostrarTexto (Texto *t, unsigned int colunas);
Texto *copiarTexto (Texto *t);
void substituirTexto (Texto * t, char *alteracao);
Texto *concatenarTextos (Texto * t1, Texto *t2);
char *obterSubtexto (Texto *t, unsigned int inicio, unsigned int taman);
unsigned int encontrarSubtexto (Texto *t, char *subtexto, unsigned int ocorrencia);
int compararTextos (Texto *t1, Texto * t2);