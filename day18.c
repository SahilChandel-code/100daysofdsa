#include <stdio.h>

int main() {
    int n, k, i;
    
    // Input size
    scanf("%d", &n);
    
    int arr[n], temp[n];
    
    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input k
    scanf("%d", &k);
    
    // Handle k > n
    k = k % n;
    
    // Rotate array
    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Print rotated array
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    
    return 0;
}