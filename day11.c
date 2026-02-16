#include <stdio.h>

int main()
{
    int m, n;
    int A[100][100], B[100][100], Sum[100][100];
    int i, j;

    // Read dimensions
    scanf("%d %d", &m, &n);

    // Read first matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
