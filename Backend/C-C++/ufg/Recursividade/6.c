#include <stdio.h>
#include <string.h>
#define MAX 5000

int sumMatches(int n, int i) {
    int k = 5;
	if(n % 10 == k) {
		i++;
	}
	if(n % 10 == n) {
		return i;
	}
	sumMatches(n / 10, i);
}

int main() {
    int n,numero,i;
    scanf("%d", &n);
    int re[n];

    for(i=0; i<n; i++){
        scanf("%d",&numero);
        re[i] = sumMatches(numero,0);
    }
    for(i=0; i<n; i++){
        printf("%d\n", re[i]);
    }
}
