#include<stdio.h>

int fact(int n){
    int next;

    if (n==0)
    {
        return 1;
    }
    next= n*fact(n-1);
    return next;
} 
int main(){
 int k,m;
 printf("\nEnter the value of input");
 scanf("%d",&k);
 m=fact(k);
 printf("%d",m);
 
 
return 0;
 
}