#include<stdio.h>

int fibo(int n){
    if (n < 2)
    {
       return n;
    }

    return fibo(n - 1) + fibo(n - 2);
    
}


int main(){
 

 int  fib = fibo(6);
 printf("%d ",fib);

 
return 0;
 
}