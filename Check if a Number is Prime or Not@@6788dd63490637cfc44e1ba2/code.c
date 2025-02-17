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
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

