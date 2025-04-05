#include <stdio.h>

void findSubarrayToSort(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element that is out of order from left to right
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If the array is already sorted
    if (start == -1) {
        printf("0\n");
        return;
    }

    // Find the first element that is out of order from right to left
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the min and max in the subarray
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand the start and end indices to include elements outside the subarray
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }

    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }

    // Output the length of the smallest window
    printf("%d\n", end - start + 1);
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int arr[N];

        // Read the array
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        // Solve for the current test case
        findSubarrayToSort(arr, N);
    }

    return 0;
}
