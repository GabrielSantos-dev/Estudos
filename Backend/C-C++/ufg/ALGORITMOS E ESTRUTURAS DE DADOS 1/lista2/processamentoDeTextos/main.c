#include <stdio.h>
#include <stdlib.h>
#include "texto.h"
#include <locale.h>

void menu(int n)
{
    printf("\n");
    printf("1 \n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    printf("11\n \n");
}

int main() {
     setlocale(LC_ALL, "Portuguese");
     unsigned int n;
     Texto *t;

    while (1) {
        menu(n);
        scanf("%d", &n);
        
        switch (n){
        case 1:
            printf("Digite o texto: \n");
            break;
        case 2:
            printf("Liberado \n");
            break;
        case 3:
            printf("");
            break;
        case 4:
            break;
        case 5:
            break; 
        case 6:
            break;     
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;     
        case 10:
            break; 
        case 11:
            break; 
        }

    }
    liberarTexto(t);
    return 0;
}