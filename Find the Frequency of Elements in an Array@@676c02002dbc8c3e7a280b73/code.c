#include <stdio.h>

int main() {
    int array[] = {1, 2, 2, 3, 3, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int frequency[size];
    
    // Initialize frequency array to -1
    for (int i = 0; i < size; i++) {
        frequency[i] = -1;
    }
    
    // Count frequencies
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0; // Mark duplicate elements
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }
    
    // Print the frequencies
    printf("Element Frequency\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d\t%d\n", array[i], frequency[i]);
        }
    }

    return 0;
}
