#include <stdio.h>
#define MAX 300

int multSomas(int a, int b) {
	int interna(int a, int aux, int b) {
		if(a == 0 || b == 0) return 0;
		if(b == 1) return a;
		a += aux;
		interna(a, aux, b - 1);
	}
	return interna(a, a, b);

}
int main() {
    int i,t;
    int m,n;

    scanf("%d", &t);
    int resultado[t];

    for(i=0; i<t; i++){
        scanf("%d",&m);
        scanf("%d",&n);
        resultado[i] = multSomas(m,n);
    }
    for(i=0; i<t; i++){
        printf("%d\n", resultado[i]);
    }
}
