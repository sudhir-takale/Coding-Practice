#include<stdio.h>
  
int main(){
 
 int num=1,fact=1,i=1;
 printf("\nEnter the number :");
 scanf("%d",&num);
 while(i<=num){
     fact=fact*i;
     i++;

 }
 printf("Factorial of  %d is : %d",num,fact);
 
return 0;
 
}