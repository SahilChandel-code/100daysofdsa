#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Input size of first log
    scanf("%d", &p);

    // Input first sorted log
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second log
    scanf("%d", &q);

    // Input second sorted log
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    // Merge the two sorted arrays
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements of first array (if any)
    while (i < p) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements of second array (if any)
    while (j < q) {
        merged[k++] = b[j++];
    }

    // Print merged array
    for (int i = 0; i < p + q; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
