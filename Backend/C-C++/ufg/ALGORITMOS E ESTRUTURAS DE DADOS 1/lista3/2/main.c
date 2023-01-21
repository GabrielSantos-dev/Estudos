#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct MatrizNos {
  int linha;
  int coluna;
  int valor;
  struct MatrizNos* next;
} MatrizNos;

typedef struct SparseMatriz {
  int linhas;
  int colunas;
  MatrizNos* inicio;
} SparseMatriz;

SparseMatriz* criar_matriz(int linhas, int colunas) {
  SparseMatriz* matriz = (SparseMatriz*)malloc(sizeof(SparseMatriz));
  matriz->linhas = linhas;
  matriz->colunas = colunas;
  matriz->inicio = NULL;
  return matriz;
}

int inserir_na_matriz(SparseMatriz* matriz, int linha, int coluna, int valor) {
  MatrizNos* node = matriz->inicio;
  MatrizNos* prev = NULL;
  while (node != NULL && (node->linha < linha || (node->linha == linha && node->coluna < coluna))) {
    prev = node;
    node = node->next;
  }
  if (node != NULL && node->linha == linha && node->coluna == coluna) {
    node->valor = valor;
  } else {
    MatrizNos* novo_no = (MatrizNos*)malloc(sizeof(MatrizNos));
    novo_no->linha = linha;
    novo_no->coluna = coluna;
    novo_no->valor = valor;
    novo_no->next = node;
    if (prev == NULL) {
      matriz->inicio = novo_no;
    } else {
      prev->next = novo_no;
    }
  }
  return 0;
}


  int buscar_na_matriz(SparseMatriz* matriz, int linha, int coluna) {
  MatrizNos* node = matriz->inicio;
  while (node != NULL && (node->linha < linha || (node->linha == linha && node->coluna < coluna))) {
    node = node->next;
  }
  if (node != NULL && node->linha == linha && node->coluna == coluna) {
    return node->valor;
  }
  return -1;
}

void exibir_matriz(SparseMatriz* matriz) {
  for (int i = 0; i < matriz->linhas; i++) {
    for (int j = 0; j < matriz->colunas; j++) {
      int valor = buscar_na_matriz(matriz, i, j);
      if (valor == -1) {
        printf("0 ");
      } else {
        printf("%d ", valor);
      }
    }
    printf("\n");
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int linhas, colunas;
  printf("Insira quantas linhas e colunas a matriz vai ter :");
  scanf("%d %d", &linhas, &colunas);
  SparseMatriz* matriz = criar_matriz(linhas, colunas);
  int num_elementos;

  printf("Insira o numeros de elementos : \n");
  scanf("%d", &num_elementos);

  for (int i = 0; i < num_elementos; i++) {
    int linha, coluna, valor;
    scanf("%d %d %d", &linha, &coluna, &valor);
    inserir_na_matriz(matriz, linha, coluna, valor);
  }
  int opcao;
  do {
    printf("Menu:\n");
    printf("1. Inserir Valor\n");
    printf("2. Listar Valor\n");
    printf("3. Exibir matriz\n");
    printf("0. Sair\n");
    printf("Entrar opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1: {
        int linha, coluna, valor;
        printf("Entre com a linha, coluna, e o valor: ");
        scanf("%d %d %d", &linha, &coluna, &valor);
        int resultado = inserir_na_matriz(matriz, linha, coluna, valor);
        if (resultado == -1) {
          printf("Erro de inserir valor\n");
        }
        break;
      }
      case 2: {
        int linha, coluna;
        printf("Entre com a linha e a coluna: ");
        scanf("%d %d", &linha, &coluna);
        int valor = buscar_na_matriz(matriz, linha, coluna);
        if (valor == -1) {
          printf("Erro ao buscar valor\n");
        } else {
          printf("Valor: %d\n", valor);
        }
        break;
      }
      case 3: {
        exibir_matriz(matriz);
        break;
      }
      case 0: {
        break;
      }
      default: {
        printf("Opcao invalida\n");
        break;
      }
    }
  } while (opcao != 0);
  return 0;
}


