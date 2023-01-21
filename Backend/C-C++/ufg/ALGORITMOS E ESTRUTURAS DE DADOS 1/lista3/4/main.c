#include <stdio.h>
#include <stdlib.h>

typedef struct QueueNode {
  int valor;
  int prioridade;
  struct QueueNode* proximo;
} QueueNode;

typedef struct FilaPrioridade {
  int tamanho;
  QueueNode* inicio;
} FilaPrioridade;

FilaPrioridade* criar_fila() {
  FilaPrioridade* fila = (FilaPrioridade*)malloc(sizeof(FilaPrioridade));
  fila->tamanho = 0;
  fila->inicio = NULL;
  return fila;
}

void inserir_na_fila(FilaPrioridade* fila, int valor, int prioridade) {
  QueueNode* node = (QueueNode*)malloc(sizeof(QueueNode));
  node->valor = valor;
  node->prioridade = prioridade;
  node->proximo = NULL;
  if (fila->tamanho == 0) {
    fila->inicio = node;
  } else {
    QueueNode* temp = fila->inicio;
    while (temp->proximo != NULL && temp->proximo->prioridade <= prioridade) {
      temp = temp->proximo;
    }
    node->proximo = temp->proximo;
    temp->proximo = node;
  }
  fila->tamanho++;
}

void exibir_fila(FilaPrioridade* fila) {
  QueueNode* temp = fila->inicio;
  while (temp != NULL) {
    printf("%d ", temp->valor);
    temp = temp->proximo;
  }
  printf("\n");
}

int main() {
  int n;
  printf("Entre com o numero de elementos da fila: ");
  scanf("%d", &n);
  FilaPrioridade* fila = criar_fila();
  for (int i = 0; i < n; i++) {
    int valor, prioridade;
    printf("Entre com o valor e a prioridade do elemento %d: ", i + 1);
    scanf("%d %d", &valor, &prioridade);
    inserir_na_fila(fila, valor, prioridade);
  }
  printf("Fila: ");
  exibir_fila(fila);
  return 0;
}
