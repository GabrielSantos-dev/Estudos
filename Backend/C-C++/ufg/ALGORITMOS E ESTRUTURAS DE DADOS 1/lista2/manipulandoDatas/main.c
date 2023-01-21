#include <stdio.h>
#include <stdlib.h>
#include "data.h"
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
    printf("11\n");
    printf("12\n");
    printf("13\n");
    printf("14\n");
    printf("15\n");
    printf("16\n \n");
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    unsigned int n, dia, mes, ano;
    unsigned int dias;
    int check;
    char formatoData[10] = "DDMMAAAA";
    char formatado[9];
    Data *d, *d2, *soma;
    int i = 0;

    while (1)
    {
        menu(n);
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Digite a data: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);
            printf("dia: %d\n", d->dia);
            printf("mes: %d\n", d->mes);
            printf("ano: %d\n", d->ano);
            break;
        case 2:
            d2 = copiaData(*d);
            printf("%u %u %u", d2->dia, d2->mes, d2->ano);
            break;
        case 3:
            liberaData(d);
            break;
        case 4:
            printf("Digite a quantidade de dias: \n..\n");
            scanf("%u", &dias);
            soma = somaDiasData(*d, dias);
            printf("++ %u/%u/%u ++", soma->dia, soma->mes, soma->ano);
            break;
        case 5:
            printf("Digite a quantidade de dias: \n..\n");
            scanf("%u", &dias);
            soma = subtrairDiasData(*d, dias);
            printf("-- %u/%u/%u --", soma->dia, soma->mes, soma->ano);
            break;
        case 6:
            printf("Digite a data: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            atribuirData(d, dia, mes, ano);
            printf("atibuido: %u/%u/%u\n", d->dia, d->mes, d->ano);
            break;
        case 7:
            printf("Dia: %u", obtemDiaData(*d));
            break;
        case 8:
            printf("Mes: %u", obtemMesData(*d));
            break;
        case 9:
            printf("Ano: %u", obtemAnoData(*d));
            break;
        case 10:
            bissextoData(*d) == TRUE ? printf("O ano: %u é bissexto", d->ano) : printf("O ano: %u não é bissexto", d->ano);
            break;
        case 11:
            printf("Digite as datas: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);

            printf("Data 2:\n");

            scanf("%u %u %u", &dia, &mes, &ano);
            d2 = criaData(dia, mes, ano);

            printf("\n Verificando.. \n");
            check = comparaData(*d, *d2);
            if (check == MAIOR)
            {
                printf("MAIOR: %u é maior que %u\n", d->ano, d2->ano);
            }
            if (check == MENOR)
            {
                printf("MENOR: %u é menor que %u\n", d->ano, d2->ano);
            }
            if (check == IGUAL)
            {
                printf("IGUAL: %u é igual a %u\n", d->ano, d2->ano);
            }
            break;
        case 12:
            printf("Digite as datas: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);

            printf("Data 2:\n");

            scanf("%u %u %u", &dia, &mes, &ano);
            d2 = criaData(dia, mes, ano);
            check = numeroDiasDatas(*d, *d2);
            if (check == IGUAL)
            {
                printf("IGUAIS: As datas são iguais\n");
            }
            else
            {
                printf("Dias entre D1 e D2 é: %u\n", check);
            }
            liberaData(d);
            liberaData(d2);
            break;
        case 13:
            printf("Digite as datas: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);

            printf("Data 2:\n");

            scanf("%u %u %u", &dia, &mes, &ano);
            d2 = criaData(dia, mes, ano);
            check = numeroMesesDatas(*d, *d2);
            if (check == IGUAL)
            {
                printf("IGUAIS: As datas são iguais\n");
            }
            else
            {
                printf("Meses entre D1 e D2 é: %u\n", check);
            }
            liberaData(d);
            liberaData(d2);
            break;
        case 14:
            printf("Digite as datas: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);

            printf("Data 2:\n");

            scanf("%u %u %u", &dia, &mes, &ano);
            d2 = criaData(dia, mes, ano);
            check = numeroAnosDatas(*d, *d2);
            if (check == IGUAL)
            {
                printf("IGUAIS: As datas são iguais\n");
            }
            else
            {
                printf("Meses entre D1 e D2 é: %u\n", check);
            }
            break;
        case 15:
            printf("Digite a data: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);

            check = obtemDiaSemanaData(*d);
            check == 0 ? printf("[%u/%u/%u] - Domingo", d->dia, d->mes, d->ano) : check == 1 ? printf("[%u/%u/%u] - Segunda-feira", d->dia, d->mes, d->ano)
                                                                              : check == 2   ? printf("[%u/%u/%u] - Terca-feira", d->dia, d->mes, d->ano)
                                                                              : check == 3   ? printf("[%u/%u/%u] - Quarta-feira", d->dia, d->mes, d->ano)
                                                                              : check == 4   ? printf("[%u/%u/%u] - Quinta-feira", d->dia, d->mes, d->ano)
                                                                              : check == 5   ? printf("[%u/%u/%u] - Sexta-feira", d->dia, d->mes, d->ano)
                                                                                             : printf("[%u/%u/%u] - Sábado", d->dia, d->mes, d->ano);

            liberaData(d);
            break;
        case 16:
            printf("Digite a data: \n..\n");
            scanf("%u %u %u", &dia, &mes, &ano);
            d = criaData(dia, mes, ano);
            printf("Digite um formato: \n");
            printf("DDMMAAAA -");
            printf("DDMM -");
            printf("DD\n");
            printf("AAAAMMDD -");
            printf("AAAA -");
            printf("MM\n");
            scanf("%s", formatoData);
            printf("\n-%s-\n", imprimeData(*d, formatoData));
            liberaData(d);
            break;

        default:
            printf("Operação inexistente\n");
            return 0;
            break;
        }
    }
    liberaData(d);
    return 0;
}