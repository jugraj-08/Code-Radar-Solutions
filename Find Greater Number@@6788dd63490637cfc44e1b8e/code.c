#include<stdio.h>

int main(){
    int a , b;
    printf("Enter two spaced-separated integers: ");
    scanf("%d %d", &a, &b);
    
    if (a > b){
        printf("%d is the greater number. \n",a);
    }
    else if (b > a){
        printf("%d is the greater number.\n",b);
    }
    else{
        printf("Both numbers are equal.\n");
    }
    return 0;

}

