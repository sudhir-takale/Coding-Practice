#include<stdio.h>
  
int main(){
 
 int num,rev=0,rem; 
 printf("\nEnter the number  :");
 scanf("%d",&num);
 while (num!=0)  
 {
     rev=num%10;

     rev=rev*10+rem;
     num=num/10;

 }
 printf("The reverse of given number is %d",num);
 
return 0;
 
}