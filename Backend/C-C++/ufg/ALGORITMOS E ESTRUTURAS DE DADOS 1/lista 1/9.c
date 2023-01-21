#include<stdio.h>

int sum(int vet[], int n) {
	if(n == 1) {
		return vet[0];
	}
	return vet[n - 1] + sum(vet, n - 1);
}

int main(){
    int n, tamanho , i;
    int  vetor[30];
    scanf("%d",&n);
    while(n--){
    scanf("%d", &tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&vetor[i]);
    }
    printf("%d\n", sum(vetor, tamanho));
    };
   return 0;
}
