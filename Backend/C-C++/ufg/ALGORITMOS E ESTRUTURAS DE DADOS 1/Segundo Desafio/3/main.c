#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 20

bool isPrime(long long int num)
{
    if (num < 2)
    {
        return false;
    }
    long long int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactor(long long int num)
{
    if (isPrime(num))
    {
        printf("%lld\n", num);
    }
    else
    {
        long long int i;
        for (i = 2; i <= num; i++)
        {
            while (num % i == 0)
            {
                printf("%lld ", i);
                num /= i;
                if (num == 1)
                {
                    break;
                }
            }
        }
        printf("\n");
    }
}


int main()
{
    long long int num;
    scanf("%lld", &num);

    long long int inputList[MAX];
    int size = 0;
    while (num != -1)
    {
        inputList[size++] = num;
        scanf("%lld", &num);
    }

    long long int i;
    for (i = size - 1; i >= 0; i--)
    {
        printPrimeFactor(inputList[i]);
    }
    return 0;
}
