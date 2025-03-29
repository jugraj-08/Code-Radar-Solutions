#include <stdio.h>

int main() {
    int n, i, j, space;
    char ch = 'A'; // Starting character

    // printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing alphabets
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
        }

        printf("\n");
        ch++; // Increment the character for the next row
    }

    return 0;
}
