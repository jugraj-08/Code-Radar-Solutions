// #include <stdio.h>


// int main() {
//     int n;
//     scanf("%d",&n);
//     int a = 0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             a = 1;
//         }
//     }
//     if(n==1){
//         printf("Not Prime");
//     }
//     else if(a==0){
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime");
//     }
//     return 0;
// }














#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    a=0;
    for(int i=2; i<n-1; i++){
        a=1;
        if(n%i==0){
            printf("Prime");
        }

    }
    if(n==1){
        printf("Not Prime");
    }
    else if(n==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}