#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int length = strlen(str); // Length of input string
    int index = 0; // Index for the compressed string

    for (int i = 0; i < length; i++) {
        compressed[index++] = str[i]; // Add the character
        int count = 1;

        // Count consecutive occurrences
        while (i < length - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Add count if greater than 1
        if (count > 1) {
            index += sprintf(&compressed[index], "%d", count);
        }
    }

    compressed[index] = '\0'; // Null-terminate the string

    // Check compression
    if (strlen(compressed) >= length) {
        strcpy(compressed, str); // Use original if compression isn't shorter
    }
}

int main() {
    char str[100]; // Input string
    char compressed[200]; // Compressed string

    printf("Enter the string: ");
    scanf("%s", str);

    compressString(str, compressed);

    printf("Compressed String: %s\n", compressed);

    return 0;
}

