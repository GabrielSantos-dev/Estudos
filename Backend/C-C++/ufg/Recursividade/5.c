
#include <stdio.h>
#include <string.h>
#define MAX 5000

size_t qnthi( const char *word ) {
    const char *st = "hi";
    const char *p = strstr( word, st );

    return p == NULL ? 0 : 1 + qnthi( p + strlen( st ) );
}
int main() {
    int n,i;
    scanf("%d ", &n);

    char word[MAX];
    int re[n];
    for(i=0; i<n; i++){
        fgets(word, MAX, stdin);
        re[i] = qnthi(word);
    }
    for(i=0; i<n; i++){
        printf("%d\n", re[i]);
    }
}
