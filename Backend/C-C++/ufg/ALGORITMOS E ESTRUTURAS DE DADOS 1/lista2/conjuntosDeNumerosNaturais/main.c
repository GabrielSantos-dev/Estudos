#include "conjuntos.h"
#include <locale.h>

void menu(int choice)
{
    printf("\n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    printf("11\n");
    printf("12\n");
    printf("13\n");
    printf("14\n");
    printf("15\n");
    printf("16\n");
    printf("17\n");
    printf("18\n \n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned int choice;
    int x, check, aux, i = 0;
    char ordem[2] = "AN";
    Conjunto *C;
    Conjunto *C2;
    Conjunto *C3;

    while (1)
    {
        menu(choice);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            C = criaConjunto();
            C2 = criaConjunto();
            C == NULL ? printf("FALHA\n") : printf("SUCESSO\n");
            break;
        case 2:
            conjuntoVazio(C) == 1 ? printf("O conjunto está vázio.\n") : printf("O conjunto não está vázio.\n");
            break;
        case 3:
            scanf("%d", &x);
            check = insereElementoConjunto(x, C);
            check == 1 ? printf("SUCESSO: Elemento adicionado\n") : printf("FALHA: Por alguma razão o elemento não foi adicionado");
            printf("conjunto 2: \n");
            break;
        case 4:
            scanf("%d", &x);
            excluirElementoConjunto(x, C) == FALHA ? printf("FALHA: O número não  foi encontrado\n") : printf("SUCESSO: Número removido\n");
            mostraConjunto(C, ordem);
            break;
        case 5:
            printf("Cardinalidade: %d", tamanhoConjunto(C));
            break;
        case 6:
            scanf("%d", &x);
            check = maior(x, C);
            check == 0 ? printf("Todos os elementos do conjunto são maiores que %d", check) : printf("Tem %d elementos maiores do que %d\n", check, x);
            break;
        case 7:
            scanf("%d", &x);
            check = menor(x, C);
            check == 0 ? printf("Todos elementos do conjunto são menores que %d", check) : printf("Tem %d elementos menores do que %d\n", check, x);
            break;
        case 8:
            scanf("%d", &x);
            pertenceConjunto(x, C) == 1 ? printf("O número %d pertence ao conjunto", x) : printf("O número não pertence ao conjunto");
            break;
        // op
        case 9:
            conjuntosIdenticos(C, C2) == 1 ? printf("Os conjuntos são diferentes") : printf("Os conjuntos são identicos");
            break;
        case 10:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }
            subconjunto(C, C2) == TRUE ? printf("C1 é subconjunto de C2\n") : printf("C1 não é subconjunto de C2\n");
            break;
        case 11:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter??\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }
            C3 = complemento(C, C2);
            mostraConjunto(C3, "C");
            break;
        case 12:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }

            C3 = uniao(C, C2);
            mostraConjunto(C3, "C");
            break;
        case 13:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }

            C3 = interseccao(C, C2);
            conjuntoVazio(C3) == 1 ? printf("O conjunto está vázio.\n") : printf("O conjunto não está vázio.\n");
            mostraConjunto(C3, "C");
            break;
        case 14:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }

            C3 = diferenca(C, C2);
            conjuntoVazio(C3) == 1 ? printf("O conjunto está vázio.\n") : printf("O conjunto não está vázio.\n");
            mostraConjunto(C3, "C");
            break;
        case 15:
            C = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }

            conjuntoPartes(C);
            break;
        case 16:
            scanf("%s", ordem);
            mostraConjunto(C, ordem);
            break;
        case 17:
            C = criaConjunto();
            C2 = criaConjunto();
            printf("Quantos elementos C1 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C1: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C);
            }
            printf("Quantos elementos C2 vai ter?\n");
            scanf("%d", &aux);
            printf("Digite os elementos de C2: \n ...\n");
            for (i = 0; i < aux; i++)
            {
                scanf("%d", &check);
                insereElementoConjunto(check, C2);
            }

            copiarConjunto(C, C2) == SUCESSO ? printf("SUCESSO\n") : printf("FALHA\n");

            mostraConjunto(C2, ordem);
            break;
        case 18:
            destroiConjunto(C) == SUCESSO ? printf("SUCESSO\n") : printf("FALHA\n");
            break;
        case 19:
            printf("Liberando memória\n");
            liberar(C);
            return (0);
            break;

        default:
            printf("Opção inexistente\n");
            return 0;
            break;
        }
    }
    printf("Liberando memória\n");
    liberar(C);
    return 0;
}