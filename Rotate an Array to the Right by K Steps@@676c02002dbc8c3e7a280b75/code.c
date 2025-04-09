#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // Number of positions to rotate
    int n = 7; // Size of the array

    k = k % n; // Ensure k is within bounds

    // Reverse the last k elements
    reverse(arr, n - k, n - 1);
    // Reverse the first n-k elements
    reverse(arr, 0, n - k - 1);
    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
