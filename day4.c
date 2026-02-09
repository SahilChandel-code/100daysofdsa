#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int left, right, temp;

    // Input number of elements
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize two pointers
    left = 0;
    right = n - 1;

    // Reverse using two-pointer approach
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
