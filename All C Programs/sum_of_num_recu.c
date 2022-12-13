#include<stdio.h>
  
//return 1+2+3+4---(n-1)+n
//part before the n is the left part.

int sum_n(int n){
    if (n==0)
    {
        return 0;
    }
    
    int left_part=sum_n(n-1);
    return left_part+n;
}


int main(){
 
 int n;
 printf("\nEnter the input:");
 scanf("%d",&n);
 printf("%d",sum_n(n));

 
return 0;
 
}