#include <stdio.h>

int main()
{
    int m, n;
    int A[100][100];
    int i, j;
    int sum = 0;

    // Read rows and columns
    scanf("%d %d", &m, &n);

    // Read matrix elements
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Find sum of primary diagonal
    for(i = 0; i < m && i < n; i++)
    {
        sum = sum + A[i][i];
    }

    // Print sum
    printf("%d", sum);

    return 0;
}

