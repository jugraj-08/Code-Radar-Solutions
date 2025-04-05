#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int length = strlen(str); // Find the length of the input string
    int index = 0; // Index for the compressed string
    int count;

    for (int i = 0; i < length; i++) {
        compressed[index++] = str[i]; // Add the character to the compressed string
        count = 1;

        // Count consecutive occurrences of the character
        while (i < length - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Add the count to the compressed string (if greater than 1)
        if (count > 1) {
            index += sprintf(&compressed[index], "%d", count);
        }
    }

    compressed[index] = '\0'; // Null-terminate the compressed string

    // Check if the compressed string is shorter than the original string
    if (strlen(compressed) >= length) {
        strcpy(compressed, str); // If not, copy the original string to compressed
    }
}

int main() {
    char str[100]; // Input string
    char compressed[200]; // Compressed string

    // Read the input string
    printf("Enter the string: ");
    scanf("%s", str);

    // Compress the string
    compressString(str, compressed);

    // Output the result
    printf("Compressed String: %s\n", compressed);

    return 0;
}
