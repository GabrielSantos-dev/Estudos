#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 1000

typedef struct Node {
  int value;
  struct Node* next;
} Node;

typedef struct {
  Node* inicio;
  Node* final;
  int num_nodes;
} List;

List* criar_lista() {
  List* list = malloc(sizeof(List));
  list->inicio = NULL;
  list->final = NULL;
  list->num_nodes = 0;
  return list;
}

void destruir_lista(List* list) {
  Node* node = list->inicio;
  while (node != NULL) {
    Node* next = node->next;
    free(node);
    node = next;
  }
  free(list);
}

int inserir_no_final(List* list, int value) {
  if (list->num_nodes == MAXIMO) {
    return -1;
  }
  Node* node = malloc(sizeof(Node));
  node->value = value;
  node->next = NULL;
  if (list->final == NULL) {
    list->inicio = node;
    list->final = node;
  } else {
    list->final->next = node;
    list->final = node;
  }
  list->num_nodes++;
  return 0;
}

int inserir_no_inicio(List* list, int value) {
  if (list->num_nodes == MAXIMO) {
    return -1;
  }
  Node* node = malloc(sizeof(Node));
  node->value = value;
  node->next = list->inicio;
  if (list->inicio == NULL) {
    list->final = node;
  }
  list->inicio = node;
  list->num_nodes++;
  return 0;
}

int remover_no_final(List* list) {
  if (list->final == NULL) {
    return -1;
  }
  int value = list->final->value;
  Node* node = list->inicio;
  if (node == list->final) {
    free(node);
    list->inicio = NULL;
    list->final = NULL;
  } else {
    while (node->next != list->final) {
      node = node->next;
    }
    free(list->final);
    node->next = NULL;
    list->final = node;
  }
  list->num_nodes--;
  return value;
}

int remover_no_inicio(List* list) {
  if (list->inicio == NULL) {
    return -1;
  }
  int value = list->inicio->value;
  Node* node = list->inicio;
  list->inicio = node->next;
  if (node == list->final) {
    list->final = NULL;
  }
  free(node);
  list->num_nodes--;
  return value;
}

void exibir_lista(List* list) {
  Node* node = list->inicio;
  while (node != NULL) {
    printf("%d ", node->value);
    node = node->next;
  }
  printf("\n");
}

int listar_nos(List* list) {
  return list->num_nodes;
}

int listar_primeiro(List* list) {
  if (list->inicio == NULL) {
    return -1;
  }
  return list->inicio->value;
}

int listar_ultimo(List* list) {
  if (list->final == NULL) {
    return -1;
  }
  return list->final->value;
}

int main() {

  List* list = NULL;
  int opcao;
  do {
    printf("Menu:\n");
    printf("1. Criar Lista\n");
    printf("2. Inserir no Final\n");
    printf("3. Inserir no Inicio\n");
    printf("4. Remove do Final\n");
    printf("5. Remove do Inicio\n");
    printf("6. Exibir Lista\n");
    printf("7. Numero de nos\n");
    printf("8. Primeiro no\n");
    printf("9. Ultimo no\n");
    printf("0. Sair\n");
    printf("Entre com uma opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1: {
        if (list != NULL) {
          destruir_lista(list);
        }
        list = criar_lista();
        printf("Lista vazia criada \n");
        break;
      }
     case 2: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int valor;
        printf("Entre com o valor que voce quer inserir: ");
        scanf("%d", &valor);
        int resultado = inserir_no_final(list, valor);
        if (resultado == -1) {
          printf("Erro em inserir no Final\n");
        }
        break;
      }
      case 3: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int valor;
        printf("Entre com  os valores: ");
        scanf("%d", &valor);
        int resultado = inserir_no_inicio(list, valor);
        if (resultado == -1) {
          printf("Erro em inserir no Inicio\n");
        }
        break;
      }
      case 4: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int resultado = remover_no_final(list);
        if (resultado == -1) {
          printf("Erro em remover do Final\n");
        } else {
          printf("Valor removido: %d\n", resultado);
        }
        break;
      }
      case 5: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int resultado = remover_no_inicio(list);
        if (resultado == -1) {
          printf("Erro em remover do Inicio\n");
        } else {
          printf("Valor removido: %d\n", resultado);
        }
        break;
      }
      case 6: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        exibir_lista(list);
        break;
      }
      case 7: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        printf("Numero de nos: %d\n", listar_nos(list));
        break;
      }
      case 8: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int resultado = listar_primeiro(list);
        if (resultado == -1) {
          printf("Erro em exibir o primeiro no\n");
        } else {
          printf("Primeiro no: %d\n", resultado);
        }
        break;
      }
      case 9: {
        if (list == NULL) {
          printf("Lista nao criada\n");
          break;
        }
        int resultado = listar_ultimo(list);
        if (resultado == -1) {
         printf("Erro em exibir o ultimo no\n");
        } else {
          printf("Ultimo no: %d\n", resultado);
        }
        break;
      }
    }
  } while (opcao != 0);
  destruir_lista(list);
  return 0;
}
