#include<stdio.h>

int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case "/":
            if(b != 0){
                printf("%d",a/b);
            }
            else{
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;

            
    }
    return 0;
    
}