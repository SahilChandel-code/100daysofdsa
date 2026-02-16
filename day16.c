#include <stdio.h>

int main()
{
    int n;
    int A[100];
    int visited[100];
    int i, j, count;

    // Read size
    scanf("%d", &n);

    // Read array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        visited[i] = 0; // mark all as not visited
    }

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(A[i] == A[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d:%d ", A[i], count);
    }

    return 0;
}
