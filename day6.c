#include <stdio.h>

int main() {
    int n;
    int arr[100];

    // Input number of elements
    scanf("%d", &n);

    // Input sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: empty array
    if (n == 0) {
        return 0;
    }

    // Index for unique elements
    int k = 0;

    // Traverse array and remove duplicates
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }

    // Print unique elements
    for (int i = 0; i <= k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
