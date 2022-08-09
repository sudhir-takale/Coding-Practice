#include<stdio.h>

int printnum(int n){
    if (n==0){
        return 0;
    }
    else{
        printf("%d\n",n);
        printnum(n-1);
    }
}

int main(){

int a;
printf("\nenter the value of n");
scanf("%d",&a);
printnum(a);
 
 
return 0;
 
}