int fibonacciSeries(int x){
    int a = 0;
    int b = 1;
    int c = a+b;
    for(int i = 0 ; i<x ; i++){
        if i==0{
            printf("0 ");
        }
        if i==1{
            printf("1 ");
        }
        else{
            c = a+b;
            printf("%d" , c);
            a = b;
            b =c;
        }
    }
    
}