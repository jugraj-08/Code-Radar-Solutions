#include<stdio.h>

int main(){
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i>=N;i++){
        for(j=N;j>=i;j--){
            printf("_");
            for(k=1;k<=(i*2)-1){
                printf("*");

            }

        }
        
    }

}