#include <stdio.h>

int main(){
    int a;
    printf("");
    scanf("%d",&a);

    if (a>0){
        printf("Positive",a);
    }
    else if (a<0){
        printf("Negative",a);
    }
    else{
        printf("Zero");
    }
    return 0;
}
    



