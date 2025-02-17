// #include<stdio.h>

// int main(){

// }
#include <stdio.h>
#include <stdbool.h>

bool isprime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    
    // Take input for the number
    // printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is prime and print the result
    if (isprime(n)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

