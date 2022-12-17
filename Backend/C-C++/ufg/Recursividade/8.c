#include <stdio.h>
#include <string.h>
#define MAX 5000

int soma1aN(int n) {
	if(n == 1) {
		return 1;
	}
	return n + soma1aN(n - 1);
}

int main() {
    int n,numero,i;
    scanf("%d", &n);
    int re[n];

    for(i=0; i<n; i++){
        scanf("%d",&numero);
        re[i] = soma1aN(numero);
    }
    for(i=0; i<n; i++){
        printf("%d\n", re[i]);
    }
}
