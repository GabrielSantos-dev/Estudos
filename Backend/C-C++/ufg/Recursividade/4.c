#include <stdio.h>
#include <string.h>
#define MAX 5000

int ocorrencias(const char *palavra, size_t len) {
    return len ?
        ('x' == *palavra) + ocorrencias(palavra + 1, len - 1) :
        0;
}

int main() {
    int n,i;
    scanf("%d", &n);

    char palavra[MAX];
    int re[n];
    for(i=0; i<n; i++){
        fgets(palavra, MAX, stdin);
        re[i] = ocorrencias(palavra, strlen(palavra));
    }
    for(i=0; i<n; i++){
        printf("%d\n", re[i]);
    }
}
