#include <stdio.h>
#define MAX 5000

int coelhoMutante(int n) {
    if(n==0){ //base condition
        return 0;
    }
    if(n%2==1) {
        return 2+coelhoMutante(n-1);
    }//decompostion and composition
    return 3+coelhoMutante(n-1);
}
int main() {
    int i,coelho,n;
    scanf("%d", &n);
    int re[n];

    for(i=0; i<n; i++){
        scanf("%d",&coelho);
        re[i] = coelhoMutante(coelho);
    }
    for(i=0; i<n; i++){
        printf("%d\n", re[i]);
    }
}
