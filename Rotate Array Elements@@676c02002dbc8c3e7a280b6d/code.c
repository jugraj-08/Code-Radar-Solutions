#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where K > N

    for (int i = 0; i < k; i++) {
        int last = arr[n - 1]; // Save the last element

        // Shift elements to the right
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last; // Place the last element at the start
    }
}

int main() {
    int n, k;

    // Input the size of the array
    
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Output the rotated array
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

