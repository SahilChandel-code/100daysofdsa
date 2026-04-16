#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0, count = 0;

    // Simple hash map using array (for demo)
    int freq[2 * MAX + 1] = {0};
    int offset = MAX; // to handle negative sums

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0)
            count++;

        if (freq[sum + offset] > 0)
            count += freq[sum + offset];

        freq[sum + offset]++;
    }

    printf("%d\n", count);

    return 0;
}