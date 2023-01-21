#include <stdio.h>
#include <string.h>
#define MAX 2000

int palindrome(char c[],int i, int j) {
    if (j == i)
        return 1;
    else if(c[i] == c[j])
        return palindrome(c, ++i, --j);
    else
        return 0;
}

int main() {
    char chaine[MAX];
    int t,i;
    scanf("%d",&t);
    int pal[t];
    while(j<tam-1){
            scanf("\%c " &vet[j]);
    scanf("\%c" &vet[j])
    } getchar()}
    pal[i] = palindrome(chaine, 0, strlen(chaine) -1 );

    }
    for(i=0;i < t;i++){
    printf("%d", pal[i]);
    }
    return 0;
}
