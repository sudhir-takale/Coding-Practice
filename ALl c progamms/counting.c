//base case is mandatory
#include<stdio.h>
int count(int n){
    if (n<=0)
    {
        return 0;
    }
   
    //    count(n - 1);  if you want output in the ascending order then use the call first
       printf("\n%d",n);
       count(n-1);
   
}
int main(){
 
 int n;
 printf("\nEnter the input");
 scanf("%d",&n);
 printf("\nCounting...");

 count(n);
 
return 0;
 
}
