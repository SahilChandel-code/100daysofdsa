#include <stdio.h>

int main()
{
    int r, c;
    int A[100][100];
    int i, j;

    // Read rows and columns
    scanf("%d %d", &r, &c);

    // Read matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Define boundaries
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    // Spiral traversal
    while(top <= bottom && left <= right)
    {
        // Top row
        for(j = left; j <= right; j++)
        {
            printf("%d ", A[top][j]);
        }
        top++;

        // Right column
        for(i = top; i <= bottom; i++)
        {
            printf("%d ", A[i][right]);
        }
        right--;

        // Bottom row
        if(top <= bottom)
        {
            for(j = right; j >= left; j--)
            {
                printf("%d ", A[bottom][j]);
            }
            bottom--;
        }

        // Left column
        if(left <= right)
        {
            for(i = bottom; i >= top; i--)
            {
                printf("%d ", A[i][left]);
            }
            left++;
        }
    }

    return 0;
}
