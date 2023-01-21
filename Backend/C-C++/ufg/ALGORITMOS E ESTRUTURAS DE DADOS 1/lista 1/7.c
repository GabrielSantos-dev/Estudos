#include <stdio.h>

double squareRoot(double n, double a, double b, double e);
double findInitA(unsigned int n);
double mod(double num);

int main(){
    unsigned int n;
    double initA, initB,e;

    scanf("%u", &n);

    scanf("%lf", &e);

    initA = findInitA(n);
    initB = n/initA;

    printf("%lf\n", n, squareRoot(n, initA, initB, e));

    return 0;
}

double findInitA(unsigned int n){
    int count = 1;
    while(count){
        if(count*count>=n) return (count + --count)/2.0;
        else count++;
    }
}

double mod(double num){
    if(num>=0) return num;
    else return -num;
}

double squareRoot(double n, double a, double b, double e){
    a = (a+b)/2;
    b = n/a;
    if(mod(b*b-n)>e) squareRoot(n, a, b, e);
    else return b;
}
