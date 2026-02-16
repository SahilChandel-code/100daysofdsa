#include <stdio.h>

int main()
{
    int n;
    int A[100][100];
    int i, j;
    int isIdentity = 1;

    // Read size
    scanf("%d", &n);

    // Read matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Check identity matrix condition
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(A[i][j] != 1)
                {
                    isIdentity = 0;
                    break;
                }
            }
            else
            {
                if(A[i][j] != 0)
                {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if(isIdentity == 0)
            break;
    }

    // Print result
    if(isIdentity == 1)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
