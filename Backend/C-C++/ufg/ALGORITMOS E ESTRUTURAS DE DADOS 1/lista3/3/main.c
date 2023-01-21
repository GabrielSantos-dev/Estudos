#include <stdio.h>
#include <stdlib.h>

typedef struct no_da_pilha {
  int valor;
  struct no_da_pilha* proximo;
} no_da_pilha;

typedef struct Pilha {
  int tamanho;
  no_da_pilha* inicio;
} Pilha;

Pilha* criar_pilha() {
  Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
  pilha->tamanho = 0;
  pilha->inicio = NULL;
  return pilha;
}

void empilhar(Pilha* pilha, int valor) {
  no_da_pilha* node = (no_da_pilha*)malloc(sizeof(no_da_pilha));
  node->valor = valor;
  node->proximo = pilha->inicio;
  pilha->inicio = node;
  pilha->tamanho++;
}

int desempilhar(Pilha* pilha) {
  if (pilha->tamanho == 0) {
    return -1;
  }
  int valor = pilha->inicio->valor;
  no_da_pilha* temp = pilha->inicio;
  pilha->inicio = pilha->inicio->proximo;
  pilha->tamanho--;
  free(temp);
  return valor;
}

int estaVazia(Pilha* pilha) {
  return pilha->tamanho == 0;
}

void removeChave(Pilha* pilha, int chave) {
  Pilha* pilha_temp = criar_pilha();
  while (!estaVazia(pilha)) {
    int valor = desempilhar(pilha);
    if (valor != chave) {
      empilhar(pilha_temp, valor);
    }
  }
  while (!estaVazia(pilha_temp)) {
    empilhar(pilha, desempilhar(pilha_temp));
  }
  free(pilha_temp);
}

int main(){

  Pilha* pilha = NULL;
  int opcao;
  do {
    printf("Menu:\n");
    printf("1. Criar pilha\n");
    printf("2. Empilhar\n");
    printf("3. Desempilhar \n");
    printf("4. Verificar se a pilha esta vazia\n");
    printf("5. Remover chave\n");
    printf("0. Sair\n");
    printf("Entrar opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
            case 1: {
        pilha = criar_pilha();
        printf("Pilha criada\n");
        break;
      }
      case 2: {
        if (pilha == NULL) {
          printf("Erro: pilha nao foi criada\n");
          break;
        }
        int valor;
        printf("Entrar com valor: ");
        scanf("%d", &valor);
        empilhar(pilha, valor);
        break;
      }
      case 3: {
        if (pilha == NULL) {
          printf("Erro: pilha nao foi criada\n");
          break;
        }
        int valor = desempilhar(pilha);
        if (valor == -1) {
          printf("Erro: pilha esta vazia\n");
        } else {
          printf("Valor removido: %d\n", valor);
        }
        break;
      }
      case 4: {
        if (pilha == NULL) {
          printf("Erro: pilha nao foi criada\n");
          break;
        }
        int vazia = estaVazia(pilha);
        printf("Pilha esta %s\n", vazia ? "vazia" : "nao vazia");
        break;
      }
      case 5: {
        if (pilha == NULL) {
          printf("Erro: pilha nao foi criada\n");
          break;
        }
        int chave;
        printf("Entrar chave: ");
        scanf("%d", &chave);
        removeChave(pilha, chave);
        break;
      }
    }
  } while (opcao != 0);
  return 0;
}

