#include <stdio.h>

#define MAX 100000

int pares(int A[], int n)
{
    if (n == 1)
        return 0;

    int somaMax = 0;
    int count = 0;
    int i,j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int soma = A[i] + A[j];
            if (soma > somaMax)
            {
                somaMax = soma;
                count = 1;
            }
            else if (soma == somaMax)
                count++;
        }
    }

    return count;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    int resultado[t];
    int i,j;

    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int A[MAX];

        for (j = 0; j < n; j++)
            scanf("%d", &A[j]);

        resultado[i] =  pares(A, n);

    }
    for (i = 0; i < t; i++)
        printf("%d\n",resultado[i]);
    return 0;
}
