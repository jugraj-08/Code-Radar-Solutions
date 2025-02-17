// #include<stdio.h>

// int main(){

// }
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    
    // Take input for the number
    // printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and print the result
    if (isPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

