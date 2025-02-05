#include<stdio.h>

int main(){
    int a , b;
    printf("Enter two spaced-separated integers: ");
    scanf("%d %d", &a, &b);
    
    if (a > b){
        printf("%d ",a);
    }
    else if (b > a){
        printf("%d ",b);
    }
    else{
        printf("");
    }
    return 0;

}

