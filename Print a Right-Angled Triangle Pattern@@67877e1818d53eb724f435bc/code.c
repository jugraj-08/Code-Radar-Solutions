#include <stdio.h>

int main() {
    int n = 5; // Height of the triangle
    for (int i = n; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
