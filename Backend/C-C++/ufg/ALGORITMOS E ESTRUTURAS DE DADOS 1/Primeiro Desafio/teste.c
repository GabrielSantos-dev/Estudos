#include <stdio.h>

#define MAX_N 100000 // maximum number of elements in the vector A

// function that returns the number of pairs (i, j) with i < j such that
// the sum A[i] + A[j] is maximum
int max_pairs(int A[], int n)
{
    if (n == 1) // base case: only one element
        return 0;

    int max_sum = 0; // maximum sum found so far
    int count = 0; // number of pairs with maximum sum

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = A[i] + A[j]; // current sum
            if (sum > max_sum) // found a new maximum
            {
                max_sum = sum;
                count = 1;
            }
            else if (sum == max_sum) // another pair with the same maximum sum
                count++;
        }
    }

    return count;
}

int main()
{
    int t; // number of test cases
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n; // number of elements in vector A
        scanf("%d", &n);

        int A[MAX_N]; // vector A

        for (int j = 0; j < n; j++)
            scanf("%d", &A[j]);

        printf("%d\n", max_pairs(A, n));
    }

    return 0;
}
