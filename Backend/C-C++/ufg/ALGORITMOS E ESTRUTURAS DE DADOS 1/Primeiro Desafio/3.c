#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100

bool verificaPrimo(int n)
{
    int i;
    if (n <= 1)
        return false;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int primo(int n)
{
    if (n == 1)
        return 2;
    int i = primo(n - 1) + 1;
    while (!verificaPrimo(i))
        i++;

    return i;
}

int main()
{
    int n;
    int i,j;
    scanf("%d", &n);

    int A[MAX_N];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int soma = 0;


    for (i = 1; i <= n; i++)
    {
        int minimo = -1;
        for (j = 0; j < n; j++)
        {
            if (A[j] >= i && (minimo == -1 || A[j] < A[minimo]))
                minimo = j;
        }

        if (minimo != -1)
        {
            int p = primo(A[minimo]);
            printf("%d ", p);
            soma += p;
            A[minimo] = -1;
        }
    }

    printf("\n%d\n", soma);

    return 0;
}
