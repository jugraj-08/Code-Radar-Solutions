#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;  
    } 
    else {
        while (i * i <= num) {
            if (num % i == 0) {
                is_prime = 0; 
                break;
            }
            i++;
        }
    }