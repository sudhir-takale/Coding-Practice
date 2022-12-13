#include<stdio.h>
//this is the fibonacci series with base of num==0 and num==1

int fibo(int num){
    if (num==0 || num==1)
    {
        return num;
    }
    else{
        return fibo(num-1) + fibo(num-2);
    }
}
int main(){
 
 int terms;
 printf("\nEnter the value of the input");
 scanf("%d",&terms);

 for (int i = 0; i < terms; i++)
 {
    printf(" %d ",fibo(i));
 }
 
return 0;
 
}