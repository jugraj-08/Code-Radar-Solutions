#include<stdio.h>

int main(){
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(i==1 || i==5 || j==1 || j==5){
                printf("*");
            }
            else{
                printf("");
            }
            printf("\n");


        }
    }
}