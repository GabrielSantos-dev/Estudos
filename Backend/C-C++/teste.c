#include <stdio.h>

int main() {
  int t, n, i, j, max_sum, count;

  // lê o número de casos de teste
  scanf("%d", &t);

  // para cada caso de teste
  while (t--) {
    // lê o número de elementos do vetor A
    scanf("%d", &n);

    // inicializa o valor máximo como sendo o mínimo possível
    max_sum = -1;
    // inicializa o contador de valores máximos como 0
    count = 0;

    // para cada elemento i do vetor A

