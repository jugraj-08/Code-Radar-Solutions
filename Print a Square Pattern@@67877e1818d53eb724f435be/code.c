#include <stdio.h>

int main() {
    int side, i, j;

    printf("Enter the size of the square: ");
    scanf("%d", &side);

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
