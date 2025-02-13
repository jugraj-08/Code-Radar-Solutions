#include<stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a % 2== 0 ){
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime");
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    } else if (num == 2 || num == 3 || num == 5 || num == 7) {
        return true;
    } else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int num;

    // Take input for the number
   
    scanf("%d", &num);

    // Check if the number is prime and print the result
    if (isPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
