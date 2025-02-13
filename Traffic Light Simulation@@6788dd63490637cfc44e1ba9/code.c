#include<stdio.h>

int main(){
    char ch;
    scanf("%d",&ch);
    switch (ch){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input");
            break;
    }
}