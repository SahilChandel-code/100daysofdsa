#include <stdio.h>

int main()
{
    int m, n;
    int A[100][100];
    int i, j;
    int isSymmetric = 1;

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

    // Check if square matrix
    if(m != n)
    {
        isSymmetric = 0;
    }
    else
    {
        // Compare A[i][j] with A[j][i]
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(A[i][j] != A[j][i])
                {
                    isSymmetric = 0;
                    break;
                }
            }
            if(isSymmetric == 0)
                break;
        }
    }

    // Print result
    if(isSymmetric == 1)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
