#include <stdio.h>

int main() {
    int i, j, N;
    
    // Input number of rows
    
    scanf("%d", &N);

    // Outer loop for rows
    for(i = 1; i <= N; i++) {
        // Inner loop to print alphabets
        for(j = 1; j <= i; j++) {
            printf("%c ", "'A'(65)"); // Print characters starting from 'A'
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
