#include<stdio.h>

int main(){
    int a , b;
    printf("Enter two spaced-separated integers: ");
    scanf("%d %d", &a, &b);
    
    if (a > b){
        printf("%d is the greater number. \n",num1);
    }
    else if (b > a){
        printf("%d is the greater number.\n",num2);
    }
    else{
        printf("Both numbers are equal.\n");
    }
    return 0;

}

