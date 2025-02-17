#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    swith (ch){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printF("Fail");
            break;
        default:
            printf("Invalid grade");
            break;

    }
}