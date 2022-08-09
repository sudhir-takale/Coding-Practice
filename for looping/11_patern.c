#include<stdio.h>
  
int main(){
 
 int n,i,j;
 printf("\nEnter the numbers that how many rows you want to print :");
 scanf("%d",&n);
 for(i=n;i>=1;i--){
     for(j=n;j>=i;j--){
         printf("%d",i);//By changing the value of printf we can get * pattern
     }
     printf("\n");
 }
 
 
return 0;
 
}