#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Adjust k if it's greater than the array size
    int temp[k]; // Temporary array to store the elements to be rotated

    // Store the last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Place the elements from temp at the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf(\n);

    return 0;
}
